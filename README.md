# IAC Team Project: RISC-V RV321 Processor

---

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
3. A folder called `rtl` with the source of the processor. If there are multiple versions due to the stretched goals, the team may use multiple branches. The `README.md` file must provide sufficient explanation for the assessor to understand what the team member has done and how to find their work on all branches they wish to be assessed.  The `rtl` folder should also include a `README.md` file listing who wrote which module/file.
4. A `test` folder with the F1 program. The folder must also contain test results for the processor successfully executing the F1 program and the assessor's reference program.
5. The name of the repo has team number 36 at the end.
6. Provide a Makefile or a shell script that allows the assessor to build the team's processor model and run the testbench to repeat what the team had achieved.

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

## Tasks/contributions

---

### By Week 1 (Thu 8 Dec)

- [ ] Program Counter and related adders. (Blue) Contibutors: Erenkai

- [ ] The Register File, ALU and the related MUX. (Red) Contributors: Jim, Erenkai(co)

- [ ] The Control Unit, the Sign-extension Unit and the instruction memory. (Green) Contributors: Clifford, Ajanthaan

- [ ] The testbench and verification of Blue working via gtkWave and Vbuddy (where appropriate) Contributors: Erenkai

- [ ] The testbench and verification of Red working via gtkWave and Vbuddy (where appropriate) Contributors: Jim

- [ ] The testbench and verification of Green working via gtkWave and Vbuddy (where appropriate) Contributors: Clifford

- [ ] The testbench and verification of final design working via gtkWave and Vbuddy (where appropriate) Contributors: Ajanthan, Clifford (co)
