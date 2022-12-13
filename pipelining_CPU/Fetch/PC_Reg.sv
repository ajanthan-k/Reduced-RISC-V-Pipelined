module PC_Reg #(
    parameter WIDTH = 32
)(
// interface signals
  input logic              clk,
  input logic              rst,
  input logic  [WIDTH-1:0] PCF',
  output logic [WIDTH-1:0] PCF

);

always_ff @ (posedge clk, posedge rst)
  if (rst) PCF <= 32'b0;
  else     PCF <= PCF';

endmodule
