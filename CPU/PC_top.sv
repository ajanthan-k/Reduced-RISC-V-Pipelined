module PC_top #(
  parameter WIDTH = 32


)(
  input logic    clk,
  input logic    rst,
  input logic [WIDTH-1:0] ImmOp, 
  input logic PCsrc,
  output logic [WIDTH-1:0] PC,
  output logic [WIDTH-1:0] PCPlus4
);
  logic [WIDTH-1:0] next_PC;
  logic [WIDTH-1:0] branch_PC;

  assign PCPlus4 = PC + 4;
  assign branch_PC = PC + ImmOp; 

  assign next_PC = PCsrc ? branch_PC : PCPlus4;

/*Mux_1 Mux_1 (
  .PCsrc (PCsrc),
  .inc_PC (inc_PC),
  .branch_PC (branch_PC),
  .next_PC (next_PC)
);
*/
PC_Reg PC_Reg
 (
  .clk (clk),
  .rst (rst),
  .next_PC (next_PC),
  .PC (PC)
);

endmodule
