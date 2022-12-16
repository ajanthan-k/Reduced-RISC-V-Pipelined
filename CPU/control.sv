module control #(
    parameter D_WIDTH = 32
)(
    input logic Zero, //what does this do?
    input logic [D_WIDTH-1:0] Instr, //will need more than this later , for fn3 and 7

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

decode_main dmain(
    //.opcode(Instr[6:0]),
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

decode_alu dalu(
    .opcode(Instr[6:0]),
    .ALUOp(ALUOp),
    .fn3(Instr[14:12]),
    .fn7(Instr[31:25]),
    .ALUControl(ALUControl)
);

endmodule
