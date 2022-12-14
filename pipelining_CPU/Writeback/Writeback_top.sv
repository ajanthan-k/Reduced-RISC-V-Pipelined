module Writeback_top #(
  parameter WIDTH = 32

)(
  input logic    clk,

  //control signals
  input logic RegWriteM,
  input logic [1:0] ResultSrcM,
  //others
  input logic [WIDTH-1:0] ALUResultM,
  input logic [WIDTH-1:0] ReadDataM,
  input logic [4:0] RdM,
  input logic [WIDTH-1:0] PCPlus4M,

  //control signals output
  output logic RegWriteW,
  //others
  output logic [WIDTH-1:0] RdW,
  output logic [WIDTH-1:0] ResultW
);

logic [1:0] ResultSrcW;

logic [WIDTH-1:0] ALUResultW;
logic [WIDTH-1:0] ReadDataW;
logic [WIDTH-1:0] PCPlus4W;

//Writ2Mem_reg
always_ff @(posedge clk) begin
    //control signals
    RegWriteW <= RegWriteM; 
    ResultSrcW <= ResultSrcM;
    //others
    ALUResultW <= ALUResultM;
    WriteDataW <= WriteDataM;
    RdW <= RdM;
    PCPlus4W <= PCPlus4M;
end

Writeback_mux Writeback_mux (

  .ALUResultW (ALUResultW);
  .ReadDataW (ReadDataW);
  .PCPlus4W (PCPlus4W);
  .ResultW (ResultW);
  .ResultSrcW (ResultSrcW)

);

endmodule