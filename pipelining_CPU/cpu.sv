module cpu #(
    parameter ADDRESS_WIDTH = 32
)(
    input clk,
    input rst,
    output [ADDRESS_WIDTH-1:0] a0

);
    //fetch
   logic PCsrcE;
   logic [WIDTH-1:0] PCTargetE;
   logic [WIDTH-1:0] PCF;
   logic [WIDTH-1:0] InstrF;
   logic [WIDTH-1:0] PCPlus4F;
   //decode
    logic RegWriteD,
    logic [1:0] ResultSrcD,
    logic MemWriteD,
    logic JumpD,
    logic BranchD,
    logic [2:0] ALUControlD,
    logic ALUSrcD,
    logic JALRctrlD,  

    logic [WIDTH-1:0] RD1D,
    logic [WIDTH-1:0] RD2D,
    logic [WIDTH-1:0] PCD, 
    logic [4:0] RdD, 
    logic [WIDTH-1:0] ImmExtD,
    logic [WIDTH-1:0] PCPlus4D, 
   //execute

   //memory

   //writeback

Fetch_top fetch (
    .clk(clk),
    .rst(rst),
    .PCsrcE(PCsrcE),
    .PCTargetE(PCTargetE),
    .PCF(PCF),
    .InstrF(InstrF),
    .PCPlus4F(PCPlus4F)
);

Decode_top decode (
    .clk(clk),
    .PCF(PCF),
    .InstrF(InstrF),
    .PCPlus4F(PCPlus4F),
    .Rdw(Rdw),


    .RegWriteD(RegWriteD),
    .ResultSrcD(ResultSrcD),
    .MemWriteD(MemWriteD),
    .JumpD(JumpD),
    .BranchD(BranchD),
    .ALUControlD(ALUControlD),
    .ALUSrcD(ALUSrcD),
    .JALRctrlD(JALRctrlD),  

    .RD1D(RD1D),
    .RD2D(RD1D),
    .PCD(RD1D), 
    .RdD(RD1D), 
    .ImmExtD(RD1D),
    .PCPlus4D(RD1D)
);

Execute_top execute (
    // store the input value
    // blue section
    .clk(clk),
    .RegWriteD(RegWriteD),
    .ResultSrcD(ResultSrcD),
    .MemWriteD(MemWriteD),
    .JumpD(JumpD),
    .BranchD(BranchD),
    .ALUControlD(ALUControlD),
    .ALUSrcD(ALUSrcD),
    // white section
    .clk(clk),
    .RD1D(RD1D),
    .RD2D(RD2D),
    .PCD(PCD),
    .RdD(RdD),
    .ImmExtD(ImmExtD),
    .PCPlus4D(PCPlus4D),
//output
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
    .RegWriteD(RegWriteD),
    .ResultSrcD(ResultSrcD),
    .MemWriteD(MemWriteD),
    .ALUResultE(ALUResultE),
    .WriteDataE(WriteDataE),
    .RdE(RdE),
    .PCPlus4E(PCPlus4E),
    .RegWriteM(RegWriteM),
    .ResultSrM(ResultSrM),
    .ALUResultM(ALUResultM),
    .ReadDataM(ReadDataM),
    .RdM(RdM),
    .PCPlus4M(PCPlus4M),
);

Writeback_top writeback (
    .clk(clk),
    .RegWriteM(RegWriteM),
    .ResultSrcM(ResultSrcM),
    .ALUResultM(ALUResultM),
    .ReadDataM(ReadDataM),
    .RdM(RdM),
    .PCPlus4M(PCPlus4M),
    .RegWriteW(RegWriteW),
    .RdW(RdW),
    .ResultW(ResultW),
);

endmodule
