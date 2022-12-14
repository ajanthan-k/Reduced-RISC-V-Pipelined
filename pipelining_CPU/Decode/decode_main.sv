module decodemain #(
        parameter D_WIDTH = 32
    )(
    input logic [D_WIDTH - 1:0] Instr, //last 7 bits of instr go here

    output logic [1:0] ResultSrc,
    output logic MemWrite,
    output logic ALUSrc,
    output logic [2:0] ImmSrc,  
    output logic RegWrite,
    output logic [1:0] ALUOp,
    output logic Jump,
    output logic Branch,
    output logic JALRctrl              
);

logic [6:0] opcode = Instr[6:0];

always_comb begin

    casez(opcode) 
        7'b0110011: begin //R type
                RegWrite = 1'b1;
                ImmSrc = 3'b000;
                ALUSrc = 1'b0;
                MemWrite = 1'b0;
                ResultSrc = 2'b00;
                ALUOp = 2'b10;
                Branch = 1'b0;
                Jump = 1'b0;
                JALRctrl = 1'b0;
            end
        7'b0000011: begin // I type, op 3. lbu only(no more lw)
                RegWrite = 1'b1;
                ImmSrc = 3'b000;
                ALUSrc = 1'b1;
                MemWrite = 1'b0;
                ResultSrc = 2'b01;
                ALUOp = 2'b00;
                Branch = 1'b0;
                Jump = 1'b0;
                JALRctrl = 1'b0;
            end
        7'b0010011: begin // I type, op 19
                RegWrite = 1'b1;
                ImmSrc = 3'b000;
                ALUSrc = 1'b1;
                MemWrite = 1'b0;
                ResultSrc = 2'b00;
                ALUOp = 2'b00;
                Branch = 1'b0;
                Jump = 1'b0;
                JALRctrl = 1'b0;
            end
        7'b0100011: begin // S type (only sb)
                RegWrite = 1'b0;
                ImmSrc = 3'b001;
                ALUSrc = 1'b1;
                MemWrite = 1'b1;
                ResultSrc = 2'b00;
                ALUOp = 2'b00;
                Branch = 1'b0;
                Jump = 1'b0;
                JALRctrl = 1'b0;
            end
        7'b1100011: begin // B type
                RegWrite = 1'b0;
                ImmSrc = 3'b010;
                ALUSrc = 1'b0;
                MemWrite = 1'b0;
                ResultSrc = 2'b00;
                ALUOp = 2'b01;
                Branch = 1'b1; //PCSrc HIGH when Branch and Zero are HIGH
                Jump = 1'b0;
                JALRctrl = 1'b0;
            end
        7'b1101111: begin // JAL
                RegWrite = 1'b1;
                ImmSrc = 3'b011; // for J type in the ext 
                ALUSrc = 1'b1;
                MemWrite = 1'b0;
                ResultSrc = 2'b10;
                ALUOp = 2'b00;
                Branch = 1'b0;
                Jump = 1'b1;
                JALRctrl = 1'b0;
            end
        7'b1100111: begin // JALR
                RegWrite = 1'b1;
                ImmSrc = 3'b000;
                ALUSrc = 1'b1;
                MemWrite = 1'b0;
                ResultSrc = 2'b10;
                ALUOp = 2'b00;
                Branch = 1'b0; 
                Jump = 1'b1;
                JALRctrl = 1'b1;
            end
        7'b0110111: begin //LUI
                RegWrite = 1'b1;
                ImmSrc = 3'b100; //now 3 bits
                ALUSrc = 1'b1;
                MemWrite = 1'b0;
                ResultSrc = 2'b00;
                ALUOp = 2'b11;
                Branch = 1'b0;
                Jump = 1'b0;
                JALRctrl = 1'b0;
            end
        default: begin
                RegWrite = 1'b0;
                ImmSrc = 3'b000;
                ALUSrc = 1'b0;
                MemWrite = 1'b0;
                ResultSrc = 2'b00;
                ALUOp = 2'b0;
                Branch = 1'b0;
                Jump = 1'b0;
                JALRctrl = 1'b0;
            end
    endcase
//PCSrc cannot be assigned in case - has to assigned sequentially after control signals assigned to use zero correctly

end

endmodule
