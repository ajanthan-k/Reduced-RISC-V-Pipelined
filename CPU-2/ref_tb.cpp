#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vcpu.h"
#include "vbuddy.cpp"

#define MAX_SIM_CYC 300000

int main(int argc, char **argv, char **env) {
    int i;
    int clk;

    Verilated:: commandArgs(argc, argv);
    
    Vcpu* top = new Vcpu;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp,99);
    tfp->open ("cpu.vcd");

    if (vbdOpen()!=1) return(-1);
    vbdHeader("CPU: Ref");

    top->clk = 1;
    top->rst = 1;

    for (i = 0; i < MAX_SIM_CYC; i++){

        for(clk = 0; clk < 2; clk++){
            tfp->dump(2*i+clk); 
            top->clk = !top->clk;
            top->eval ();
        }

        top->rst = (i < 1 );

        if (i > MAX_SIM_CYC - 10000) {
            vbdPlot(int(top->a0), 0, 255);
            vbdCycle(i);
        }

        if (Verilated::gotFinish()) exit(0);
    }
    tfp->close();
    exit(0);
}
