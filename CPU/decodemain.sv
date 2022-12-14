module decodemain #(
        parameter D_WIDTH = 32
    )(
    input logic Zero, //AND with Branch
    input logic [D_WIDTH - 1:0] Instr, //last 7 bits of instr go here

    output logic PCSrc, 
    output logic [1:0] ResultSrc,
    output logic MemWrite,
    output logic ALUSrc,
    output logic [2:0] ImmSrc,  
    output logic RegWrite,
    output logic [1:0] ALUOp,
    output logic JALRctrl              
);

logic [6:0] opcode = Instr[6:0];
logic [2:0] fn3 = Instr[14:12];
logic Branch;

always_comb begin
    
    JALRctrl = 1'b0;
    PCSrc = 1'b0;
    Branch = 1'b0;
    casez(opcode) 
        7'b0110011: begin //R type, ADD
                RegWrite = 1'b1;
                ImmSrc = 3'b111;    //for ImmOp default
                ALUSrc = 1'b0;
                MemWrite = 1'b0;
                ResultSrc = 2'b00;
                ALUOp = 2'b10;
            end

        7'b0000011: begin // I type, op 3. LBU
                RegWrite = 1'b1;
                ImmSrc = 3'b000;
                ALUSrc = 1'b1;
                MemWrite = 1'b0;
                ResultSrc = 2'b01;
                ALUOp = 2'b00;
            end

        7'b0010011: begin // I type, op 19
                RegWrite = 1'b1;
                ImmSrc = 3'b000;
                ALUSrc = 1'b1;
                MemWrite = 1'b0;
                ResultSrc = 2'b00;
                ALUOp = 2'b00;
            end
        7'b0100011: begin // S type, SB
                RegWrite = 1'b0;
                ImmSrc = 3'b001;
                ALUSrc = 1'b1;
                MemWrite = 1'b1;
                ResultSrc = 2'b00;
                ALUOp = 2'b00;
            end

        7'b1100011: begin // B type
                RegWrite = 1'b0;
                ImmSrc = 3'b010;
                ALUSrc = 1'b0;
                MemWrite = 1'b0;
                ResultSrc = 2'b00;
                ALUOp = 2'b01;
                Branch = (fn3 == 3'b001) ? !Zero : Zero; //to invert Zero for bne/beq
            end
        7'b1101111: begin // JAL
                RegWrite = 1'b1;
                ImmSrc = 3'b011; // for J type in the ext 
                ALUSrc = 1'b1;
                MemWrite = 1'b0;
                ResultSrc = 2'b10;
                ALUOp = 2'b00;
                Branch = 1'b1; // unconditional jump
            end
        7'b1100111: begin // JALR
                RegWrite = 1'b1;
                ImmSrc = 3'b000;
                ALUSrc = 1'b1;
                MemWrite = 1'b0;
                ResultSrc = 2'b10;
                ALUOp = 2'b00;
                Branch = 1'b1; // unconditional jump
                JALRctrl = 1'b1;
            end

        7'b0110111: begin // LUI
                RegWrite = 1'b1;
                ImmSrc = 3'b100;
                ALUSrc = 1'b1;
                MemWrite = 1'b0;
                ResultSrc = 2'b00;
                ALUOp = 2'b11;
            end


        default: begin
            RegWrite = 1'b0;
            ImmSrc = 3'b000;
            ALUSrc = 1'b0;
            MemWrite = 1'b0;
            ResultSrc = 2'b00;
            ALUOp = 2'b0;
            Branch = 1'b0;
            JALRctrl = 1'b0;
        end
    endcase

    assign PCSrc = Branch ? 1'b1 : 1'b0;        //PCSrc cannot be assigned in case - has to assigned sequentially after control signals assigned to use zero correctly

end

endmodule
