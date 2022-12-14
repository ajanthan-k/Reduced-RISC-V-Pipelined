module PC_top #(
  parameter WIDTH = 32

)(
  input logic    clk,
  input logic    rst,
  input logic PCsrc,
  input logic [WIDTH-1:0] PCTarget,

  output logic [WIDTH-1:0] PC,
  output logic [WIDTH-1:0] PCPlus4
);
  logic [WIDTH-1:0] next_PC;

  assign PCPlus4 = PC + 4;
  assign next_PC = PCsrc ? PCTarget : PCPlus4;

PC_Reg PC_Reg
 (
  .clk (clk),
  .rst (rst),
  .next_PC (next_PC),
  .PC (PC)
);

endmodule
