module Execute #(
  parameter WIDTH = 32

)(
 // input logic    clk,
  //input logic    rst,

  input logic ALUsrcE,
  input logic [2:0] ALUControlE,

  input logic [WIDTH-1:0] RD1E,
  input logic[WIDTH-1:0]  RD2E,

  input logic [WIDTH-1:0] PCE,
  input logic  [WIDTH-1:0] ImmExtE,
  output logic [WIDTH-1:0] PCTargetE,

  output logic [WIDTH-1:0] WriteDataE,



);

  logic [WIDTH-1:0] RdE;
  logic [WIDTH-1:0] PCPlus4E;
  logic [WIDTH-1:0] ALUout;
  logic [WIDTH-1:0] SrcBE;
  logic [WIDTH-1:0] SrcAE;


  assign WriteDataE = RD2E;
  assign SrcBE = ALUsrcE ? ImmExtE:RD2E;
  assign PCTargetE = JALRctrl ? ALUout :  PCE + ImmExtE;
  


ALU ALU (
   .SrcAE (RD1E),
   .SrcBE (SrcBE),
   .ALUcontrolE (ALUControlE),
   .ALUout (ALUout),
   .ZeroE (ZeroE)
);

endmodule
