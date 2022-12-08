#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vcpu.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env) {
    int i;
    int clk;

    Verilated:: commandArgs(argc, argv);
    
    Vcpu* top = new Vcpu;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp,99);
    tfp->open ("cpu.vcd");

    top->clk = 1;

    for (i = 0; i < 2000; i++){

        //dump var into VCD file and toggle clk
        for(clk = 0; clk < 2; clk++){
            tfp->dump(2*i+clk); //unit is in ps
            top->clk = !top->clk;
            top->eval ();
        }
        
        vbdBar(top->a0);

        if (Verilated::gotFinish()) exit(0);
    }
    tfp->close();
    exit(0);
}
