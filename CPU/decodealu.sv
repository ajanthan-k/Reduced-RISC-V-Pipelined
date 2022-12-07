module decodealu (
    input logic [1:0] ALUOp,
    input logic [6:0] opcode,
    input logic [2:0] fn3,
    input logic [6:0] fn7,

    output logic [2:0] ALUControl
);

logic [6:0] decoder = {ALUOp, fn3, opcode[5], fn7[5]}; 

always_comb
    casez(decoder)
        //7'b00?????: ALUControl = 000; //handled by default
        //R type
        7'b1000011: ALUControl = 3'b001;   //subtract
        7'b10010??: ALUControl = 3'b101;   //set less than
        7'b10110??: ALUControl = 3'b011;   //or
        7'b10111??: ALUControl = 3'b010;  //and
        7'b10001??: ALUControl = 3'b100; //shift left logical

        //B type
        7'b0100???: ALUControl = 3'b001;   //beq, bne

        //I and S types, aluop = 00

        //U and J types would be ALUOp = 11, but since we only use jal, this is not used
        default: ALUControl = 3'b000;
    endcase

endmodule
