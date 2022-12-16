**Jim Personal Statement**

## ALU and Register file

The group project is about designing a RISC-V RV32I Processor, and I mainly worked on the ALU & Register file section. I based my design on the lab 4 Reduced RISC-V that I have made.  I made sure the ALU instructions that are being used in the f1 light and reference program are implemented, this includes `add, subtract, and, or, xor, logical shift left and logical shift right`. For the register file, I used a for loop to initialise all the registers to `32'b0`. In addition, the WE3 signal is used to control writing to the register. 


## The Register Zero
In this project, I’ve made several mistakes while creating the ALU & register file, as well as trying to implement the pipelining section. An error occured while the “ret” instruction was executed. This is a pseudo instruction for JALR, where we write the next PC to register zero, effectively binning it. However,initially, we didn’t have any logic preventing Register zero from changing, and every time we execute instructions that use register zero such as "li" , the value in `register zero` could be altered by a `previous instruction` that wrote to the zero register causing the result to be wrong.  Therefore, apart from the WE3 signal, we also added a condition so that register zero will not be changed. I also made a few careless mistakes while creating the top files for pipelining register.

[ALU instruction](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-36/pull/2/commits/bb13cb73c7e25c4ad130a59b63ce78c1cd145c8a), [Register file](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-36/commit/d02dafa83e3f834bc496019cb351dcb9fb77a3ab)


## Pipelining Implementation
After we finished with the single cycle RISC-V design, we worked on the stretch goal 1 Pipelining. In our single cycle design, the register file, ALU and data memory sections are all combined together, but in order to implement the Pipelining design, we need to divide the CPU into 5 different sections:  this includes Fetch, Decode, Execute, Memory and Write back. 

Therefore, I worked on the `Execute, Memory and Write back` Sections. First creating separate top files for each part and reorganising how they are connected to each other following the design from lecture 8. For the Memory write back section, I also added a MUX, so that the CPU can write back the correct result.

[Pipelining Execute Stage 1](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-36/commit/bb13cb73c7e25c4ad130a59b63ce78c1cd145c8a), [Pipelining Write back Stage 1](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-36/commit/412b755aad3db77ed9e7f61eda70a5959d866f3c), [Pipelining Memory Stage 1](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-36/commit/1f09f8eae64efd418a96884e7d5a3995575c2f89), [Pipelining write back2](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-36/commit/784e0f17a24b37600303bf2e00bc05987772209d)


## Pipelining Hazards
For the pipelining hazards, I worked on solving the `control hazards`. There are two approaches in solving these hazards, through software or through hardware. The software approach is by adding `nops `in the program, and the hardware one is by adding `flush` logic in hardware.  I decided to go with the hardware approach, since I think this will reduce the complexity of the assembly code, and it's also a more universal approach. We don't need to worry about changing the program again for control hazard, if another task is given. 

Control hazard occurs when instructions are fetched before branch occurs, i.e; the “JAL and bne ” instruction. These instructions must be flushed from the registers if branch happens. To implement this, I added a logic called `flush`, which is driven by the `PCSrc`. The Fetch and Decode Register will be reset when `flush` is = 1, which is high when a Branch or Jump instruction occurs.

[Add Flush for control hazard(cpu top)](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-36/commit/a4bc97c642cfed34b54befc5a4ed606d1413fb18), [Add Flush for control hazard(Decode+Execute_top)](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-36/commit/a49803f03bb319ca87e19ce5433518a47817fd1e)


## Conclusion and Reflection
After participating in this project, I developed a deeper understanding of how the RISCV processor works from the top to the bottom, and how we could write a program in assembly language, then go on to implement different instructions that were being used in the register to achieve our goals in the end. In addition, I also learned about how we could use GitHub as a collaboration platform to develop team projects.
For example, we can create and commit to different branches while we work on different tasks, then in the end merge back etc.

Apart from that, I also learned about how we could implement the Pipelining design from a single cycle CPU. For example, by adding different pipelining registers and using software or hardware approaches to solve the hazards that Pipelining design might have. 
 
if I were to do it again, perhaps for the pipeleing I would go directly into reorganising the single cycle CPU design into a single file, instead of first dividing them into five parts and then combining them back together, because it will be quicker. However, I think first dividing them into different sections, which is the way we did it will make the debugging process easier, and mistakes can be discovered more simply.