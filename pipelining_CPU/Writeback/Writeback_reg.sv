module Memory_reg #(
    parameter WIDTH
) (
    input logic clk,
    //control unit signals
    input logic RegWriteM,
    input logic [1:0] ResultSrcM,

    input logic [WIDTH-1:0] ALUResultM,
    input logic [WIDTH-1:0] ReadDataM,
    input logic [4:0] RdM,
    input logic [WIDTH-1:0] PCPlus4M,

    output logic RegWriteW,
    output logic [1:0] ResultSrcW,

    output logic [WIDTH-1:0] ALUResultW,
    output logic [WIDTH-1:0] ReadDataW,
    output logic [4:0] RdW,
    output logic [WIDTH-1:0] PCPlus4W
);

always_ff @(posedge clk) begin
    //control signals
    RegWriteM <= RegWriteW; 
    ResultSrcM <= ResultSrcW;
    //others
    ALUResultM <= ALUResultW;
    WriteDataM <= WriteDataW;
    RdM <= RdW;
    PCPlus4M <= PCPlus4W;
end
    
endmodule
