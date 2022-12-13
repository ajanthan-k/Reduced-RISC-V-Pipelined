module Fetch_top #(
  parameter WIDTH = 32

)(
  input logic    clk,
  input logic    rst,
  input logic PCsrcE,
  input logic [WIDTH-1:0] PCTargetE,

  output logic [WIDTH-1:0] PCF,
  output logic [WIDTH-1:0] InstrF,
  output logic [WIDTH-1:0] PCPlus4F
);
  logic [WIDTH-1:0] PCF';

  assign PCPlus4F = PC + 4; //increment block
  assign PCF' = PCsrcE ? PCTargetE : PCPlus4F; //the mux

PC_Reg PC_Reg
 (
  .clk (clk),
  .rst (rst),
  .PCF' (PCF'),
  .PCF (PCF)
);

instrmem instrmem
(
 .A(PCF), 
 .RD(InstrF)
)
endmodule
