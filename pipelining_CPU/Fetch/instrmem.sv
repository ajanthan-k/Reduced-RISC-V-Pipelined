module instrmem #(
    parameter D_WIDTH = 8, // For byte addressing
              EXT_WIDTH = 32 //Signals from PC and the output are both 32 bits
) (
    input logic [EXT_WIDTH-1:0] A,
    output logic [EXT_WIDTH-1:0] RD //output is 32 bits
);
//Used a 12 bit val to determine rom size 2^12 before, changed to 32 bits to determine location of rom memory
logic [D_WIDTH-1:0] rom_array [32'hBFC00FFF : 32'hBFC00000]; //each data stored is 8bits, and the rom size is 2^12 bits

initial begin
    $readmemh("assembly.s.hex", rom_array); //read from this hex file
end

assign RD = {rom_array [A + 3], rom_array [A + 2], rom_array [A + 1], rom_array [A]};

endmodule
