module Fetch #(
  parameter WIDTH = 32

)(
  input logic    clk,
  input logic    rst,
  input logic PCsrc,
  input logic [WIDTH-1:0] PCTarget,

  output logic [WIDTH-1:0] PCF,
  output logic [WIDTH-1:0] InstrF,
  output logic [WIDTH-1:0] PCPlus4
);
  logic [WIDTH-1:0] PCF;

  assign PCPlus4 = PC + 4;
  assign PCF = PCsrc ? PCTarget : PCPlus4;

PC_Reg PC_Reg
 (
  .clk (clk),
  .rst (rst),
  .PCF (PCF),
  .PC (PC)
);

instrmem instrmem
(
 .A(PCF), 
 .RD(InstrF)
)
endmodule
