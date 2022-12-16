module decodealu (
    input logic [1:0] ALUOp,
    input logic [6:0] opcode,
    input logic [2:0] fn3,
    input logic [6:0] fn7,

    output logic [2:0] ALUControl
);

logic [6:0] decoder;

assign decoder = {ALUOp, fn3, opcode[5], fn7[5]}; 

always_comb
    casez(decoder)
    
        //R type
        7'b1000010: ALUControl = 3'b000;    //add
        7'b1000011: ALUControl = 3'b001;    //subtract
        7'b10110??: ALUControl = 3'b011;    //or
        7'b10111??: ALUControl = 3'b010;    //and
        7'b10100??: ALUControl = 3'b100;    //xor

        //B type
        7'b0100???: ALUControl = 3'b001;    //bne

        //I and S types, aluop = 00
        7'b0000100: ALUControl = 3'b110;    //slli, fn7 only matters if more load ins (op 3) are needed
        7'b0010100: ALUControl = 3'b111;    //srli, same as above, also if srai is needed
        7'b00111??: ALUControl = 3'b010;    //andi, fn7 and op dont matter, as op 3 load ins do not have fn3=111
        7'b000001?: ALUControl = 3'b000;    //sb - s type imm(rs1) - add
        7'b001000?: ALUControl = 3'b000;    //lbu - i type imm(rs1) - add

        //U and J types would be ALUOp = 11, but since we only use jal, this is not used
        7'b11???1?: ALUControl = 3'b101;    //lui, for default ALU operation - passes ALUop2 (Imm) straight through

        default: ALUControl = 3'b000;
    endcase

endmodule
