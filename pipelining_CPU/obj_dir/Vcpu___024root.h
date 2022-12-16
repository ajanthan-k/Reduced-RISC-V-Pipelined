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
    CData/*0:0*/ cpu__DOT__PCSrcE;
    CData/*0:0*/ cpu__DOT__RegWriteD;
    CData/*1:0*/ cpu__DOT__ResultSrcD;
    CData/*0:0*/ cpu__DOT__MemWriteD;
    CData/*0:0*/ cpu__DOT__JumpD;
    CData/*0:0*/ cpu__DOT__BranchD;
    CData/*2:0*/ cpu__DOT__ALUControlD;
    CData/*0:0*/ cpu__DOT__ALUSrcD;
    CData/*0:0*/ cpu__DOT__JALRctrlD;
    CData/*0:0*/ cpu__DOT__RegWriteE;
    CData/*1:0*/ cpu__DOT__ResultSrcE;
    CData/*0:0*/ cpu__DOT__MemWriteE;
    CData/*4:0*/ cpu__DOT__RdE;
    CData/*0:0*/ cpu__DOT__RegWriteM;
    CData/*1:0*/ cpu__DOT__ResultSrcM;
    CData/*4:0*/ cpu__DOT__RdM;
    CData/*0:0*/ cpu__DOT__RegWriteW;
    CData/*4:0*/ cpu__DOT__RdW;
    CData/*2:0*/ cpu__DOT__decode__DOT__ImmSrcD;
    CData/*1:0*/ cpu__DOT__decode__DOT__ctrl__DOT__ALUOp;
    CData/*2:0*/ cpu__DOT__execute__DOT__ALUControlE;
    CData/*0:0*/ cpu__DOT__execute__DOT__ALUSrcE;
    CData/*0:0*/ cpu__DOT__execute__DOT__JumpE;
    CData/*0:0*/ cpu__DOT__execute__DOT__BranchE;
    CData/*0:0*/ cpu__DOT__execute__DOT__JALRctrlE;
    CData/*0:0*/ cpu__DOT__memory__DOT__MemWriteM;
    CData/*1:0*/ cpu__DOT__writeback__DOT__ResultSrcW;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    VL_OUT(a0,31,0);
    IData/*31:0*/ cpu__DOT__PCF;
    IData/*31:0*/ cpu__DOT__PCD;
    IData/*31:0*/ cpu__DOT__ImmExtD;
    IData/*31:0*/ cpu__DOT__PCPlus4D;
    IData/*31:0*/ cpu__DOT__ALUResultE;
    IData/*31:0*/ cpu__DOT__PCPlus4E;
    IData/*31:0*/ cpu__DOT__ALUResultM;
    IData/*31:0*/ cpu__DOT__PCPlus4M;
    IData/*31:0*/ cpu__DOT__fetch__DOT__nextPCF;
    IData/*31:0*/ cpu__DOT__decode__DOT__InstrD;
    IData/*31:0*/ cpu__DOT__decode__DOT__Reg_File__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ cpu__DOT__execute__DOT__RD1E;
    IData/*31:0*/ cpu__DOT__execute__DOT__RD2E;
    IData/*31:0*/ cpu__DOT__execute__DOT__PCE;
    IData/*31:0*/ cpu__DOT__execute__DOT__ImmExtE;
    IData/*31:0*/ cpu__DOT__execute__DOT__SrcBE;
    IData/*31:0*/ cpu__DOT__memory__DOT__WriteDataM;
    IData/*31:0*/ cpu__DOT__writeback__DOT__ALUResultW;
    IData/*31:0*/ cpu__DOT__writeback__DOT__ReadDataW;
    IData/*31:0*/ cpu__DOT__writeback__DOT__PCPlus4W;
    VlUnpacked<CData/*7:0*/, 4096> cpu__DOT__fetch__DOT__instrmem__DOT__rom_array;
    VlUnpacked<IData/*31:0*/, 32> cpu__DOT__decode__DOT__Reg_File__DOT__ram_array;
    VlUnpacked<CData/*7:0*/, 131072> cpu__DOT__memory__DOT__datamem__DOT__data_mem_array;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

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
