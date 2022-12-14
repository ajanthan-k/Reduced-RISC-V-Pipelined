---

# Contributors for each module

---

|**Module**|**Ajanthan**|**Clifford**|**Erenkai**|**Jim**|
|:-------|:------------:|:-------:|:-------:|:---------:|
|**Assembly**|
| assembly.s |    x     |        |     *    |           |
| realassembly.s |  x   |        |     *    |           |
|**Top**|
| cpu.sv |              |    x    |    *    |           |
| cpu_tb.cpp |    *     |         |         |           |
|**Fetch**|
| instr_mem.sv |   x    |    *    |         |           |
| PC_Reg.sv |           |         |    *    |           |
|**Decode**|
| control.sv |          |    *    |         |           |
| decode_alu.sv |   x   |    *    |         |           |
| decode_main.sv |  x   |    *    |         |           |
| extend.sv |     *     |         |         |           |
| register.sv |   x     |         |         |           |
|**Execute**|
| ALU.sv |       x      |         |    x    |     *     |
|**Memory**|
| data_mem.sv |    x    |    x    |         |           |
|**Writeback**|
| Writeback_mux.sv |    |         |         |      *    |
|**Final testing**|
|Debug & verification| *|         |        |         |

'*' = Principle contributor
'x' = Co-authors
