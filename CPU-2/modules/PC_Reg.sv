module PC_Reg #(
    parameter WIDTH = 32
)(
  input logic              clk,
  input logic              rst,
  input logic  [WIDTH-1:0] next_PC,
  output logic [WIDTH-1:0] PC

);

always_ff @ (posedge clk, posedge rst)
  if (rst) PC <= 32'b0;
  else     PC <= next_PC;

endmodule
