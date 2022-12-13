module Execute_top #(
  parameter WIDTH = 32

)(
  input logic    clk,

  //control hazard
  input logic flush,
   
  //control signals
  input logic  RegWriteD,
  input logic  [1:0] ResultSrcD,
  input logic  MemWriteD,
  input logic  JumpD,
  input logic  BranchD,
  input logic [2:0] ALUControlD,
  input logic  ALUSrcD,
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
  output logic [WIDTH-1:0] PCPlus4E,


);

logic [WIDTH-1:0] RD1E;
logic [WIDTH-1:0] RD2E;
logic [WIDTH-1:0] PCE;
logic [WIDTH-1:0] ImmExtE;
logic [WIDTH-1:0] SrcBE;
logic [2:0] ALUControlE;
logic ALUSrcE;
// logic ALU AE;

assign PCSrc = JumpE | (BranchE & ZeroE); //Zero is HIGH when branches are not equal

assign WriteDataE = RD2E;
assign SrcBE = ALUSrcE ? ImmExtE : RD2E;
assign PCTargetE = JALRctrl ? ALUout :  PCE + ImmExtE;

//decode2exec_reg  
// always_ff @(posedge clk) begin
//     //control signals
//     RegWriteE <= RegWriteD; 
//     ResultSrcE <= ResultSrcD;
//     MemWriteE <= MemWriteD;
//     JumpE <= JumpD;
//     BranchE <= BranchD;
//     ALUControlE <= ALUControlD;
//     ALUSrcE <= ALUSrcD;
//     JALRctrlE <= JALRctrlD;
//     //others
//     RD1E <= RD1D;
//     RD2E <= RD2D;
//     PCE <= PCD;
//     RdE <= RdD; 
//     ImmExtE <= ImmExtD;
//     PCPlus4E <= PCPlus4D;

// end
//fix control hazard v1

always_ff @(posedge clk) begin
    //control signals
    if (flush) 
         RegWriteE <= 0; 
         ResultSrcE <= 0;
         MemWriteE <= 0;
         JumpE <= 0;
         BranchE <= 0;
         ALUControlE <= 0;
         ALUSrcE <= 0;
         JALRctrlE <= 0;
    //others
         RD1E <= 0;
         RD2E <= 0;
         PCE <= 0;
         RdE <= 0; 
         ImmExtE <= 0;
         PCPlus4E <= 0;
    else 
         RegWriteE <= RegWriteD; 
         ResultSrcE <= ResultSrcD;
         MemWriteE <= MemWriteD;
         JumpE <= JumpD;
         BranchE <= BranchD;
         ALUControlE <= ALUControlD;
         ALUSrcE <= ALUSrcD;
         JALRctrlE <= JALRctrlD;
         //others
         RD1E <= RD1D;
         RD2E <= RD2D;
         PCE <= PCD;
         RdE <= RdD; 
         ImmExtE <= ImmExtD;
         PCPlus4E <= PCPlus4D;
end

ALU ALU (
   .SrcAE (RD1E),
   .SrcBE (SrcBE),
   .ALUcontrolE (ALUControlE),
   .ALUout (ALUResultE),
   .ZeroE (ZeroE)
);

endmodule
