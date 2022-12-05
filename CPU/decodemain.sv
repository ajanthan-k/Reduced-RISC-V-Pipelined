module decodemain (
    input logic Zero, //AND with Branch
    input logic [6:0] opcode, //last 7 bits of instr go here

    output logic PCSrc, 
    output logic ResultSrc,
    output logic MemWrite,
    output logic ALUSrc,
    output logic [1:0] ImmSrc,  
    output logic RegWrite,
    output logic [1:0] ALUOp              
);

//logic [8:0] flags;
logic Branch;

always_comb 
    casez(opcode) //use begin-end for default and the opcode stuff
        // 7'b0110011: flags = 9'b1_00_0000_10; //op 51, R type
        // 7'b0000011: flags = 9'b100101000; //op 3,  (I)
        // 7'b0010011: flags = 9'b100100000; //op 19, addi (I) ???
        // 7'b0100011: flags = 9'b001110000; //op 35, S type
        // 7'b1100011: flags = 9'b010000101; //op 99, B type
        // 7'b1101111: flags  = 9'b111100100; //op 111, jal ???
        //default: flags = 9'b0;
        7'b0110011: begin //R type
                RegWrite = 1'b1;
                ImmSrc = 2'b00;
                ALUSrc = 1'b0;
                MemWrite = 1'b0;
                ResultSrc = 1'b0;
                Branch = 1'b0;
                ALUOp = 2'b10;
                PCSrc = 1'b0;
            end
        7'b0000011: begin // I type, op 3
                RegWrite = 1'b1;
                ImmSrc = 2'b00;
                ALUSrc = 1'b1;
                MemWrite = 1'b0;
                ResultSrc = 1'b1;
                Branch = 1'b0;
                ALUOp = 2'b00;
                PCSrc = 1'b0;
            end
        7'b0010011: begin // I type, op 19
                RegWrite = 1'b1;
                ImmSrc = 2'b00;
                ALUSrc = 1'b1;
                MemWrite = 1'b0;
                ResultSrc = 1'b0;
                Branch = 1'b0;
                ALUOp = 2'b00;
                PCSrc = 1'b0;
            end
        7'b0100011: begin // S type
                RegWrite = 1'b0;
                ImmSrc = 2'b01;
                ALUSrc = 1'b1;
                MemWrite = 1'b1;
                ResultSrc = 1'b0;
                Branch = 1'b0;
                ALUOp = 2'b00;
                PCSrc = 1'b0;
            end
        7'b1100011: begin // B type
                RegWrite = 1'b0;
                ImmSrc = 2'b10;
                ALUSrc = 1'b0;
                MemWrite = 1'b0;
                ResultSrc = 1'b0;
                Branch = 1'b1;
                ALUOp = 2'b01;
                PCSrc = (Zero & Branch) ? 1'b1 : 1'b0;
            end
        7'b1101111: begin // JAL
                RegWrite = 1'b1;
                ImmSrc = 2'b11; // for J type in the ext 
                ALUSrc = 1'b1;
                MemWrite = 1'b0;
                ResultSrc = 1'b0;
                Branch = 1'b1;
                ALUOp = 2'b00;
                PCSrc = 1'b1; // unconditional jump
            end
        7'b1100111: begin // JALR
                RegWrite = 1'b1;
                ImmSrc = 2'b00;
                ALUSrc = 1'b1;
                MemWrite = 1'b0;
                ResultSrc = 1'b0;
                Branch = 1'b1;
                ALUOp = 2'b00;
                PCSrc = 1'b1; // unconditional jump
            end
        default: begin
            RegWrite = 1'b0;
            ImmSrc = 2'b00;
            ALUSrc = 1'b0;
            MemWrite = 1'b0;
            ResultSrc = 1'b0;
            Branch = 1'b0;
            ALUOp = 2'b0;
            PCSrc = 1'b0;
        end
    endcase

endmodule
