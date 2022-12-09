module Writeback #(
  parameter WIDTH = 32

)(
  //input logic    clk,
  //input logic    rst,
  input logic [WIDTH-1:0] ReadDataW,
  input logic [WIDTH-1:0] PCPlus4W,
  input logic [WIDTH-1:0] ALUResultM,
  input logic [1:0] ResultSrcW,

  output logic [WIDTH-1:0] ResultW


);
  logic [WIDTH-1:0] RdW;


Writeback_mux Writeback_mux (

  .ALUResultM (ALUResultM);
  .ReadDataW (ReadDataW);
  .PCPlus4W (PCPlus4W);
  .ResultW (Resultw);
  .ResultSrcW (ResultSrcW)

);

endmodule