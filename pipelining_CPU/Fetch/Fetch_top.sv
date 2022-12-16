module Fetch_top #(
  parameter WIDTH = 32

)(
  input logic    clk,
  input logic    rst,
  input logic PCSrcE,
  input logic [WIDTH-1:0] PCTargetE,

  output logic [WIDTH-1:0] PCF,
  output logic [WIDTH-1:0] InstrF,
  output logic [WIDTH-1:0] PCPlus4F
);
  logic [WIDTH-1:0] nextPCF;

  assign PCPlus4F = PCF + 4;                     
  assign nextPCF = PCSrcE ? PCTargetE : PCPlus4F; 

PC_Reg PC_Reg (
  .clk (clk),
  .rst (rst),
  .nextPCF (nextPCF),
  .PCF (PCF)
);

instrmem instrmem (
 .A(PCF), 
 .RD(InstrF)
);

endmodule
