module Writeback_mux #(
  parameter WIDTH = 32

)(
  //input logic    clk,
  //input logic    rst,
  input logic [WIDTH-1:0] ReadDataW,
  input logic [WIDTH-1:0] PCPlus4W,
  input logic [WIDTH-1:0] ALUResultW,

  input logic [1:0] ResultSrcW,

  output logic [WIDTH-1:0] ResultW


);

always_comb begin
    
        casez (ResultSrcW)

            2'b00:  ResultW = ALUResultW; 
            2'b01:  ResultW = ReadDataW;
            2'b10:  ResultW = PCPlus4W;

           default: ResultW = 0;
    
        endcase
    
     end

endmodule