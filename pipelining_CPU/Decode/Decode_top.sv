module Decode_top #(
    parameter WIDTH = 32
) (
    input logic [WIDTH-1:0] InstrF,
    input logic [WIDTH-1:0] PCF,
    input logic [WIDTH-1:0] PCPlus4F,
    input clk,
    input logic [4:0] RdW, //5 bit from instr a few cycles ago
    input logic [WIDTH-1:0] ResultW,

    output logic [WIDTH-1:0] PCD,
    output logic [WIDTH-1:0] PCPlus4D,
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
    //output logic [WIDTH-1:0] PCD, //hm this is between the pipeline reg.s
    output logic [4:0] RdD, //implement as assign????
    output logic [WIDTH-1:0] ImmExtD,
    output logic [WIDTH-1:0] PCPlus4D, //this is also between the pipeline reg.s
);
logic [WIDTH-1:0] InstrD,
logic [2:0] ImmSrcD,
// fetch_decode_Reg
always_ff @(posedge clk) begin
    InstrF <= InstrD;
    PCF <= PCD;
    PCPlus4F <= PCPlus4D;
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
    .JALRctrl(JALRctrlD) //Hm
);

register Reg_File (
    .clk(clk),
    .A1(Instr[19:15]),
    .A2(Instr[24:20]),
    .A3(RdW),
    .WD3(ResultW),
    .RD1(RD1D),
    .RD2(RD2D),
    .a0(a0)
);

extend extd (
    .Instr(InstrD),
    .ImmSrc(ImmSrcD),
    .ImmOp(ImmExtD)
)
    
endmodule