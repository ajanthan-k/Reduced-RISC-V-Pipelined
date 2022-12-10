
module extend #(
    parameter WIDTH = 32
) (
    //interface signals
    input   logic   [WIDTH-1:0]  Instr,                       //32 bit instruction
    input   logic   [1:0]        ImmSrc,                    //Control signal
    output  logic   [WIDTH-1:0]  ImmOp                      //32 bit out
);

always_comb begin
    case(ImmSrc)
        2'b00: ImmOp = { {20{Instr[31]}}, Instr[31:20] };                                               //I-type when ImmSrc = 00
        2'b01: ImmOp = { {20{Instr[31]}}, Instr[31:25], Instr[11:7] };                                  //S-type when ImmSrc = 01
        2'b10: ImmOp = { {20{Instr[31]}}, Instr[7], Instr[30:25], Instr[11:8], 1'b0 };                  //B-type when ImmSrc = 10
        2'b11: ImmOp = { {11{Instr[31]}}, Instr[19:12], Instr[20], Instr[31:25], Instr[24:21], 1'b0};   //J-type when ImmSrc = 11
    endcase
end

endmodule
