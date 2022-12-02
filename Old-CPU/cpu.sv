module cpu #(
    parameter ADDRESS_WIDTH = 32
)(
    input clk,
    input rst,
    output [ADDRESS_WIDTH-1:0] a0

);
   
    // logic [ADDRESS_WIDTH-1:0] instr;
    // logic ImmSrc;
    logic EQ;
    logic [ADDRESS_WIDTH-1:0] PC;
    logic [ADDRESS_WIDTH-1:0] ImmOp;
    logic PCsrc;
    logic RegWrite;
    logic [3-1:0] ALUctrl; //needs to be 3 bit
    logic ALUsrc;
    logic ImmSrc;
    logic [ADDRESS_WIDTH-1:0] instr;
    

//blue
PC_top blue (
  .clk(clk),
  .rst(rst),
  .ImmOp(ImmOp),
  .PCsrc(PCsrc),
  .PC(PC)
);

//green
instrmem rom (
    .A(PC),
    .RD(instr)
);

control ctrl (
    .EQ(EQ),
    .instr(instr[6:0]), //how to take the last 7 bits of instr from rom
    .RegWrite(RegWrite),
    .ALUctrl(ALUctrl),
    .ALUsrc(ALUsrc),
    .ImmSrc(ImmSrc),
    .PCsrc(PCsrc)
);

extend sign_ext (
    .Imm(instr),  //same here
    .ImmSrc(ImmSrc),
    .ImmOp(ImmOp)
);

//red
red_top red(
  .ImmOp(ImmOp),
  .clk(clk),
  .RegWrite(RegWrite),
  .ALUctrl(ALUctrl),
  .ALUsrc(ALUsrc),
  .rs1(instr[19:15]), //each are 5  bits long
  .rs2(instr[24:20]), //does this work?
  .rd(instr[11:7]),

  .EQ(EQ),
  .a0(a0)
);

endmodule
