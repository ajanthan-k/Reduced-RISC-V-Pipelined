module Decode_reg #(
    parameter WIDTH = 32
) (
    input logic clk,
    //control unit signals
    input logic RegWriteD,
    input logic [1:0] ResultSrcD,
    input logic MemWriteD,
    input logic JumpD,
    input logic BranchD,
    input logic [2:0] ALUControlD,
    input logic ALUSrcD,
    input logic JALRctrlD,  
    //others
    input logic [WIDTH-1:0] RD1D,
    input logic [WIDTH-1:0] RD2D,
    input logic [WIDTH-1:0] PCD,
    input logic [5-1:0] RdD, 
    input logic [WIDTH-1:0] ImmExtD,
    input logic [WIDTH-1:0] PCPlus4D,
    
    //control signals (output)
    output logic RegWriteE,
    output logic [1:0] ResultSrcE,
    output logic MemWriteE,
    output logic JumpE,
    output logic BranchE,
    output logic [2:0] ALUControlE,
    output logic ALUSrcE,
    output logic JALRctrlE,   
    //other Decode stage outputs
    output logic [WIDTH-1:0] RD1E,
    output logic [WIDTH-1:0] RD2E,
    output logic [WIDTH-1:0] PCE,
    output logic [4:0] RdE, 
    output logic [WIDTH-1:0] ImmExtE,
    output logic [WIDTH-1:0] PCPlus4E
);

always_ff @(posedge clk) begin
    //control signals
    RegWriteD <= RegWriteE; 
    ResultSrcD <= ResultSrcE;
    MemWriteD <= MemWriteE;
    JumpD <= JumpE;
    BranchD <= BranchE;
    ALUControlD <= ALUControlE;
    ALUSrcD <= ALUSrcE;
    JALRctrlD <= JALRctrlE;
    //others
    RD1D <= RD1E;
    RD2D <= RD2E;
    PCD <= PCE;
    RdD <= RdE; 
    ImmExtD <= ImmExtE;
    PCPlus4D <= PCPlus4E;

end
    
endmodule
