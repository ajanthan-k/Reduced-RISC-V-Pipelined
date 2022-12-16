module control #(
    parameter D_WIDTH = 32
)(
    input logic Zero, 
    input logic [D_WIDTH-1:0] Instr, 

    output logic PCSrc, 
    output logic [1:0] ResultSrc,
    output logic MemWrite,
    output logic [2:0] ALUControl,
    output logic ALUSrc,
    output logic [2:0] ImmSrc,  
    output logic RegWrite,
    output logic JALRctrl
);

logic [1:0] ALUOp; 

decodemain dmain(
    .Instr(Instr),
    .Zero(Zero),
    .PCSrc(PCSrc), 
    .ResultSrc(ResultSrc),
    .MemWrite(MemWrite),
    .ALUSrc(ALUSrc),
    .ImmSrc(ImmSrc),  
    .RegWrite(RegWrite),
    .ALUOp(ALUOp),
    .JALRctrl(JALRctrl)
);

decodealu dalu(
    .opcode(Instr[6:0]),
    .ALUOp(ALUOp),
    .fn3(Instr[14:12]),
    .fn7(Instr[31:25]),
    .ALUControl(ALUControl)
);

endmodule
