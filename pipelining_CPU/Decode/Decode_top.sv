module Decode_top #(
    parameter WIDTH = 32
) (
    input clk,

    //control hazard
    input logic flush,
    //fetch signals 
    input logic [WIDTH-1:0] InstrF,
    input logic [WIDTH-1:0] PCF,
    input logic [WIDTH-1:0] PCPlus4F,
    //for reg file
    input logic [4:0] RdW,
    input logic [WIDTH-1:0] ResultW,
    input logic RegWriteW,

    //control unit signals
    output logic RegWriteD,
    output logic [1:0] ResultSrcD,
    output logic MemWriteD,
    output logic JumpD,
    output logic BranchD,
    output logic [2:0] ALUControlD,
    output logic ALUSrcD,
    output logic JALRctrlD,  
    //others
    output logic [WIDTH-1:0] RD1D,
    output logic [WIDTH-1:0] RD2D,
    output logic [WIDTH-1:0] PCD, 
    output logic [4:0] RdD, 
    output logic [WIDTH-1:0] ImmExtD,
    output logic [WIDTH-1:0] PCPlus4D,
    output logic [WIDTH-1:0] a0
);

logic [WIDTH-1:0] InstrD;
logic [2:0] ImmSrcD;

assign RdD = InstrD[11:7]; 

//fix control hazard 
always_ff @(posedge clk) begin
    if (flush) begin
        InstrD <= 0;
        PCD <= 0;
        PCPlus4D <= 0;
    end
    else begin
        InstrD <= InstrF;
        PCD <= PCF;
        PCPlus4D <= PCPlus4F;
    end
end

control ctrl (
    .Instr(InstrD),
    .RegWrite(RegWriteD),
    .ResultSrc(ResultSrcD),
    .MemWrite(MemWriteD),
    .Jump(JumpD),
    .Branch(BranchD),
    .ALUControl(ALUControlD),
    .ALUSrc(ALUSrcD),
    .ImmSrc(ImmSrcD),
    .JALRctrl(JALRctrlD)
);

register Reg_File (
    .clk(clk),
    .WE3(RegWriteW),
    .A1(InstrD[19:15]),
    .A2(InstrD[24:20]),
    .A3(RdW),
    .WD3(ResultW),
    .RD1(RD1D),
    .RD2(RD2D),
    .a0(a0)
);

extend extd (
    .Instr(InstrD),
    .ImmSrc(ImmSrcD),
    .ImmExt(ImmExtD)
);
    
endmodule
