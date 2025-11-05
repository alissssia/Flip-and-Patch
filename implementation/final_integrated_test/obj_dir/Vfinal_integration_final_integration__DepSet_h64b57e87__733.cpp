// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfinal_integration.h for the primary calling header

#include "Vfinal_integration__pch.h"
#include "Vfinal_integration_final_integration.h"

VL_INLINE_OPT void Vfinal_integration_final_integration___nba_sequent__TOP__final_integration__736(Vfinal_integration_final_integration* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vfinal_integration_final_integration___nba_sequent__TOP__final_integration__736\n"); );
    // Init
    SData/*15:0*/ __VdlyVal__rellenar_fallos__DOT__memory__v0;
    __VdlyVal__rellenar_fallos__DOT__memory__v0 = 0;
    IData/*19:0*/ __VdlyDim0__rellenar_fallos__DOT__memory__v0;
    __VdlyDim0__rellenar_fallos__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__rellenar_fallos__DOT__memory__v0;
    __VdlySet__rellenar_fallos__DOT__memory__v0 = 0;
    // Body
    __VdlySet__rellenar_fallos__DOT__memory__v0 = 0U;
    if (vlSelf->__PVT__rellenar_fallos__DOT__mem_write_enable) {
        vlSelf->__PVT__rellenar_fallos__DOT__unnamedblk3__DOT__keep_mask 
            = (0xffffU & (~ (vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask
                             [vlSelf->__PVT__rellenar_fallos__DOT__mem_addr] 
                             | vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask
                             [vlSelf->__PVT__rellenar_fallos__DOT__mem_addr])));
        vlSelf->__PVT__rellenar_fallos__DOT__unnamedblk3__DOT__forced1 
            = vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask
            [vlSelf->__PVT__rellenar_fallos__DOT__mem_addr];
        __VdlyVal__rellenar_fallos__DOT__memory__v0 
            = ((((1U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__current_state))
                  ? 0xffffU : 0U) & (IData)(vlSelf->__PVT__rellenar_fallos__DOT__unnamedblk3__DOT__keep_mask)) 
               | (IData)(vlSelf->__PVT__rellenar_fallos__DOT__unnamedblk3__DOT__forced1));
        __VdlyDim0__rellenar_fallos__DOT__memory__v0 
            = vlSelf->__PVT__rellenar_fallos__DOT__mem_addr;
        __VdlySet__rellenar_fallos__DOT__memory__v0 = 1U;
    }
    if (__VdlySet__rellenar_fallos__DOT__memory__v0) {
        vlSelf->__PVT__rellenar_fallos__DOT__memory[__VdlyDim0__rellenar_fallos__DOT__memory__v0] 
            = __VdlyVal__rellenar_fallos__DOT__memory__v0;
    }
}

VL_INLINE_OPT void Vfinal_integration_final_integration___nba_comb__TOP__final_integration__0(Vfinal_integration_final_integration* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vfinal_integration_final_integration___nba_comb__TOP__final_integration__0\n"); );
    // Init
    SData/*15:0*/ __PVT__rellenar_fallos__DOT__barrido_1s__DOT__not_expected_value;
    __PVT__rellenar_fallos__DOT__barrido_1s__DOT__not_expected_value = 0;
    CData/*0:0*/ __PVT__rellenar_fallos__DOT__barrido_0s__DOT__has_high_order;
    __PVT__rellenar_fallos__DOT__barrido_0s__DOT__has_high_order = 0;
    CData/*0:0*/ __PVT__rellenar_fallos__DOT__barrido_0s__DOT__has_low_order;
    __PVT__rellenar_fallos__DOT__barrido_0s__DOT__has_low_order = 0;
    // Body
    __PVT__rellenar_fallos__DOT__barrido_1s__DOT__not_expected_value 
        = (0xffffU & (~ vlSelf->__PVT__rellenar_fallos__DOT__memory
                      [vlSelf->__PVT__rellenar_fallos__DOT__mem_addr]));
    __PVT__rellenar_fallos__DOT__barrido_0s__DOT__has_low_order 
        = (0U != (0xffU & vlSelf->__PVT__rellenar_fallos__DOT__memory
                  [vlSelf->__PVT__rellenar_fallos__DOT__mem_addr]));
    __PVT__rellenar_fallos__DOT__barrido_0s__DOT__has_high_order 
        = (0U != (0xffU & (vlSelf->__PVT__rellenar_fallos__DOT__memory
                           [vlSelf->__PVT__rellenar_fallos__DOT__mem_addr] 
                           >> 8U)));
    vlSelf->__PVT__rellenar_fallos__DOT__error_type1 
        = (((~ (IData)((0U != (0xffU & (IData)(__PVT__rellenar_fallos__DOT__barrido_1s__DOT__not_expected_value))))) 
            & (0U != (0xffU & ((IData)(__PVT__rellenar_fallos__DOT__barrido_1s__DOT__not_expected_value) 
                               >> 8U)))) ? 1U : (((0U 
                                                   != 
                                                   (0xffU 
                                                    & ((IData)(__PVT__rellenar_fallos__DOT__barrido_1s__DOT__not_expected_value) 
                                                       >> 8U))) 
                                                  & (0U 
                                                     != 
                                                     (0xffU 
                                                      & (IData)(__PVT__rellenar_fallos__DOT__barrido_1s__DOT__not_expected_value))))
                                                  ? 2U
                                                  : 0U));
    vlSelf->__PVT__rellenar_fallos__DOT__error_type0 
        = (((~ (IData)(__PVT__rellenar_fallos__DOT__barrido_0s__DOT__has_low_order)) 
            & (IData)(__PVT__rellenar_fallos__DOT__barrido_0s__DOT__has_high_order))
            ? 1U : (((IData)(__PVT__rellenar_fallos__DOT__barrido_0s__DOT__has_high_order) 
                     & (IData)(__PVT__rellenar_fallos__DOT__barrido_0s__DOT__has_low_order))
                     ? 2U : 0U));
}
