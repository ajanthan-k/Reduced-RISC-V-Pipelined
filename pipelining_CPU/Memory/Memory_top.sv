module Memory_top #(
  parameter WIDTH = 32

)(
  input logic    clk,

  //control signals
  input logic RegWriteE,
  input logic [1:0] ResultSrcE,
  input logic MemWriteE,
  //others
  input logic [WIDTH-1:0] ALUResultE,
  input logic [WIDTH-1:0] WriteDataE,
  input logic [4:0] RdE,
  input logic [WIDTH-1:0] PCPlus4E,

  //control output signals 
  output logic RegWriteM,
  output logic [1:0] ResultSrcM,
  //others
  output logic [WIDTH-1:0] ALUResultM,
  output logic [WIDTH-1:0] ReadDataM,
  output logic [4:0] RdM,
  output logic [WIDTH-1:0] PCPlus4M
);
  

  logic [WIDTH-1:0] WriteDataM;
  logic MemWriteM;

//Exec2Mem_reg
always_ff @(posedge clk) begin
    //control signals
    RegWriteM <= RegWriteE; 
    ResultSrcM <= ResultSrcE;
    MemWriteM <= MemWriteE;
    //others
    ALUResultM <= ALUResultE;
    WriteDataM <= WriteDataE;
    RdM <= RdE;
    PCPlus4M <= PCPlus4E;
end

datamem datamem (
   .clk (clk),
   .A (ALUResultM) ,  
   .WD (WriteDataM),
   .WE (MemWriteM),
   .RD (ReadDataM)
);

endmodule
