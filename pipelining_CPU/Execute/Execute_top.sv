module Execute_top #(
  parameter WIDTH = 32

)(
  input logic    clk,
  //control signals
  input logic  RegWriteD,
  input logic  [1:0] ResultSrcD,
  input logic  MemWriteD,
  input logic  JumpD,
  input logic  BranchD,
  input logic [2:0] ALUControlD,
  input logic  ALUSrcD,
  input logic JALRctrlD,
  input logic flush,
  //non control signals
  input logic [WIDTH-1:0] RD1D,
  input logic [WIDTH-1:0] RD2D,
  input logic [WIDTH-1:0] PCD,
  input logic [WIDTH-1:0] ImmExtD,
  input logic [4:0] RdD,
  input logic [WIDTH-1:0] PCPlus4D,  
  //control output signals
  output logic  RegWriteE,
  output logic [1:0] ResultSrcE,
  output logic  MemWriteE,
  output logic  PCSrcE,
  //other outputs
  output logic [WIDTH-1:0] ALUResultE,
  output logic [WIDTH-1:0] WriteDataE,
  output logic [WIDTH-1:0] PCTargetE,
  output logic [4:0] RdE,
  output logic [WIDTH-1:0] PCPlus4E

);

logic [WIDTH-1:0] RD1E;
logic [WIDTH-1:0] RD2E;
logic [WIDTH-1:0] PCE;
logic [WIDTH-1:0] ImmExtE;
logic [WIDTH-1:0] SrcBE;
logic [2:0] ALUControlE;
logic ALUSrcE;
logic JumpE;
logic BranchE;
logic ZeroE;
logic JALRctrlE;

assign PCSrcE = JumpE | (BranchE & ZeroE); //Zero is HIGH when branches are not equal

assign WriteDataE = RD2E;
assign SrcBE = ALUSrcE ? ImmExtE : RD2E;
assign PCTargetE = JALRctrlE ? ALUResultE :  PCE + ImmExtE;

//decode2exec_reg  
always_ff @(posedge clk) begin
  if (flush) begin
    RegWriteE <= 0; 
    ResultSrcE <= 0;
    MemWriteE <= 0;
    JumpE <= 0;
    BranchE <= 0;      
    ALUControlE <= 0;
    ALUSrcE <= 0;
    JALRctrlE <= 0;

    RD1E <= 0;
    RD2E <= 0;
    PCE <= 0;
    RdE <= 0;
    ImmExtE <= 0;
    PCPlus4E <= 0;
  end
  else begin
    RegWriteE <= RegWriteD; 
    ResultSrcE <= ResultSrcD;
    MemWriteE <= MemWriteD;
    JumpE <= JumpD;
    BranchE <= BranchD;
    ALUControlE <= ALUControlD;
    ALUSrcE <= ALUSrcD;
    JALRctrlE <= JALRctrlD;

    RD1E <= RD1D;
    RD2E <= RD2D;
    PCE <= PCD;
    RdE <= RdD; 
    ImmExtE <= ImmExtD;
    PCPlus4E <= PCPlus4D;
  end
end

ALU ALU (
   .SrcAE (RD1E),
   .SrcBE (SrcBE),
   .ALUControlE (ALUControlE),
   .ALUout (ALUResultE),
   .ZeroE (ZeroE)
);

endmodule
