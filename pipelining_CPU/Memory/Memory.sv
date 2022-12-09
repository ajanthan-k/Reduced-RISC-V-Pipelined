module Memory #(
  parameter WIDTH = 32

)(
  input logic    clk,
  //input logic    rst,
  input logic [WIDTH-1:0] ALUresultM,
  input logic [WIDTH-1:0] WriteDataM,
  input logic [WIDTH-1:0] MemWriteM,

  output logic [WIDTH-1:0] RD



);
  
  logic [WIDTH-1:0] RdM;
  logic [WIDTH-1:0] PCPlus4M;
  
datamem datamem (
   .clk (clk),
   .A (ALUresultM) ,  
   .WD (WriteDataM),
   .WE (MemWriteM),
   .RD (RD)
   
);

endmodule