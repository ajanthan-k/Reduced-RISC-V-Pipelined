module ALU #(
    parameter 
              DATA_WIDTH = 32
)(
    input logic [DATA_WIDTH-1:0] ALUop1,
    input logic [DATA_WIDTH-1:0] ALUop2,
    input logic [2:0] ALUctrl,
    
    output logic [DATA_WIDTH-1:0] ALUout,
    output logic Zero

);

    always_comb begin
    
        casez (ALUctrl)
            3'b000:  ALUout = ALUop1 + ALUop2;      //add
            3'b001:  ALUout = ALUop1 - ALUop2;      //subtract
            3'b010:  ALUout = ALUop1 & ALUop2;      //bitwise and
            3'b011:  ALUout = ALUop1 | ALUop2;      //bitwise or
            3'b100:  ALUout = ALUop1 << ALUop2;     //logical shift left by ALUop2
            3'b110:  ALUout = ALUop1 >> ALUop2;     //logical right shift by ALUop2
            3'b101:  ALUout = ALUop1 ^ ALUop2;      //bitwise xor
            
            // 3'b101:  ALUout = $signed(ALUop1) < $signed (ALUop2)  ? 1:0 ;    slt

           default: ALUout = 0;
    
        endcase
    
     end
     
     assign Zero = (ALUop1 - ALUop2 == 0) ? 1'b1 : 1'b0;

endmodule
