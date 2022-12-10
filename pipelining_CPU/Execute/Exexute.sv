module Execute #(
  parameter WIDTH = 32

)(
  input logic    clk,

  input logic [WIDTH-1:0] RD1D,
  input logic [WIDTH-1:0] RD2D,
  input logic [WIDTH-1:0] PCD,
  input logic [WIDTH-1:0] ImmExtD,
  input logic [4:0] RdD,
  input logic [WIDTH-1:0] PCPlus4D,  
///////////////////////////////////////////////////
  input logic  RegWriteD,
  input logic  [1:0] ResultSrcD,
  input logic  MemWriteD,
  input logic  JumpD,
  input logic  BranchD,
  input logic [2:0] ALUControlD,
  input logic  ALUSrcD,
////////////////////////////////////////////////////
  output logic  RegWriteE,
  output logic [1:0] ResultSrcE,
  output logic  MemWriteE,
  output logic  JumpE,
  output logic  BranchE,
//////////////////////////////////////////////////////
  output logic [WIDTH-1:0] PCPlus4E,
  output logic [WIDTH-1:0] PCTargetE,
  output logic [WIDTH-1:0] ALUResultE,
  output logic [4:0] RdE,
  output logic [WIDTH-1:0] WriteDataE

//pc source is not 

);
  logic [WIDTH-1:0] RD1E;
  logic [WIDTH-1:0] RD2E;
  logic [WIDTH-1:0] PCE;
  logic [WIDTH-1:0] ImmExtE;
  logic [WIDTH-1:0] SrcBE;
  logic [2:0] ALUControlE;
  logic ALUSrcE;
 // logic ALU AE;

  assign WriteDataE = RD2E;
  assign SrcBE = ALUsrcE ? ImmExtE:RD2E;
  assign PCTargetE = JALRctrl ? ALUout :  PCE + ImmExtE;
 /* 
Execute_reg Execute_reg (
  .RD1D (RD1D),
  .RD1E (RD1E),

  .RD2D (RD2D),
  .RD2E (RD2E),

  .PCD (PCD),
  .PCE (PCE),

  .RdD (RdD),
  .RdE (RdE),

  .ImmExtD (ImmExtD),
  .ImmExtE (ImmExtE),

  .PCPlus4E (PCPlus4E),
  .PCPlus4D (PCPlus4D)
  
  //control
  .RegWriteD (RegWriteD),
  .RegWriteE (RegWriteE),

  .ResultSrcD (ResultSrcD),
  .ResultSrcE (ResultSrcE),

  .MemWriteD (MemWriteD),
  .MemWriteE (MemWriteE),

  .JumpD (JumpD),
  .JumpE (JumpE),

  .BranchD (BranchD),
  .BranchE (BranchE),

  .ALUControlD (ALUControlD),
  .ALUControlE (ALUControlE),

  .ALUSrcD (ALUSrcD),
  .ALUSrcE (ALUSrcE)

);
*/
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

ALU ALU (
   .SrcAE (RD1E),
   .SrcBE (SrcBE),
   .ALUcontrolE (ALUControlE),
   .ALUout (ALUResultE),
   .ZeroE (ZeroE)
);

endmodule
