// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


void Vcpu___024root__trace_chg_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_chg_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcpu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcpu___024root__trace_chg_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->cpu__DOT__red__DOT__register__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+1,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[0]),32);
        bufp->chgIData(oldp+2,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[1]),32);
        bufp->chgIData(oldp+3,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[2]),32);
        bufp->chgIData(oldp+4,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[3]),32);
        bufp->chgIData(oldp+5,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[4]),32);
        bufp->chgIData(oldp+6,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[5]),32);
        bufp->chgIData(oldp+7,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[6]),32);
        bufp->chgIData(oldp+8,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[7]),32);
        bufp->chgIData(oldp+9,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[8]),32);
        bufp->chgIData(oldp+10,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[9]),32);
        bufp->chgIData(oldp+11,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[10]),32);
        bufp->chgIData(oldp+12,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[11]),32);
        bufp->chgIData(oldp+13,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[12]),32);
        bufp->chgIData(oldp+14,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[13]),32);
        bufp->chgIData(oldp+15,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[14]),32);
        bufp->chgIData(oldp+16,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[15]),32);
        bufp->chgIData(oldp+17,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[16]),32);
        bufp->chgIData(oldp+18,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[17]),32);
        bufp->chgIData(oldp+19,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[18]),32);
        bufp->chgIData(oldp+20,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[19]),32);
        bufp->chgIData(oldp+21,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[20]),32);
        bufp->chgIData(oldp+22,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[21]),32);
        bufp->chgIData(oldp+23,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[22]),32);
        bufp->chgIData(oldp+24,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[23]),32);
        bufp->chgIData(oldp+25,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[24]),32);
        bufp->chgIData(oldp+26,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[25]),32);
        bufp->chgIData(oldp+27,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[26]),32);
        bufp->chgIData(oldp+28,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[27]),32);
        bufp->chgIData(oldp+29,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[28]),32);
        bufp->chgIData(oldp+30,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[29]),32);
        bufp->chgIData(oldp+31,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[30]),32);
        bufp->chgIData(oldp+32,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+33,(vlSelf->cpu__DOT__Zero));
        bufp->chgIData(oldp+34,(vlSelf->cpu__DOT__PC),32);
        bufp->chgIData(oldp+35,(((IData)(4U) + vlSelf->cpu__DOT__PC)),32);
        bufp->chgIData(oldp+36,(((IData)(vlSelf->cpu__DOT__JALRctrl)
                                  ? vlSelf->cpu__DOT__red__DOT__ALUout
                                  : (vlSelf->cpu__DOT__PC 
                                     + vlSelf->cpu__DOT__ImmOp))),32);
        bufp->chgIData(oldp+37,(vlSelf->cpu__DOT__ImmOp),32);
        bufp->chgBit(oldp+38,(vlSelf->cpu__DOT__PCsrc));
        bufp->chgBit(oldp+39,(vlSelf->cpu__DOT__RegWrite));
        bufp->chgCData(oldp+40,(vlSelf->cpu__DOT__ALUctrl),3);
        bufp->chgBit(oldp+41,(vlSelf->cpu__DOT__ALUsrc));
        bufp->chgCData(oldp+42,(vlSelf->cpu__DOT__ImmSrc),2);
        bufp->chgIData(oldp+43,(vlSelf->cpu__DOT__instr),32);
        bufp->chgCData(oldp+44,(vlSelf->cpu__DOT__ResultSrc),2);
        bufp->chgBit(oldp+45,((IData)((0x23U == (0x7fU 
                                                 & vlSelf->cpu__DOT__instr)))));
        bufp->chgBit(oldp+46,(vlSelf->cpu__DOT__JALRctrl));
        bufp->chgIData(oldp+47,(((IData)(vlSelf->cpu__DOT__PCsrc)
                                  ? ((IData)(vlSelf->cpu__DOT__JALRctrl)
                                      ? vlSelf->cpu__DOT__red__DOT__ALUout
                                      : (vlSelf->cpu__DOT__PC 
                                         + vlSelf->cpu__DOT__ImmOp))
                                  : ((IData)(4U) + vlSelf->cpu__DOT__PC))),32);
        bufp->chgCData(oldp+48,(((0x40U & vlSelf->cpu__DOT__instr)
                                  ? ((0x20U & vlSelf->cpu__DOT__instr)
                                      ? ((0x10U & vlSelf->cpu__DOT__instr)
                                          ? 0U : ((8U 
                                                   & vlSelf->cpu__DOT__instr)
                                                   ? 0U
                                                   : 
                                                  ((4U 
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
                                                ? (
                                                   (0x10U 
                                                    & vlSelf->cpu__DOT__instr)
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->cpu__DOT__instr)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->cpu__DOT__instr)
                                                      ? 0U
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
        bufp->chgCData(oldp+49,((0x7fU & vlSelf->cpu__DOT__instr)),7);
        bufp->chgCData(oldp+50,((7U & (vlSelf->cpu__DOT__instr 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+51,((vlSelf->cpu__DOT__instr 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+52,(((((0x40U & vlSelf->cpu__DOT__instr)
                                    ? ((0x20U & vlSelf->cpu__DOT__instr)
                                        ? ((0x10U & vlSelf->cpu__DOT__instr)
                                            ? 0U : 
                                           ((8U & vlSelf->cpu__DOT__instr)
                                             ? 0U : 
                                            ((4U & vlSelf->cpu__DOT__instr)
                                              ? 0U : 
                                             ((2U & vlSelf->cpu__DOT__instr)
                                               ? ((1U 
                                                   & vlSelf->cpu__DOT__instr)
                                                   ? 1U
                                                   : 0U)
                                               : 0U))))
                                        : 0U) : ((0x20U 
                                                  & vlSelf->cpu__DOT__instr)
                                                  ? 
                                                 ((0x10U 
                                                   & vlSelf->cpu__DOT__instr)
                                                   ? 
                                                  ((8U 
                                                    & vlSelf->cpu__DOT__instr)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSelf->cpu__DOT__instr)
                                                     ? 0U
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
                                                  : 0U)) 
                                  << 5U) | ((0x1cU 
                                             & (vlSelf->cpu__DOT__instr 
                                                >> 0xaU)) 
                                            | ((2U 
                                                & (vlSelf->cpu__DOT__instr 
                                                   >> 4U)) 
                                               | (1U 
                                                  & (vlSelf->cpu__DOT__instr 
                                                     >> 0x1eU)))))),7);
        bufp->chgBit(oldp+53,(vlSelf->cpu__DOT__ctrl__DOT__dmain__DOT__Branch));
        bufp->chgCData(oldp+54,((0x1fU & (vlSelf->cpu__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+55,((0x1fU & (vlSelf->cpu__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+56,((0x1fU & (vlSelf->cpu__DOT__instr 
                                          >> 7U))),5);
        bufp->chgIData(oldp+57,(vlSelf->cpu__DOT__red__DOT__SrcA),32);
        bufp->chgIData(oldp+58,(vlSelf->cpu__DOT__red__DOT__regOp2),32);
        bufp->chgIData(oldp+59,(vlSelf->cpu__DOT__red__DOT__ALUop2),32);
        bufp->chgIData(oldp+60,(vlSelf->cpu__DOT__red__DOT__ALUout),32);
        bufp->chgIData(oldp+61,(((2U & (IData)(vlSelf->cpu__DOT__ResultSrc))
                                  ? ((IData)(4U) + vlSelf->cpu__DOT__PC)
                                  : ((1U & (IData)(vlSelf->cpu__DOT__ResultSrc))
                                      ? vlSelf->cpu__DOT__red__DOT__readata
                                      : vlSelf->cpu__DOT__red__DOT__ALUout))),32);
        bufp->chgIData(oldp+62,(vlSelf->cpu__DOT__red__DOT__readata),32);
        bufp->chgSData(oldp+63,((0xfffU & vlSelf->cpu__DOT__PC)),12);
    }
    bufp->chgBit(oldp+64,(vlSelf->clk));
    bufp->chgBit(oldp+65,(vlSelf->rst));
    bufp->chgIData(oldp+66,(vlSelf->a0),32);
}

void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_cleanup\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
