---

# Contributors for each module

---

|**Module**|**Ajanthan**|**Clifford**|**Erenkai**|**Jim**|
|:-------|:------------:|:-------:|:-------:|:---------:|
|**Assembly**|
| F1Program.s |  X   |        |     *    |           |
| F1Pipeline.s |  X   |        |     *    |           |
|**Top**|
| cpu.sv |        X     |    X    |    *    |     X     |
| cpu_tb.cpp |    *     |         |         |           |
|**Fetch**|
| instr_mem.sv |   X    |    *    |         |           |
| PC_Reg.sv |           |         |    *    |           |
|**Decode**|
| control.sv |          |    *    |         |           |
| decode_alu.sv |   X   |    *    |         |           |
| decode_main.sv |  X   |    *    |         |           |
| extend.sv |     *     |         |         |           |
| register.sv |   X     |         |         |     *     |
|**Execute**|
| ALU.sv |       X      |         |    X    |     *     |
|**Memory**|
| data_mem.sv |    X    |    *    |         |           |
|**Writeback**|
| Writeback_mux.sv |    |         |         |     *     |
|**Final testing**|
|Debug & verification|***|    X   |    X    |           |

'*' = Principle contributor

'X' = Co-authors
