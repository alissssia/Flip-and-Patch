// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench_fallos.h for the primary calling header

#include "Vtestbench_fallos__pch.h"
#include "Vtestbench_fallos__Syms.h"
#include "Vtestbench_fallos___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench_fallos___024root___dump_triggers__stl(Vtestbench_fallos___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestbench_fallos___024root___eval_triggers__stl(Vtestbench_fallos___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_fallos__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_fallos___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtestbench_fallos___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
