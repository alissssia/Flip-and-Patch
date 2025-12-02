// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfinal_integration.h for the primary calling header

#include "Vfinal_integration__pch.h"
#include "Vfinal_integration_test_ensemble.h"

VL_INLINE_OPT void Vfinal_integration_test_ensemble___nba_sequent__TOP__final_integration__ensemble__1(Vfinal_integration_test_ensemble* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfinal_integration_test_ensemble___nba_sequent__TOP__final_integration__ensemble__1\n"); );
    // Body
    vlSelf->__PVT__p_address = 0U;
    if ((0U != (IData)(vlSelf->__PVT__p_state))) {
        if ((1U == (IData)(vlSelf->__PVT__p_state))) {
            vlSelf->__PVT__p_address = (0x1fffffU & vlSelf->__PVT__p_fill_addr);
        } else if ((2U == (IData)(vlSelf->__PVT__p_state))) {
            vlSelf->__PVT__p_address = (0x1fffffU & vlSelf->__PVT__p_read_addr);
        }
    }
}
