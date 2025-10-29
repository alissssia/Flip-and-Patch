// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench_fallos.h for the primary calling header

#include "Vtestbench_fallos__pch.h"
#include "Vtestbench_fallos__Syms.h"
#include "Vtestbench_fallos___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench_fallos___024root___dump_triggers__ico(Vtestbench_fallos___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestbench_fallos___024root___eval_triggers__ico(Vtestbench_fallos___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_fallos__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_fallos___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtestbench_fallos___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench_fallos___024root___dump_triggers__act(Vtestbench_fallos___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestbench_fallos___024root___eval_triggers__act(Vtestbench_fallos___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_fallos__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_fallos___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0)))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtestbench_fallos___024root___dump_triggers__act(vlSelf);
    }
#endif
}
