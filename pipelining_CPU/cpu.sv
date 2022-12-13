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

Writeback_top Writeback_top (

    .clk(clk),

    //blue
    .RegWriteM(RegWriteM),
    
    //white
    .ResultSrcM(ResultSrcM),
    .ALUResultM (ALUResultM),
    .ReadDataM (ReadDataM),
    .PCPlus4M (PCPlus4M),
    .RdM (RdM),
    //output
    .RegWriteW(RegWriteW),
    .RdW (RdW),
    .ResultW (ResultW)

);





endmodule
