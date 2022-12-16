# IAC Team Project: RISC-V RV321 Processor

---

NB: This file should briefly describe what the team has achieved. This is a joint statement for the team and must include an agreed statement on the contributions by each member of the team.

## Group 36 Project Members

* Ajanthan Kanagasabapathy
* Clifford Chan
* Erenkai Zhu
* Jim Zhu

<br>

---

## Deliverables (by _midnight Friday 16 Dec_)

---

1. A `README.md` file in the root directory that briefly describe what the team has achieved. This is a **joint statement** for team and must include an agreed statement on the contributions by each member of the team. 
2. Each individual's **personal statement** explaining what they contributed, reflection about what they have learned in this project, mistakes they made, special design decisons, and what they might do differently if they were to do it again or have more time.  This statement must be succinct and to the point, yet must include sufficient details for the assessor to check against the push history of the repo so that any claims can be verified. Including links to a selection of specific commits which demonstrate work done by each member is advised. If work is shared with another member on a module, make sure to give them [co-author credit](https://docs.github.com/en/pull-requests/committing-changes-to-your-project/creating-and-editing-commits/creating-a-commit-with-multiple-authors#creating-co-authored-commits-on-the-command-line). Additionally, try to make meaningful commit messages.
3. A folder called `rtl` with the source of the processor. If there are multiple versions due to the stretched goals, the team may use multiple branches. The `README.md` file must provide sufficient explanation for the assessor to understand what the team member has done and how to find their work on all branches they wish to be assessed *(I think this is the main branch README file?)*.  The `rtl` folder should also include a `README.md` file listing who wrote which module/file.
4. A `test` folder with the F1 program. The folder must also contain test results for the processor successfully executing the F1 program and the assessor's reference program. *(remember to do this)*
5. The name of the repo has team number 36 at the end.
6. Provide a Makefile or a shell script that allows the assessor to build the team's processor model and run the testbench to repeat what the team had achieved. *(remember to do this)*

<br>

---

## Single-Cycle RV32I Design

---

>This is the basic goal for every team - to implement the basic RV32I instruction set by extending the Reduced RISC-V design in Lab 4.

THe team does not need to implement every instruction in the RV32I instruction set, but the JAL instruction must be implemented so that code can be run using its subroutines.

<br>

---

## Stretched Goal 1: Pipelined RV32I Design

---

>Once the basic goal is completed, modify the single-cycle processor to a pipelined processor.  

Handle data and control hazards in software - by identifying and inserting NOPs, or by re-ordering instructions to avoid hazards.  The team is not expected in implement hardware hazard detection, forwarding/bypassing or stalling hardware.

As before, make sure that the design works by successfully running the team's version of the F1 light program.

<br>

---

## Additional Stretched Goal 1: Adding Data Memory Cache

---

As an additional stretch goal to the pipelined processor, the team may also add data cache to data memory. This is of course a "toy" exercise because the data memory is already a single-cycle memory and very fast. Adding cache memory may make this slower, not faster.  However, in real designs, data memory could be quite slow, in which case adding cache memory will improve performance.  Nevertheless, learn how cache memory works by implementing it as an addition to the team's pipelined processor.

The data cache capacity should be no more than 256 bytes.

<br>

---

## The Project

---

### The Control Unit

#### **Single Cycle**

The control unit was constructed based on the schematic on Slides 17-19 from Lecture 7(link?), and thus consists of three modules: `control.sv`, `decode_main.sv`, and `decode_alu.sv` (link), where `control.sv` acts as the top level module linking the other two modules.

(L7 S17 pic)

The above signals were implemented in `decode_main.sv` and each have the following functions:

<center>

|**Control Signal**|**Function**|
|:-------|:------------|
|RegWrite| Tells `register.sv` to write to `rd` when high |
|ImmSrc | Tells `extend.sv` the instruction type (I,S,B,U,J)*
|ALUSrc  | Selects sign extension when high, `RD2` when low|
|MemWrite| Tells `data_mem.sv` to perform a store instruction when high|
|ResultSrc| Selects `ALUResult` or `ReadData` or `PCPlus4`**
|ALUOp  | Tells `decode_alu.sv` the instruction type for `ALUControl` output
|Branch | High when branch or jump instruction is called. See below for further explanation.
|PCSrc  | Signals Program Counter to jump to next location instead of incrementing by 4 when high
|JALRctrl| ????

</center>

*Extra bit added to make `ImmSrc` 3-bit instead of 2-bit, as there are more than 4 instruction types that require sign extension.

**Extra bit added to make `ResultSrc` 2-bit to select between 3 options. `PCPlus4` is for the `JAL` and `JALR` instructions.

<br>

In addition to the signals in the schematic, the `JALRctrl` signal was added...(explain fn/purpose)

Unlike the schematic, `fn3` is also read by the main decoder, as it is required to determine whether a B-type instruction was performing a `bne` or `beq` function, through the following line of code: 

```systemverilog
Branch = (fn3 == 3'b001) ? !Zero : Zero;
```

where input signal `Zero` is high when `RD1 == RD2` in the ALU. This then determines `PCSrc`:

```systemverilog
assign PCSrc = Branch ? 1'b1 : 1'b0;
```

For `decode_alu.sv`, the internal logic `decoder` concatenates the following:

```systemverilog
assign decoder = {ALUOp, fn3, opcode[5], fn7[5]}; 
```

This is used to determine the `ALUControl` output signal. This signal tells the ALU to perform the following functions:

<center>

|**ALUControl**|**Function**|
|:-------|:------------|
|000|add|
|001|subtract|
|010|and|
|011|or|
|100|xor|
|101|lui*|
|110|slli|
|111|srli|

</center>

*This is different from the slides

//Do I explain split of alu and main originally to simplify complexity?

#### **Pipelining**

(Table for new signals?) 

<br>

### The Instruction Memory

#### **Single Cycle**
The instruction memory reads from a hex file, which is assumed to be in little endian. As a result, every location in the ROM is 8 bits, and the total size of the ROM is 2^12, as only the least significant 12 bits change according to the memory map.

(memory map)

As the PC increments by 4 unless a `Jump` or `Branch` instruction is implemented, the `instr_mem.sv` module reads the instruction from the input address and concatenates it with the next three instructions to output the full 32-bit instruction `RD`.

//talk about learning little endian in PS

#### **Pipelining**

<br>


### The Data Memory

//I can talk about fixing this in PS, and the challenges of not incrementing by 4 like instr_mem
#### **Single Cycle**

The data memory functions in a similar fashion to the instruction memory, although it is also able to store new data in memory. Once again, the size of memory is determined by the memory map, as shown above. 

This module is only able to perform the `lbu` and `sb` instructions, as these were the only instructions needed for both the reference and F1 program (link??). The `sb` instruction takes the least significant 8 bits of `RD2`, the second register determined by `register.sv`, and writes it to the address in memory according to `ALUResult` if the Write Enable signal `MemWrite` is high. The module then reads the 8-bit data stored in that address and zero extends it into a 32-bit result before outputting the data, thus performing the `lbu` instruction.

#### **Pipelining**
