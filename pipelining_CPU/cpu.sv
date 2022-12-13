module cpu #(
    parameter ADDRESS_WIDTH = 32
)(
    clk,
    rst,
    [ADDRESS_WIDTH-1:0] a0

);
    //fetch
   logic PCsrcE;
   logic [WIDTH-1:0] PCTargetE;
   logic [WIDTH-1:0] PCF;
   logic [WIDTH-1:0] InstrF;
   logic [WIDTH-1:0] PCPlus4F;
   //decode
    logic [WIDTH-1:0] PCF,
    logic [WIDTH-1:0] PCPlus4F
    logic [4:0] RdW,
    logic [WIDTH-1:0] ResultW,
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
   
    logic PCsrcE,
    logic [WIDTH-1:0] PCTargetE,
    logic [WIDTH-1:0] PCF,
    logic [WIDTH-1:0] InstrF,
    logic [WIDTH-1:0] PCPlus4F
///////////////////////////////////////////////

    //Control Hazard
    logic flush

//execute
    logic  RegWriteD,
    logic  [1:0] ResultSrcD,
    logic  MemWriteD,
    logic  JumpD,
    logic  BranchD,
    logic [2:0] ALUControlD,
    logic  ALUSrcD,
  //non control signals
    logic [WIDTH-1:0] RD1D,
    logic [WIDTH-1:0] RD2D,
    logic [WIDTH-1:0] PCD,
    logic [WIDTH-1:0] ImmExtD,
    logic [4:0] RdD,
    logic [WIDTH-1:0] PCPlus4D,  
  //control signals
    logic  RegWriteE,
    logic [1:0] ResultSrcE,
    logic  MemWriteE,
    logic  PCSrcE,
  //others
    logic [WIDTH-1:0] ALUResultE,
    logic [WIDTH-1:0] WriteDataE,
    logic [WIDTH-1:0] PCTargetE,
    logic [4:0] RdE,
    logic [WIDTH-1:0] PCPlus4E
//////////////////////////////////////////////////
//writeback 
  //control signals
    logic RegWriteM,
    logic [1:0] ResultSrcM,
  //others
    logic [WIDTH-1:0] ALUResultM,
    logic [WIDTH-1:0] ReadDataM,
    logic [4:0] RdM,
    logic [WIDTH-1:0] PCPlus4M,

//control hazard
assign flush = (PCSrcE = 1) ? 1,0;

  //control signals output   
    logic RegWriteW,
  //others
    logic [WIDTH-1:0] RdW,
    logic [WIDTH-1:0] ResultW
Fetch_top fetch (
    .clk(clk),
    .rst(rst),
    .PCsrcE(PCsrcE),
    .PCTargetE(PCTargetE),
    .PCF(PCF),
    .InstrF(InstrF),
    //control hazard
    .flush (flush),
    //----
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
    // store the       value
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
    .RegWriteD(RegWriteD),
    .ResultSrcD(ResultSrcD),
    .MemWriteD(MemWriteD),
    // others 
    .ALUResultE(ALUResultE),
    .WriteDataE(WriteDataE),
    .RdE(RdE),
    .PCPlus4E(PCPlus4E),
    // control output signals
    .RegWriteM(RegWriteM),
    .ResultSrM(ResultSrM),
    //others 
    .ALUResultM(ALUResultM),
    .ReadDataM(ReadDataM),
    .RdM(RdM),
    .PCPlus4M(PCPlus4M),
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
    .ResultW(ResultW),
);

endmodule
