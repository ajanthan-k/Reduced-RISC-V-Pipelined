module cpu #(
    parameter WIDTH = 32
)(
    input clk,
    input rst,
    output [WIDTH-1:0] a0

);
//fetch
    logic PCSrcE;
    logic [WIDTH-1:0] PCTargetE;
    logic [WIDTH-1:0] PCF;
    logic [WIDTH-1:0] InstrF;
    logic [WIDTH-1:0] PCPlus4F;
//decode
    logic RegWriteD;
    logic [1:0] ResultSrcD;
    logic MemWriteD;
    logic JumpD;
    logic BranchD;
    logic [2:0] ALUControlD;
    logic ALUSrcD;
    logic JALRctrlD;  

    logic [WIDTH-1:0] RD1D;
    logic [WIDTH-1:0] RD2D;
    logic [WIDTH-1:0] PCD; 
    logic [4:0] RdD;
    logic [WIDTH-1:0] ImmExtD;
    logic [WIDTH-1:0] PCPlus4D; 

//Control Hazard
    logic flush;

//execute
    //control signals
    logic  RegWriteE;
    logic [1:0] ResultSrcE;
    logic  MemWriteE;
    //others
    logic [WIDTH-1:0] ALUResultE;
    logic [WIDTH-1:0] WriteDataE;
    logic [4:0] RdE;
    logic [WIDTH-1:0] PCPlus4E;

//Memory 
    //control signals
    logic RegWriteM;
    logic [1:0] ResultSrcM;
    //others
    logic [WIDTH-1:0] ALUResultM;
    logic [WIDTH-1:0] ReadDataM;
    logic [4:0] RdM;
    logic [WIDTH-1:0] PCPlus4M;

//Writeback
    //control signals output   
    logic RegWriteW;
    //others
    logic [4:0] RdW;
    logic [WIDTH-1:0] ResultW;

assign flush = (PCSrcE == 1) ? 1:0;

Fetch_top fetch (
    .clk(clk),
    .rst(rst),
    .PCSrcE(PCSrcE),
    .PCTargetE(PCTargetE),
    .PCF(PCF),
    .InstrF(InstrF),
    .PCPlus4F(PCPlus4F)
);

Decode_top decode (
    .clk(clk),
    .flush(flush),
    .PCF(PCF),
    .InstrF(InstrF),
    .PCPlus4F(PCPlus4F),
    .RdW(RdW),
    .ResultW(ResultW),
    .RegWriteW(RegWriteW),

    .RegWriteD(RegWriteD),
    .ResultSrcD(ResultSrcD),
    .MemWriteD(MemWriteD),
    .JumpD(JumpD),
    .BranchD(BranchD),
    .ALUControlD(ALUControlD),
    .ALUSrcD(ALUSrcD),
    .JALRctrlD(JALRctrlD),  

    .RD1D(RD1D),
    .RD2D(RD2D),
    .PCD(PCD), 
    .RdD(RdD), 
    .ImmExtD(ImmExtD),
    .PCPlus4D(PCPlus4D),
    .a0(a0)
);

Execute_top execute (
    .clk(clk),
    .RegWriteD(RegWriteD),
    .ResultSrcD(ResultSrcD),
    .MemWriteD(MemWriteD),
    .JumpD(JumpD),
    .BranchD(BranchD),
    .ALUControlD(ALUControlD),
    .ALUSrcD(ALUSrcD),
    .JALRctrlD(JALRctrlD),
    .flush(flush),
 
    .RD1D(RD1D),
    .RD2D(RD2D),
    .PCD(PCD),
    .RdD(RdD),
    .ImmExtD(ImmExtD),
    .PCPlus4D(PCPlus4D),

    .RegWriteE(RegWriteE),
    .ResultSrcE(ResultSrcE),
    .MemWriteE(MemWriteE),
    .PCSrcE(PCSrcE),
    .ALUResultE(ALUResultE),
    .WriteDataE(WriteDataE),
    .PCTargetE(PCTargetE),
    .RdE(RdE),
    .PCPlus4E(PCPlus4E)
);

Memory_top memory (
    .clk(clk),
    // control signals
    .RegWriteE(RegWriteE),
    .ResultSrcE(ResultSrcE),
    .MemWriteE(MemWriteE),
    // others 
    .ALUResultE(ALUResultE),
    .WriteDataE(WriteDataE),
    .RdE(RdE),
    .PCPlus4E(PCPlus4E),
    // control output signals
    .RegWriteM(RegWriteM),
    .ResultSrcM(ResultSrcM),
    //others 
    .ALUResultM(ALUResultM),
    .ReadDataM(ReadDataM),
    .RdM(RdM),
    .PCPlus4M(PCPlus4M)
);

Writeback_top writeback (
    .clk(clk),
//control signals
    .RegWriteM(RegWriteM),
    .ResultSrcM(ResultSrcM),
//others
    .ALUResultM(ALUResultM),
    .ReadDataM(ReadDataM),
    .RdM(RdM),
    .PCPlus4M(PCPlus4M),
// control signals outputs 
    .RegWriteW(RegWriteW),
//others 
    .RdW(RdW),
    .ResultW(ResultW)
);

endmodule
