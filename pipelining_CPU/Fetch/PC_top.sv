module PC_top #(
  parameter WIDTH = 32

)(
  input logic    clk,
  input logic    rst,
  input logic PCsrc,
  input logic [WIDTH-1:0] PCTarget,

  output logic [WIDTH-1:0] PC,
  output logic [WIDTH-1:0] PCPlus4F
);
  logic [WIDTH-1:0] PCF';

  assign PCPlus4F = PC + 4;
  assign PCF' = PCsrc ? PCTarget : PCPlus4F;

PC_Reg PC_Reg
 (
  .clk (clk),
  .rst (rst),
  .PCF' (PCF'),
  .PC (PC)
);


endmodule
