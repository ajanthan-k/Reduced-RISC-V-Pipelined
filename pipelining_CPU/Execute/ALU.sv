module ALU #(
    parameter 
              DATA_WIDTH = 32
)(
    input logic [DATA_WIDTH-1:0] RD1E,
    input logic [DATA_WIDTH-1:0] SrcBE,
    input logic [2:0] ALUctrlE,
    
    output logic [DATA_WIDTH-1:0] ALUout,
    output logic ZeroE

);

    always_comb begin
    
        casez (ALUctrl)
            3'b000:  ALUout = SrcAE + SrcBE;      //add
            3'b001:  ALUout = SrcAE - SrcBE;      //subtract
            3'b010:  ALUout = SrcAE & SrcBE;      //bitwise and
            3'b011:  ALUout = SrcAE | SrcBE;      //bitwise or
            3'b100:  ALUout = SrcAE ^ SrcBE;      //bitwise xor
            3'b110:  ALUout = SrcAE << SrcBE;     //logical shift left by SrcBE
            3'b111:  ALUout = SrcAE >> SrcBE;     //logical right shift by SrcBE
            
            // 3'b101:  slt, which is not used

           default: ALUout = ALUop2; // for LUI where Imm has to pass through
    
        endcase
    
     end
     
     assign ZeroE = (SrcAE - SrcBE == 0) ? 1'b0 : 1'b1; //for bne

endmodule
