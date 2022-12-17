# IAC Team Project: RISC-V RV321 Processor

---

For this project, the basic single cycle RV321 and pipelined design were completed, as well as an F1 program to simulate the designs. The designs can only perform a select number of RISC-V instructions to execute both the reference and F1 programs. The following work was allocated to each member for the single cycle procesor:

* Ajanthan Kanagasabapathy: Testing and debugging, sign extension and team leader
* Clifford Chan: Control Unit, instruction and data memory and assisting debugs
* Erenkai Zhu: source code, wiring top levels and assisting debugs
* Jim Zhu: Register, ALU

For the pipelined design:

* Ajanthan Kanagasabapathy: Final testing and debugging, implementing new signals and team leader
* Clifford Chan: Stage register for Fetch, Stage level wiring with first round of debugging and control unit
* Erenkai Zhu: Top level wiring, stage register for Fetch
* Jim Zhu: Writeback Stage, stage registers for writeback, memory and execute

For specific module contributions, see the `README.md` file in `rtl`. For explanations for each component of the design, see each member's Personal Statements.

On pipelined-design branch, find video tests for pipelined results. On the main branch, CPU-2 contains the source for the single cycle processor, and the F1 program is run with runF1.sh. When changing programs, change both instr_mem.sv and data_mem.sv files respectively to run correct program. Reference program testing with vbuddy can be run with runref.sh.

Pipelined design cpu source is also on main, with similar test files included - repeat as above changing respective files within Fetch and Memory files respectively.
