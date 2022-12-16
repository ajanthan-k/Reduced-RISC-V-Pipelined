
# Clifford's Personal Statement

## Brief Overview

___

As per the contributions table in the `rtl` folder, I worked on the instruction memory, control unit and data memory modules, which will be explained below. Note that three of the following links are directed to Ajanthan's commits, as they were committed on his laptop.

<br>

___

## The Control Unit

___

### **Single Cycle**

The control unit was constructed based on the schematic below, and thus consists of three modules: `control.sv`, `decode_main.sv`, and `decode_alu.sv`, where `control.sv` acts as the top level module linking the other two modules.

<center>

<img src = "https://user-images.githubusercontent.com/105637297/208180648-9b10f717-c680-4ce0-8a05-4e196ebdadc8.jpg" width=500> <br>

</center>

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
|JALRctrl| High when JALRctrl instruction is called. See below for further explanation.

</center>

*[Extra bit added](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-36/commit/bf94e31e0fc0c54cbce4a9961dbf47d9b5ca7a16#diff-bd4c82f8ba088ea33c9a7e7290753d24c3dfe700855d6b481cb99f788b41c0db) to make `ImmSrc` 3-bit instead of 2-bit, as there are more than 4 instruction types that require sign extension. See Ajanthan's Personal Statement for more details on `extend.sv`.

**[Extra bit added](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-36/commit/e978755ba2ee52edcc01439cd2f9f8c6c3f1bc7b#diff-bd4c82f8ba088ea33c9a7e7290753d24c3dfe700855d6b481cb99f788b41c0db) to make `ResultSrc` 2-bit to select between 3 options. `PCPlus4` is for the `JAL` and `JALR` instructions.

<br>

In addition to the signals in the schematic, the `JALRctrl` signal was added to signal an additional mux to select `PCTarget` when high and `ALUResult` when low to implement the  `JALR` instruction. See Ajanthan's Personal Statement for more details.

Unlike the schematic, [`fn3` is also read](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-36/commit/d9b432c7f8dcb1974e26317ba2275fdf665aac83#diff-bd4c82f8ba088ea33c9a7e7290753d24c3dfe700855d6b481cb99f788b41c0db) by the main decoder, as it is required to determine whether a B-type instruction was performing a `bne` or `beq` function, through the following line of code: 

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

This is used to determine the `ALUControl` output signal. This signal tells the ALU to perform the [following functions](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-36/commit/a0195637a242b8f04b2a79673429c8dad5a8642f#diff-827d8ce226eb972aab2379aea90868c420771b394cc8ffa2a3f3a79220b7a4e7):

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

### **Pipelining**

For pipelining, the following changes were made to the control unit:

<center>

<img src = "https://user-images.githubusercontent.com/105637297/208183419-8f37192c-07e4-42ff-974e-6e13f19e7f75.jpg" width=750> <br>

</center>

* The `PCSrc` signal is generated outside the control unit with the two logic gates as depicted above, unlike the basic single cycle processor found in this project.
* The `Zero` input and `PCSrc` output are computed in a [seperate top module](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-36/commit/822897e0957bef3a34e3d461021f7ca142bf6f44#diff-cf9e4f5c9ccce7dad345c40c123f1f0bcaa421b506925dde71b4f11a274814e5) `Execute_top.sv`, as depicted in the slide above. This is done as `Zero` is not computed until the execute stage.
* The `Jump` output signal was [added](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-36/commit/ba1dd4ab4251bd6c574f7d55445a7a5a891a8510#diff-9b2a1967879886529fa467dd2b76345a672a438ffef8a72da2d3fdb79feefb0e) to signal Jump instructions, unlike the basic single cycle processor, where the `Branch` instruction was responsible for both Jump and Branch instructions.
* `Branch` is an output signal, not an internal signal as `PCSrc` is generated outside the control unit.

### **Reflections**

After working on the control unit, I believe I gained a more comprehensive understanding of the function of this component and the workings of the CPU as a whole. While working on this project, I decided to build the control unit following the schematics on the slides in order to improve readibility and organisation.

However, this was only successful in Lab 4, as when further instructions of the same type are implemented, such as branch and store/load instructions, `decode_main.sv` would also have to consider `fn3` and defeat the purpose of seperating the control unit into individual components. One solution to this would be to generate all signals in one component with nested case statements, similar to what other teams have accomplished. This would also have the additional benefit of reducing "Bits not used" errors, which is mostly caused by `decode_alu.sv`. Another solution would be to make the ALU decoder to be responsible for extra signals that rely on `fn3` and others, though this may be counterintuitive if the ALU decoder is overburdened.

Another mistake I made was concatenating the output for `decode_main.sv` for convenience at the cost of readibility, which was not good practise. Another significant mistake was the combinational loop error generated by this line of code within the case statement in `decode_main.sv`:

```systemverilog
PCSrc = Zero & Branch;
```

which was caused as there was no data in `Zero` at the beginning. This was amended by placing the assign statement outside the case statement.

<br>

___

## The Instruction Memory

___

### **Single Cycle and Pipelining**

The instruction memory reads from a hex file, which is assumed to be in little endian. As a result, every location in the ROM is [8 bits](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-36/commit/53ae3a052caec722c954ead25ef9e07848f502b4#diff-5c422521aa2665e5cb94f547429436db226b6838f6f5b1b20a764e0b8ad53423), and the total size of the ROM is 2<sup>12</sup>, as only the [least significant 12 bits](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-36/commit/bf94e31e0fc0c54cbce4a9961dbf47d9b5ca7a16#diff-5c422521aa2665e5cb94f547429436db226b6838f6f5b1b20a764e0b8ad53423)

<center>

<img src = "https://user-images.githubusercontent.com/105637297/208183651-e4bd301d-24df-4699-84a8-eca4dba00359.jpg" width=360> <br>

</center>

As the PC increments by 4 unless a `Jump` or `Branch` instruction is implemented, the `instr_mem.sv` module reads the instruction from the input address and concatenates it with the next three instructions to output the[ full 32-bit instruction `RD`.](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-36/commit/53ae3a052caec722c954ead25ef9e07848f502b4#diff-5c422521aa2665e5cb94f547429436db226b6838f6f5b1b20a764e0b8ad53423)

### **Reflections**

Working with the instruction memory helped me better understand how data is read and written from hex files through little endian, and how the instruction data within memory are stored. It also helped me understand the `$readmemh` and `$readmemb` functions.

<br>

___

## The Data Memory

___

### **Single Cycle and Pipelining**

The data memory functions in a similar fashion to the instruction memory, although it is also able to store new data in memory. Once again, the size of memory is determined by the memory map, as shown above.

This module is only able to perform the [`lbu` and `sb`](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-36/commit/bf94e31e0fc0c54cbce4a9961dbf47d9b5ca7a16#diff-8a10635bb47e2828ccb23b522dbd469809a95899d8610e1ffaa60db8e9a7d635) instructions, as these were the only instructions needed for both the reference and F1 program. The `sb` instruction takes the least significant 8 bits of `RD2`, the second register determined by `register.sv`, and writes it to the address in memory according to `ALUResult` if the Write Enable signal `MemWrite` is high. The module then reads the 8-bit data stored in that address and zero extends it into a 32-bit result before outputting the data, thus performing the `lbu` instruction.

### **Reflections**

For the data memory, Ajanthan and I spent more time than was necessary trying to implement the store and load instructions. The mistake we made was that we did not properly understand the `sb` and `lbu` instructions beforehand, which could have been avoided by simply asking a GTA to explain the instructions.

In terms of improvements, more instructions can be added to the data memory. The main challenge of implementing half and word instructions would be to determine whether the `ALUresult` were multiples of 2 and 4 respectively. This can be accomplished by simply checking whether the last and second to last bits of the input were equal to 0. A new control signal would have to be added for data memory to determine the instruction type as well. This was not implemented due to time constraints.

<br>

___

## Final Throughts

___

As I worked on the control unit and was fairly involved in other components, I gained a deeper understanding of the different functions and the overall relationship between each component in the processor. I also better understood how memory works in the lower levels of a RISC-V processor. Moreover, as this is the first time I ever used SystemVerilog and GitHub in a collaborative project, I not only gained some level of competency in the HDL, but also learnt how to better allocate work between each member and improve the efficiency of collaborative efforts while working on the same problem.

If we were to work on this project again, we would test each stage or section of the processor individually before debugging the whole CPU after all components were written. Additionally, pull requests would be enforced on GitHub, and having multiple people work on the same branch simultaneously would be discouraged. Finally, co-author commits should be used more often to more accurately represent contributions in commit history.
