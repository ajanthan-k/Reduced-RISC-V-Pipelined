// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


VL_ATTR_COLD void Vcpu___024root__trace_init_sub__TOP__0(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+62,"clk", false,-1);
    tracep->declBit(c+63,"rst", false,-1);
    tracep->declBus(c+64,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBus(c+67,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+62,"clk", false,-1);
    tracep->declBit(c+63,"rst", false,-1);
    tracep->declBus(c+64,"a0", false,-1, 31,0);
    tracep->declBus(c+34,"PC", false,-1, 31,0);
    tracep->declBus(c+35,"instr", false,-1, 31,0);
    tracep->declBus(c+36,"PCPlus4", false,-1, 31,0);
    tracep->declBus(c+37,"PCTarget", false,-1, 31,0);
    tracep->declBit(c+38,"PCsrc", false,-1);
    tracep->declBit(c+39,"RegWrite", false,-1);
    tracep->declBus(c+40,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+41,"ALUsrc", false,-1);
    tracep->declBus(c+42,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+43,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+44,"MemWrite", false,-1);
    tracep->declBit(c+45,"JALRctrl", false,-1);
    tracep->declBit(c+46,"Zero", false,-1);
    tracep->declBus(c+47,"ImmOp", false,-1, 31,0);
    tracep->pushNamePrefix("Execute_top ");
    tracep->declBus(c+68,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+69,"ALUctrl_WIDTH", false,-1, 31,0);
    tracep->declBus(c+67,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+62,"clk", false,-1);
    tracep->declBit(c+39,"RegWrite", false,-1);
    tracep->declBus(c+48,"rs1", false,-1, 4,0);
    tracep->declBus(c+49,"rs2", false,-1, 4,0);
    tracep->declBus(c+50,"rd", false,-1, 4,0);
    tracep->declBit(c+45,"JALRctrl", false,-1);
    tracep->declBus(c+47,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+36,"PCPlus4", false,-1, 31,0);
    tracep->declBus(c+34,"PC", false,-1, 31,0);
    tracep->declBit(c+41,"ALUsrc", false,-1);
    tracep->declBus(c+40,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+44,"MemWrite", false,-1);
    tracep->declBus(c+43,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+46,"Zero", false,-1);
    tracep->declBus(c+64,"a0", false,-1, 31,0);
    tracep->declBus(c+37,"PCTarget", false,-1, 31,0);
    tracep->declBus(c+51,"SrcA", false,-1, 31,0);
    tracep->declBus(c+52,"regOp2", false,-1, 31,0);
    tracep->declBus(c+53,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+54,"ALUout", false,-1, 31,0);
    tracep->declBus(c+65,"result", false,-1, 31,0);
    tracep->declBus(c+66,"readata", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+67,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+51,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+53,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+40,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+54,"ALUout", false,-1, 31,0);
    tracep->declBit(c+46,"Zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("datamem ");
    tracep->declBus(c+67,"EXT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+70,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+62,"clk", false,-1);
    tracep->declBus(c+54,"A", false,-1, 31,0);
    tracep->declBus(c+52,"WD", false,-1, 31,0);
    tracep->declBit(c+44,"WE", false,-1);
    tracep->declBus(c+66,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("register ");
    tracep->declBus(c+68,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+67,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+62,"clk", false,-1);
    tracep->declBus(c+48,"AD1", false,-1, 4,0);
    tracep->declBus(c+49,"AD2", false,-1, 4,0);
    tracep->declBus(c+50,"AD3", false,-1, 4,0);
    tracep->declBit(c+39,"WE3", false,-1);
    tracep->declBus(c+65,"WD3", false,-1, 31,0);
    tracep->declBus(c+64,"a0", false,-1, 31,0);
    tracep->declBus(c+51,"RD1", false,-1, 31,0);
    tracep->declBus(c+52,"RD2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2+i*1,"ram_array", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("PC_top ");
    tracep->declBus(c+67,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+62,"clk", false,-1);
    tracep->declBit(c+63,"rst", false,-1);
    tracep->declBit(c+38,"PCsrc", false,-1);
    tracep->declBus(c+37,"PCTarget", false,-1, 31,0);
    tracep->declBus(c+34,"PC", false,-1, 31,0);
    tracep->declBus(c+36,"PCPlus4", false,-1, 31,0);
    tracep->declBus(c+55,"next_PC", false,-1, 31,0);
    tracep->pushNamePrefix("PC_Reg ");
    tracep->declBus(c+67,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+62,"clk", false,-1);
    tracep->declBit(c+63,"rst", false,-1);
    tracep->declBus(c+55,"next_PC", false,-1, 31,0);
    tracep->declBus(c+34,"PC", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ctrl ");
    tracep->declBus(c+67,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+46,"Zero", false,-1);
    tracep->declBus(c+35,"Instr", false,-1, 31,0);
    tracep->declBit(c+38,"PCSrc", false,-1);
    tracep->declBus(c+43,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+44,"MemWrite", false,-1);
    tracep->declBus(c+40,"ALUControl", false,-1, 2,0);
    tracep->declBit(c+41,"ALUSrc", false,-1);
    tracep->declBus(c+42,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+39,"RegWrite", false,-1);
    tracep->declBit(c+45,"JALRctrl", false,-1);
    tracep->declBus(c+56,"ALUOp", false,-1, 1,0);
    tracep->pushNamePrefix("dalu ");
    tracep->declBus(c+56,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+57,"opcode", false,-1, 6,0);
    tracep->declBus(c+58,"fn3", false,-1, 2,0);
    tracep->declBus(c+59,"fn7", false,-1, 6,0);
    tracep->declBus(c+40,"ALUControl", false,-1, 2,0);
    tracep->declBus(c+60,"decoder", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dmain ");
    tracep->declBus(c+67,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+46,"Zero", false,-1);
    tracep->declBus(c+35,"Instr", false,-1, 31,0);
    tracep->declBit(c+38,"PCSrc", false,-1);
    tracep->declBus(c+43,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+44,"MemWrite", false,-1);
    tracep->declBit(c+41,"ALUSrc", false,-1);
    tracep->declBus(c+42,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+39,"RegWrite", false,-1);
    tracep->declBus(c+56,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+45,"JALRctrl", false,-1);
    tracep->declBus(c+57,"opcode", false,-1, 6,0);
    tracep->declBus(c+58,"fn3", false,-1, 2,0);
    tracep->declBit(c+61,"Branch", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rom ");
    tracep->declBus(c+70,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+67,"EXT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+34,"A", false,-1, 31,0);
    tracep->declBus(c+35,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sign_ext ");
    tracep->declBus(c+67,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+35,"Instr", false,-1, 31,0);
    tracep->declBus(c+42,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+47,"ImmOp", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcpu___024root__trace_init_top(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_top\n"); );
    // Body
    Vcpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcpu___024root__trace_register(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcpu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcpu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcpu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[0]),32);
    bufp->fullIData(oldp+3,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[1]),32);
    bufp->fullIData(oldp+4,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[2]),32);
    bufp->fullIData(oldp+5,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[3]),32);
    bufp->fullIData(oldp+6,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[4]),32);
    bufp->fullIData(oldp+7,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[5]),32);
    bufp->fullIData(oldp+8,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[6]),32);
    bufp->fullIData(oldp+9,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[7]),32);
    bufp->fullIData(oldp+10,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[8]),32);
    bufp->fullIData(oldp+11,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[9]),32);
    bufp->fullIData(oldp+12,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[10]),32);
    bufp->fullIData(oldp+13,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[11]),32);
    bufp->fullIData(oldp+14,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[12]),32);
    bufp->fullIData(oldp+15,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[13]),32);
    bufp->fullIData(oldp+16,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[14]),32);
    bufp->fullIData(oldp+17,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[15]),32);
    bufp->fullIData(oldp+18,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[16]),32);
    bufp->fullIData(oldp+19,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[17]),32);
    bufp->fullIData(oldp+20,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[18]),32);
    bufp->fullIData(oldp+21,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[19]),32);
    bufp->fullIData(oldp+22,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[20]),32);
    bufp->fullIData(oldp+23,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[21]),32);
    bufp->fullIData(oldp+24,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[22]),32);
    bufp->fullIData(oldp+25,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[23]),32);
    bufp->fullIData(oldp+26,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[24]),32);
    bufp->fullIData(oldp+27,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[25]),32);
    bufp->fullIData(oldp+28,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[26]),32);
    bufp->fullIData(oldp+29,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[27]),32);
    bufp->fullIData(oldp+30,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[28]),32);
    bufp->fullIData(oldp+31,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[29]),32);
    bufp->fullIData(oldp+32,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[30]),32);
    bufp->fullIData(oldp+33,(vlSelf->cpu__DOT__Execute_top__DOT__register__DOT__ram_array[31]),32);
    bufp->fullIData(oldp+34,(vlSelf->cpu__DOT__PC),32);
    bufp->fullIData(oldp+35,(vlSelf->cpu__DOT__instr),32);
    bufp->fullIData(oldp+36,(((IData)(4U) + vlSelf->cpu__DOT__PC)),32);
    bufp->fullIData(oldp+37,(((IData)(vlSelf->cpu__DOT__JALRctrl)
                               ? vlSelf->cpu__DOT__Execute_top__DOT__ALUout
                               : (vlSelf->cpu__DOT__PC 
                                  + vlSelf->cpu__DOT__ImmOp))),32);
    bufp->fullBit(oldp+38,(vlSelf->cpu__DOT__PCsrc));
    bufp->fullBit(oldp+39,(vlSelf->cpu__DOT__RegWrite));
    bufp->fullCData(oldp+40,(vlSelf->cpu__DOT__ALUctrl),3);
    bufp->fullBit(oldp+41,(vlSelf->cpu__DOT__ALUsrc));
    bufp->fullCData(oldp+42,(vlSelf->cpu__DOT__ImmSrc),3);
    bufp->fullCData(oldp+43,(vlSelf->cpu__DOT__ResultSrc),2);
    bufp->fullBit(oldp+44,((IData)((0x23U == (0x7fU 
                                              & vlSelf->cpu__DOT__instr)))));
    bufp->fullBit(oldp+45,(vlSelf->cpu__DOT__JALRctrl));
    bufp->fullBit(oldp+46,(vlSelf->cpu__DOT__Zero));
    bufp->fullIData(oldp+47,(vlSelf->cpu__DOT__ImmOp),32);
    bufp->fullCData(oldp+48,((0x1fU & (vlSelf->cpu__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+49,((0x1fU & (vlSelf->cpu__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+50,((0x1fU & (vlSelf->cpu__DOT__instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+51,(vlSelf->cpu__DOT__Execute_top__DOT__SrcA),32);
    bufp->fullIData(oldp+52,(vlSelf->cpu__DOT__Execute_top__DOT__regOp2),32);
    bufp->fullIData(oldp+53,(vlSelf->cpu__DOT__Execute_top__DOT__ALUop2),32);
    bufp->fullIData(oldp+54,(vlSelf->cpu__DOT__Execute_top__DOT__ALUout),32);
    bufp->fullIData(oldp+55,(((IData)(vlSelf->cpu__DOT__PCsrc)
                               ? ((IData)(vlSelf->cpu__DOT__JALRctrl)
                                   ? vlSelf->cpu__DOT__Execute_top__DOT__ALUout
                                   : (vlSelf->cpu__DOT__PC 
                                      + vlSelf->cpu__DOT__ImmOp))
                               : ((IData)(4U) + vlSelf->cpu__DOT__PC))),32);
    bufp->fullCData(oldp+56,(((0x40U & vlSelf->cpu__DOT__instr)
                               ? ((0x20U & vlSelf->cpu__DOT__instr)
                                   ? ((0x10U & vlSelf->cpu__DOT__instr)
                                       ? 0U : ((8U 
                                                & vlSelf->cpu__DOT__instr)
                                                ? 0U
                                                : (
                                                   (4U 
                                                    & vlSelf->cpu__DOT__instr)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelf->cpu__DOT__instr)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->cpu__DOT__instr)
                                                      ? 1U
                                                      : 0U)
                                                     : 0U))))
                                   : 0U) : ((0x20U 
                                             & vlSelf->cpu__DOT__instr)
                                             ? ((0x10U 
                                                 & vlSelf->cpu__DOT__instr)
                                                 ? 
                                                ((8U 
                                                  & vlSelf->cpu__DOT__instr)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->cpu__DOT__instr)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->cpu__DOT__instr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->cpu__DOT__instr)
                                                     ? 3U
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & vlSelf->cpu__DOT__instr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->cpu__DOT__instr)
                                                     ? 2U
                                                     : 0U)
                                                    : 0U)))
                                                 : 0U)
                                             : 0U))),2);
    bufp->fullCData(oldp+57,((0x7fU & vlSelf->cpu__DOT__instr)),7);
    bufp->fullCData(oldp+58,((7U & (vlSelf->cpu__DOT__instr 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+59,((vlSelf->cpu__DOT__instr 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+60,(vlSelf->cpu__DOT__ctrl__DOT__dalu__DOT__decoder),7);
    bufp->fullBit(oldp+61,(vlSelf->cpu__DOT__ctrl__DOT__dmain__DOT__Branch));
    bufp->fullBit(oldp+62,(vlSelf->clk));
    bufp->fullBit(oldp+63,(vlSelf->rst));
    bufp->fullIData(oldp+64,(vlSelf->a0),32);
    bufp->fullIData(oldp+65,(((2U & (IData)(vlSelf->cpu__DOT__ResultSrc))
                               ? ((IData)(4U) + vlSelf->cpu__DOT__PC)
                               : ((1U & (IData)(vlSelf->cpu__DOT__ResultSrc))
                                   ? vlSelf->cpu__DOT__Execute_top__DOT__datamem__DOT__data_mem_array
                                  [(0x1ffffU & vlSelf->cpu__DOT__Execute_top__DOT__ALUout)]
                                   : vlSelf->cpu__DOT__Execute_top__DOT__ALUout))),32);
    bufp->fullIData(oldp+66,(vlSelf->cpu__DOT__Execute_top__DOT__datamem__DOT__data_mem_array
                             [(0x1ffffU & vlSelf->cpu__DOT__Execute_top__DOT__ALUout)]),32);
    bufp->fullIData(oldp+67,(0x20U),32);
    bufp->fullIData(oldp+68,(5U),32);
    bufp->fullIData(oldp+69,(3U),32);
    bufp->fullIData(oldp+70,(8U),32);
}
