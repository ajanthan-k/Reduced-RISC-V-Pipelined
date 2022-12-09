module cpu #(
    parameter ADDRESS_WIDTH = 32
)(
    input clk,
    input rst,
    output [ADDRESS_WIDTH-1:0] a0

);
   
    // logic [ADDRESS_WIDTH-1:0] instr;
    // logic ImmSrc;
    logic Zero;
    logic [ADDRESS_WIDTH-1:0] PC;
    logic [ADDRESS_WIDTH-1:0] PCPlus4;
    logic [ADDRESS_WIDTH-1:0] PCTarget;
    logic [ADDRESS_WIDTH-1:0] ImmOp;
    logic PCsrc;
    logic RegWrite;
    logic [3-1:0] ALUctrl; //needs to be 3 bit
    logic ALUsrc;
    logic [1:0] ImmSrc;
    logic [ADDRESS_WIDTH-1:0] instr;
    logic [1:0] ResultSrc;
    logic MemWrite;
    logic JALRctrl;

//blue
PC_top blue (
  .clk(clk),
  .rst(rst),
  .PCTarget(PCTarget),
  .PCsrc(PCsrc),
  .PC(PC),
  .PCPlus4(PCPlus4)
);

//green
instrmem rom (
    .A(PC),
    .RD(instr)
);

control ctrl (
    .Instr(instr), //how to take the last 7 bits of instr from rom
    .Zero(Zero),
    .PCSrc(PCsrc),
    .ResultSrc(ResultSrc),
    .MemWrite(MemWrite),
    .ALUControl(ALUctrl),
    .ALUSrc(ALUsrc),
    .ImmSrc(ImmSrc),
    .RegWrite(RegWrite),
    .JALRctrl(JALRctrl)
);

extend sign_ext (
    .Instr(instr),  //same here
    .ImmSrc(ImmSrc),
    .ImmOp(ImmOp)
);

//red
red_top red(
  .ImmOp(ImmOp),
  .clk(clk),
  .RegWrite(RegWrite),
  .MemWrite(MemWrite),
  .ALUctrl(ALUctrl),
  .ALUsrc(ALUsrc),
  .rs1(instr[19:15]),
  .rs2(instr[24:20]), 
  .rd(instr[11:7]),
  .Zero(Zero),
  .ResultSrc(ResultSrc),
  .a0(a0),
  .PCPlus4(PCPlus4),
  .PC(PC),
  .PCTarget(PCTarget),
  .JALRctrl(JALRctrl)
);

endmodule
