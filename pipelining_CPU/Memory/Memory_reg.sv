module Execute_reg #(
    parameter WIDTH = 32
) (
    input logic clk,
    //control unit signals
    input logic RegWriteD,
    input logic [1:0] ResultSrcD,
    input logic MemWriteD,

    input logic [WIDTH-1:0] ALUResultE,
    input logic [WIDTH-1:0] WriteDataE,
    input logic [4:0] RdE,
    input logic [WIDTH-1:0] PCPlus4E,

    output logic RegWriteM,
    output logic [1:0] ResultSrcM,
    output logic MemWriteM,

    output logic [WIDTH-1:0] ALUResultM,
    output logic [WIDTH-1:0] WriteDataM,
    output logic [4:0] RdM,
    output logic [WIDTH-1:0] PCPlus4M
);

always_ff @(posedge clk) begin
    //control signals
    RegWriteE <= RegWriteM; 
    ResultSrcE <= ResultSrcM;
    MemWriteE <= MemWriteEM;
    //others
    ALUResultE <= ALUResultM;
    WriteDataE <= WriteDataM;
    PCPlus4E <= PCPlus4M;
end

endmodule
