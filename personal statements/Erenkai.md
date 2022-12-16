# **Erenkai Zhu Personal statement**

## **Project Brief:**

 - I was responsible for writing the assembly code for the F1 starting light program. I had to consider the register and memory addressing modes, instruction format, and the machine code that our processor was to generate. I was also responsible for creating the top-file which defined the various components of the processor and the connections between them, upon that I also involve building the part of ALU instruction and the +4 instruction for single cycle CPU. 

## **Assembly Code**

 - Firstly, for the assembly code, our aim is to increment the F1 light until it reached its maximum, the light will turn of for a random time and restart the cycle after all the lights are off. My design is to split the assembly code into three sections: light up loop, delay & close light loop and the random generator loop.

**Light Up Loop:**

 - The coding for light up loop is quite straight forward, the idea is to increment the lights, by shifting the bit to left, and refill the left out empty bit. The process can be simply demonstrated by the diagram1 below:

```SystemVerilog
light_up_loop:
jal delay    # default x1
addi a3, a3, 1      # incre by 1
slli a0, a0, 1      # 亮灯 sllI shift, x2
addi a0, a0, 1
bne  a3, t1, light_up_loop  
```                                 

<p align="center"> <img src="Images/pic_1.jpg" /> </p><br>

**Random Generator Loop:**

 - The idea is to write an instruction that take the fourth and third bit and XOR them to form a value , and them shift 1 bit for the register. So, every time as the cycle refreshes, it will generate a different number. My initial plan was to implement logic that read the UK time and use the current clock to generate the random number, but then I realized that out CPU do not have IO(input and output), which means the RISC-V processor cannot read information from the outside world. The random number generator confuses me for a very long time, I discover the solution by having discussion with my friend, we discover the idea on shuffle card, where people take certain card and reinsert back to the library in a different position, this action will disrupt the order and act as a random number generator.

```SystemVerilog
andi a6, a4, 0x8 
andi a7, a4, 0x4
slli a4, a4, 1      # shift
srli a6, a6, 3      # shift x4 to the left most
srli a7, a7, 2      # shift x3 to the left most
xor a6, a6, a7      # x3 xor x4
or a4, a4, a6       # a4 is the new random number for delaying #working with bits
```

<p align="center"> <img src="Images/pic_2.jpg" /> </p><br>

**Delay & Close Light Loop:**

 - Next is the delay & close light module, it will count certain delays base on the random number it generated and all the lights will turn off, then it will return (using RET) to the start of cycle. 

**the Logic I used in this assembly code are:**
|  |  |
|--|--|
|li  | Load immediate |
| jal | Jump and link |
| addi | Add immediate |
| slli | Shift left logical immediate |
| bne | Branch not equal |
| andi | And immediate |
|  srli| Shift right logical immediate |
| xor | XOR |
|or  | OR |
| JALR |Jump and link register  |


**What I Learned:**

 - After I finish this part, I knew that I can easily write certain assembly code for any light up process.
 - I use li to load data to the register, however at the very beginning I use
```SystemVerilog
add a4 zero 1
```
- which mean load 1 to register a4, this might generate confusion, after research for a while, I found better way to use logic which is:
``` SystemVerilog
li a4 1
``` 
- [Assemnlyfile](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-36/commit/85fa59191957f28f1586cefa88f73acb353197f5)



## **Top File (CPU.SV)**

 - Apart from writing out the assembly code, I am responsible for making the Top file for CPU. Our aim is to split the original CPU into five distinct sections. The way our team work is implement the single cycle CPU and then upgrade the original CPU with pipelining features.
   
 - In order to perform, we make five sub files (Fetch, Decode, Execute, Memory, Writeback), and connect them in a top file called CPU.sv. My main assignment is to reconstruct the Fetch and Decode section, and assist my teammate on the rest of the three sections, after we have finished all the sections, I will make the top file called CPU.sv in order to link all these modules together.
   
 - The diagram below describes our layout, in this case, module named decode, execute, memory and writeback each will contain a failing edge register.

<p align="center"> <img src="Images/pic_3.jpg" /> </p><br>

 - The challenge we faced is the fact that the original top file is too messy and not well organized. The diagram below describes the top file layout for our single cycle CPU, at start we didn’t have experience on writing CPU, so the top layout for original single cycle CPU is not well designed, due to complicated layout, reconstruction become essential for pipelining. If we spent more time on planning the layout at the very beginning, we won’t come up a plan that redesign the entire CPU, the layout for original single cycle CPU should be similar compare to the pipelining CPU.
 
 <p align="center"> <img src="Images/pic_4.jpg" /> </p><br>

 -  Challenges are also encountered when I start the reconstruction. The pipelining CPU adds a number of instructions, especially for the control unit. In addition, we decide to rename the instruction in order to synchronize with the provided diagram, we believe this will lower the difficulty for debug, however the rename process is  more complicated than I thought, it is crucial that each logic needs to be renamed completely, we have encounter errors that some of logic have several versions of names due to typo and miss checked. However, most of these issues can be solved if the name of logic is synchronized with the coming plan.
 - To sum up, I learn that it is essential to spent on planning, take this CPU task as a example, we should be careful with the layer at the very beginning, success can only be achieve with stand foundation. 

Here are links:

- [Reorganising for pipelining](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-36/commit/7e4d2a7d0975d5586d7729ef6043be84d856d2ec)

- [fetch decode double check bugs solved](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-36/commit/f6ca27300208e705c493875476cf5c7827f8ebf7)

- [CPU.sv two module checked](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-36/commit/9d1b9c0acbfe21477d982620eb3bacae6305d858)

- [Execute top](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-36/commit/00b9cb0321c242453f0dd0ffb9fbdb492db7c602)

- [CPU.sv final checked](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-36/commit/6f6a87d15956e9cd932e3bf6089398ebc4cd9964)

## **Implementing ALU**

 - Apart from assembly and top file, I am also responsible for writing and assisting the ALU and the adding instruction. the implementation is quite straight forward, almost no challenge is encounter during this process.
 - However at the very start of writing mux for the +4 adder, I create a new file for mux, but them I realized that this is can simply achieved by writing: 

```SystemVerilog
assign y= s? branch_PC:inc_PC
```

Here are links:

- [ALU](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-36/commit/625806715b3ee132423cdc641ba4b13ff7e6b48a)

- [datamem](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-36/commit/3349327a0a963ae964b87a38bd3a6a8551f03790)
- [singlecycle +4 instruction with register](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-36/commit/d5186e01f29539d47bd8329d8a6a7e290845d533)

**In Conclusion:**
- In this project I learn a lot of writing skills for system Verilog, and I have learn the importance of teamwork and early planning. Assembly code is a powerful tool for enabling programmers to communicate directly with the processor and to create efficient algorithms. By understanding the processor’s architecture, instruction set and memory organization, a programmer can create assembly code that can be used to do a variety of tasks such as generating random numbers, lighting up LEDs and creating efficient algorithms.