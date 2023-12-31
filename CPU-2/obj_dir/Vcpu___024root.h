// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu.h for the primary calling header

#ifndef VERILATED_VCPU___024ROOT_H_
#define VERILATED_VCPU___024ROOT_H_  // guard

#include "verilated.h"

class Vcpu__Syms;

class Vcpu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ cpu__DOT__PCsrc;
    CData/*0:0*/ cpu__DOT__RegWrite;
    CData/*2:0*/ cpu__DOT__ALUctrl;
    CData/*0:0*/ cpu__DOT__ALUsrc;
    CData/*2:0*/ cpu__DOT__ImmSrc;
    CData/*1:0*/ cpu__DOT__ResultSrc;
    CData/*0:0*/ cpu__DOT__JALRctrl;
    CData/*0:0*/ cpu__DOT__Zero;
    CData/*0:0*/ cpu__DOT__ctrl__DOT__dmain__DOT__Branch;
    CData/*6:0*/ cpu__DOT__ctrl__DOT__dalu__DOT__decoder;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    VL_OUT(a0,31,0);
    IData/*31:0*/ cpu__DOT__PC;
    IData/*31:0*/ cpu__DOT__instr;
    IData/*31:0*/ cpu__DOT__ImmOp;
    IData/*31:0*/ cpu__DOT__PC_top__DOT__next_PC;
    IData/*31:0*/ cpu__DOT__Execute_top__DOT__SrcA;
    IData/*31:0*/ cpu__DOT__Execute_top__DOT__regOp2;
    IData/*31:0*/ cpu__DOT__Execute_top__DOT__ALUop2;
    IData/*31:0*/ cpu__DOT__Execute_top__DOT__ALUout;
    IData/*31:0*/ cpu__DOT__Execute_top__DOT__register__DOT__unnamedblk1__DOT__i;
    VlUnpacked<CData/*7:0*/, 4096> cpu__DOT__rom__DOT__rom_array;
    VlUnpacked<IData/*31:0*/, 32> cpu__DOT__Execute_top__DOT__register__DOT__ram_array;
    VlUnpacked<CData/*7:0*/, 131072> cpu__DOT__Execute_top__DOT__datamem__DOT__data_mem_array;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vcpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcpu___024root(Vcpu__Syms* symsp, const char* name);
    ~Vcpu___024root();
    VL_UNCOPYABLE(Vcpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
