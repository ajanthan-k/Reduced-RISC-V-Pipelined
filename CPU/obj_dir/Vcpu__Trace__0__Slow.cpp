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
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"rst", false,-1);
    tracep->declBus(c+67,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBus(c+68,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"rst", false,-1);
    tracep->declBus(c+67,"a0", false,-1, 31,0);
    tracep->declBit(c+34,"Zero", false,-1);
    tracep->declBus(c+35,"PC", false,-1, 31,0);
    tracep->declBus(c+36,"PCPlus4", false,-1, 31,0);
    tracep->declBus(c+37,"PCTarget", false,-1, 31,0);
    tracep->declBus(c+38,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+39,"PCsrc", false,-1);
    tracep->declBit(c+40,"RegWrite", false,-1);
    tracep->declBus(c+41,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+42,"ALUsrc", false,-1);
    tracep->declBus(c+43,"ImmSrc", false,-1, 1,0);
    tracep->declBus(c+44,"instr", false,-1, 31,0);
    tracep->declBus(c+45,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+46,"MemWrite", false,-1);
    tracep->declBit(c+47,"JALRctrl", false,-1);
    tracep->pushNamePrefix("blue ");
    tracep->declBus(c+68,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"rst", false,-1);
    tracep->declBit(c+39,"PCsrc", false,-1);
    tracep->declBus(c+37,"PCTarget", false,-1, 31,0);
    tracep->declBus(c+35,"PC", false,-1, 31,0);
    tracep->declBus(c+36,"PCPlus4", false,-1, 31,0);
    tracep->declBus(c+48,"next_PC", false,-1, 31,0);
    tracep->pushNamePrefix("PC_Reg ");
    tracep->declBus(c+68,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"rst", false,-1);
    tracep->declBus(c+48,"next_PC", false,-1, 31,0);
    tracep->declBus(c+35,"PC", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ctrl ");
    tracep->declBus(c+68,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+34,"Zero", false,-1);
    tracep->declBus(c+44,"Instr", false,-1, 31,0);
    tracep->declBit(c+39,"PCSrc", false,-1);
    tracep->declBus(c+45,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+46,"MemWrite", false,-1);
    tracep->declBus(c+41,"ALUControl", false,-1, 2,0);
    tracep->declBit(c+42,"ALUSrc", false,-1);
    tracep->declBus(c+43,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+40,"RegWrite", false,-1);
    tracep->declBit(c+47,"JALRctrl", false,-1);
    tracep->declBus(c+49,"ALUOp", false,-1, 1,0);
    tracep->pushNamePrefix("dalu ");
    tracep->declBus(c+49,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+50,"opcode", false,-1, 6,0);
    tracep->declBus(c+51,"fn3", false,-1, 2,0);
    tracep->declBus(c+52,"fn7", false,-1, 6,0);
    tracep->declBus(c+41,"ALUControl", false,-1, 2,0);
    tracep->declBus(c+53,"decoder", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dmain ");
    tracep->declBus(c+68,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+34,"Zero", false,-1);
    tracep->declBus(c+44,"Instr", false,-1, 31,0);
    tracep->declBit(c+39,"PCSrc", false,-1);
    tracep->declBus(c+45,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+46,"MemWrite", false,-1);
    tracep->declBit(c+42,"ALUSrc", false,-1);
    tracep->declBus(c+43,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+40,"RegWrite", false,-1);
    tracep->declBus(c+49,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+47,"JALRctrl", false,-1);
    tracep->declBus(c+50,"opcode", false,-1, 6,0);
    tracep->declBus(c+51,"fn3", false,-1, 2,0);
    tracep->declBus(c+52,"fn7", false,-1, 6,0);
    tracep->declBit(c+54,"Branch", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("red ");
    tracep->declBus(c+69,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+70,"ALUctrl_WIDTH", false,-1, 31,0);
    tracep->declBus(c+68,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBus(c+38,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+40,"RegWrite", false,-1);
    tracep->declBus(c+41,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+42,"ALUsrc", false,-1);
    tracep->declBus(c+55,"rs1", false,-1, 4,0);
    tracep->declBus(c+56,"rs2", false,-1, 4,0);
    tracep->declBus(c+57,"rd", false,-1, 4,0);
    tracep->declBit(c+46,"MemWrite", false,-1);
    tracep->declBus(c+45,"ResultSrc", false,-1, 1,0);
    tracep->declBus(c+36,"PCPlus4", false,-1, 31,0);
    tracep->declBus(c+35,"PC", false,-1, 31,0);
    tracep->declBit(c+47,"JALRctrl", false,-1);
    tracep->declBit(c+34,"Zero", false,-1);
    tracep->declBus(c+67,"a0", false,-1, 31,0);
    tracep->declBus(c+37,"PCTarget", false,-1, 31,0);
    tracep->declBus(c+58,"SrcA", false,-1, 31,0);
    tracep->declBus(c+59,"regOp2", false,-1, 31,0);
    tracep->declBus(c+60,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+61,"ALUout", false,-1, 31,0);
    tracep->declBus(c+62,"result", false,-1, 31,0);
    tracep->declBus(c+63,"readata", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+68,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+58,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+60,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+41,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+61,"ALUout", false,-1, 31,0);
    tracep->declBit(c+34,"Zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("datamem ");
    tracep->declBus(c+68,"EXT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+71,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+72,"MEM_WIDTH", false,-1, 31,0);
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBus(c+61,"A", false,-1, 31,0);
    tracep->declBus(c+59,"WD", false,-1, 31,0);
    tracep->declBit(c+46,"WE", false,-1);
    tracep->declBus(c+63,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("register ");
    tracep->declBus(c+69,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+68,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBus(c+55,"AD1", false,-1, 4,0);
    tracep->declBus(c+56,"AD2", false,-1, 4,0);
    tracep->declBus(c+57,"AD3", false,-1, 4,0);
    tracep->declBit(c+40,"WE3", false,-1);
    tracep->declBus(c+62,"WD3", false,-1, 31,0);
    tracep->declBus(c+67,"a0", false,-1, 31,0);
    tracep->declBus(c+58,"RD1", false,-1, 31,0);
    tracep->declBus(c+59,"RD2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2+i*1,"ram_array", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("rom ");
    tracep->declBus(c+71,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+72,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+68,"EXT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+35,"A", false,-1, 31,0);
    tracep->declBus(c+44,"RD", false,-1, 31,0);
    tracep->declBus(c+64,"Addr", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sign_ext ");
    tracep->declBus(c+68,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+44,"Instr", false,-1, 31,0);
    tracep->declBus(c+43,"ImmSrc", false,-1, 1,0);
    tracep->declBus(c+38,"ImmOp", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->cpu__DOT__red__DOT__register__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[0]),32);
    bufp->fullIData(oldp+3,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[1]),32);
    bufp->fullIData(oldp+4,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[2]),32);
    bufp->fullIData(oldp+5,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[3]),32);
    bufp->fullIData(oldp+6,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[4]),32);
    bufp->fullIData(oldp+7,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[5]),32);
    bufp->fullIData(oldp+8,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[6]),32);
    bufp->fullIData(oldp+9,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[7]),32);
    bufp->fullIData(oldp+10,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[8]),32);
    bufp->fullIData(oldp+11,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[9]),32);
    bufp->fullIData(oldp+12,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[10]),32);
    bufp->fullIData(oldp+13,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[11]),32);
    bufp->fullIData(oldp+14,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[12]),32);
    bufp->fullIData(oldp+15,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[13]),32);
    bufp->fullIData(oldp+16,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[14]),32);
    bufp->fullIData(oldp+17,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[15]),32);
    bufp->fullIData(oldp+18,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[16]),32);
    bufp->fullIData(oldp+19,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[17]),32);
    bufp->fullIData(oldp+20,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[18]),32);
    bufp->fullIData(oldp+21,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[19]),32);
    bufp->fullIData(oldp+22,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[20]),32);
    bufp->fullIData(oldp+23,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[21]),32);
    bufp->fullIData(oldp+24,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[22]),32);
    bufp->fullIData(oldp+25,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[23]),32);
    bufp->fullIData(oldp+26,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[24]),32);
    bufp->fullIData(oldp+27,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[25]),32);
    bufp->fullIData(oldp+28,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[26]),32);
    bufp->fullIData(oldp+29,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[27]),32);
    bufp->fullIData(oldp+30,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[28]),32);
    bufp->fullIData(oldp+31,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[29]),32);
    bufp->fullIData(oldp+32,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[30]),32);
    bufp->fullIData(oldp+33,(vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[31]),32);
    bufp->fullBit(oldp+34,(vlSelf->cpu__DOT__Zero));
    bufp->fullIData(oldp+35,(vlSelf->cpu__DOT__PC),32);
    bufp->fullIData(oldp+36,(((IData)(4U) + vlSelf->cpu__DOT__PC)),32);
    bufp->fullIData(oldp+37,(((IData)(vlSelf->cpu__DOT__JALRctrl)
                               ? vlSelf->cpu__DOT__red__DOT__ALUout
                               : (vlSelf->cpu__DOT__PC 
                                  + vlSelf->cpu__DOT__ImmOp))),32);
    bufp->fullIData(oldp+38,(vlSelf->cpu__DOT__ImmOp),32);
    bufp->fullBit(oldp+39,(vlSelf->cpu__DOT__PCsrc));
    bufp->fullBit(oldp+40,(vlSelf->cpu__DOT__RegWrite));
    bufp->fullCData(oldp+41,(vlSelf->cpu__DOT__ALUctrl),3);
    bufp->fullBit(oldp+42,(vlSelf->cpu__DOT__ALUsrc));
    bufp->fullCData(oldp+43,(vlSelf->cpu__DOT__ImmSrc),2);
    bufp->fullIData(oldp+44,(vlSelf->cpu__DOT__instr),32);
    bufp->fullCData(oldp+45,(vlSelf->cpu__DOT__ResultSrc),2);
    bufp->fullBit(oldp+46,((IData)((0x23U == (0x7fU 
                                              & vlSelf->cpu__DOT__instr)))));
    bufp->fullBit(oldp+47,(vlSelf->cpu__DOT__JALRctrl));
    bufp->fullIData(oldp+48,(((IData)(vlSelf->cpu__DOT__PCsrc)
                               ? ((IData)(vlSelf->cpu__DOT__JALRctrl)
                                   ? vlSelf->cpu__DOT__red__DOT__ALUout
                                   : (vlSelf->cpu__DOT__PC 
                                      + vlSelf->cpu__DOT__ImmOp))
                               : ((IData)(4U) + vlSelf->cpu__DOT__PC))),32);
    bufp->fullCData(oldp+49,(((0x40U & vlSelf->cpu__DOT__instr)
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
    bufp->fullCData(oldp+50,((0x7fU & vlSelf->cpu__DOT__instr)),7);
    bufp->fullCData(oldp+51,((7U & (vlSelf->cpu__DOT__instr 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+52,((vlSelf->cpu__DOT__instr 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+53,(((((0x40U & vlSelf->cpu__DOT__instr)
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
                                               ? ((0x10U 
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
                               << 5U) | ((0x1cU & (vlSelf->cpu__DOT__instr 
                                                   >> 0xaU)) 
                                         | ((2U & (vlSelf->cpu__DOT__instr 
                                                   >> 4U)) 
                                            | (1U & 
                                               (vlSelf->cpu__DOT__instr 
                                                >> 0x1eU)))))),7);
    bufp->fullBit(oldp+54,(vlSelf->cpu__DOT__ctrl__DOT__dmain__DOT__Branch));
    bufp->fullCData(oldp+55,((0x1fU & (vlSelf->cpu__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+56,((0x1fU & (vlSelf->cpu__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+57,((0x1fU & (vlSelf->cpu__DOT__instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+58,(vlSelf->cpu__DOT__red__DOT__SrcA),32);
    bufp->fullIData(oldp+59,(vlSelf->cpu__DOT__red__DOT__regOp2),32);
    bufp->fullIData(oldp+60,(vlSelf->cpu__DOT__red__DOT__ALUop2),32);
    bufp->fullIData(oldp+61,(vlSelf->cpu__DOT__red__DOT__ALUout),32);
    bufp->fullIData(oldp+62,(((2U & (IData)(vlSelf->cpu__DOT__ResultSrc))
                               ? ((IData)(4U) + vlSelf->cpu__DOT__PC)
                               : ((1U & (IData)(vlSelf->cpu__DOT__ResultSrc))
                                   ? vlSelf->cpu__DOT__red__DOT__readata
                                   : vlSelf->cpu__DOT__red__DOT__ALUout))),32);
    bufp->fullIData(oldp+63,(vlSelf->cpu__DOT__red__DOT__readata),32);
    bufp->fullSData(oldp+64,((0xfffU & vlSelf->cpu__DOT__PC)),12);
    bufp->fullBit(oldp+65,(vlSelf->clk));
    bufp->fullBit(oldp+66,(vlSelf->rst));
    bufp->fullIData(oldp+67,(vlSelf->a0),32);
    bufp->fullIData(oldp+68,(0x20U),32);
    bufp->fullIData(oldp+69,(5U),32);
    bufp->fullIData(oldp+70,(3U),32);
    bufp->fullIData(oldp+71,(8U),32);
    bufp->fullIData(oldp+72,(0xcU),32);
}
