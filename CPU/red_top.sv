module red_top #(
    parameter ADDRESS_WIDTH = 5,
              ALUctrl_WIDTH = 3,
              DATA_WIDTH = 32
)(
  input logic clk,

  input logic [DATA_WIDTH-1:0] ImmOp,
  input logic RegWrite,
  input logic [ALUctrl_WIDTH-1:0] ALUctrl,
  input logic ALUsrc,
  input logic [ADDRESS_WIDTH-1:0] rs1,
  input logic [ADDRESS_WIDTH-1:0] rs2,
  input logic [ADDRESS_WIDTH-1:0] rd,
  input logic MemWrite,
  input logic [1:0] ResultSrc,
  input logic [DATA_WIDTH-1:0] PCPlus4,
  input logic [DATA_WIDTH-1:0] PC,
  input logic  JALRctrl,

  output logic  Zero,
  output logic [DATA_WIDTH-1:0] a0,
  output logic [DATA_WIDTH-1:0] PCTarget
);
  
   logic [DATA_WIDTH-1:0] SrcA;
   logic [DATA_WIDTH-1:0] regOp2;
   logic [DATA_WIDTH-1:0] ALUop2;
   logic [DATA_WIDTH-1:0] ALUout;

   logic [DATA_WIDTH-1:0] result;
   logic [DATA_WIDTH-1:0] readata;

  assign ALUop2 = ALUsrc ? ImmOp:regOp2;
  assign result = ResultSrc[1] ? PCPlus4 : (ResultSrc[0] ? readata : ALUout);
  assign PCTarget = JALRctrl ? ALUout : PC + ImmOp;

ram ram (
  .clk (clk),
  .AD1 (rs1),
  .AD2 (rs2),
  .AD3 (rd),
  .WE3 (RegWrite),
  .WD3 (result),
  .a0 (a0),
  .RD1 (SrcA),
  .RD2 (regOp2)
);

ALU ALU (
   .ALUop1 (SrcA),
   .ALUop2 (ALUop2),
   .ALUctrl (ALUctrl),
   .ALUout (ALUout),
   .Zero (Zero)
);

datamem datamem (
  .RD (readata),
  .clk (clk),
  .A (ALUout),
  .WE (MemWrite),
  .WD (regOp2)
);

endmodule
