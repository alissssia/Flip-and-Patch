// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfinal_integration.h for the primary calling header

#include "Vfinal_integration__pch.h"
#include "Vfinal_integration__Syms.h"
#include "Vfinal_integration_final_integration.h"

extern const VlUnpacked<CData/*2:0*/, 128> Vfinal_integration__ConstPool__TABLE_h0d2d7aa8_0;

VL_INLINE_OPT void Vfinal_integration_final_integration___ico_sequent__TOP__final_integration__0(Vfinal_integration_final_integration* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vfinal_integration_final_integration___ico_sequent__TOP__final_integration__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSymsp->TOP.start_scan) 
                     << 6U) | (((IData)(vlSelf->__PVT__rellenar_fallos__DOT__done_read1) 
                                << 5U) | (((IData)(vlSelf->__PVT__rellenar_fallos__DOT__done_read0) 
                                           << 4U) | 
                                          (((IData)(vlSymsp->TOP.reset) 
                                            << 3U) 
                                           | (IData)(vlSelf->__PVT__rellenar_fallos__DOT__current_state)))));
    vlSelf->__PVT__rellenar_fallos__DOT__next_state 
        = Vfinal_integration__ConstPool__TABLE_h0d2d7aa8_0
        [__Vtableidx1];
}

VL_INLINE_OPT void Vfinal_integration_final_integration___ico_sequent__TOP__final_integration__1(Vfinal_integration_final_integration* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vfinal_integration_final_integration___ico_sequent__TOP__final_integration__1\n"); );
    // Body
    vlSymsp->TOP__final_integration__test_mechanisms.__PVT__activation_cache[3U] 
        = vlSelf->activation_cache[3U];
    vlSymsp->TOP__final_integration__test_mechanisms.__PVT__activation_cache[2U] 
        = vlSelf->activation_cache[2U];
    vlSymsp->TOP__final_integration__test_mechanisms.__PVT__activation_cache[1U] 
        = vlSelf->activation_cache[1U];
    vlSymsp->TOP__final_integration__test_mechanisms.__PVT__activation_cache[0U] 
        = vlSelf->activation_cache[0U];
    vlSymsp->TOP__final_integration__test_mechanisms.__PVT__activation_org[3U] 
        = vlSelf->activation_org[3U];
    vlSymsp->TOP__final_integration__test_mechanisms.__PVT__activation_org[2U] 
        = vlSelf->activation_org[2U];
    vlSymsp->TOP__final_integration__test_mechanisms.__PVT__activation_org[1U] 
        = vlSelf->activation_org[1U];
    vlSymsp->TOP__final_integration__test_mechanisms.__PVT__activation_org[0U] 
        = vlSelf->activation_org[0U];
}

VL_INLINE_OPT void Vfinal_integration_final_integration___ico_sequent__TOP__final_integration__2(Vfinal_integration_final_integration* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vfinal_integration_final_integration___ico_sequent__TOP__final_integration__2\n"); );
    // Body
    vlSelf->patched_out[3U] = vlSymsp->TOP__final_integration__test_mechanisms.__PVT__patched_out
        [3U];
    vlSelf->patched_out[2U] = vlSymsp->TOP__final_integration__test_mechanisms.__PVT__patched_out
        [2U];
    vlSelf->patched_out[1U] = vlSymsp->TOP__final_integration__test_mechanisms.__PVT__patched_out
        [1U];
    vlSelf->patched_out[0U] = vlSymsp->TOP__final_integration__test_mechanisms.__PVT__patched_out
        [0U];
    vlSelf->activation_final[3U] = vlSymsp->TOP__final_integration__test_mechanisms.__PVT__activation_final
        [3U];
    vlSelf->activation_final[2U] = vlSymsp->TOP__final_integration__test_mechanisms.__PVT__activation_final
        [2U];
    vlSelf->activation_final[1U] = vlSymsp->TOP__final_integration__test_mechanisms.__PVT__activation_final
        [1U];
    vlSelf->activation_final[0U] = vlSymsp->TOP__final_integration__test_mechanisms.__PVT__activation_final
        [0U];
}

VL_INLINE_OPT void Vfinal_integration_final_integration___nba_sequent__TOP__final_integration__0(Vfinal_integration_final_integration* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vfinal_integration_final_integration___nba_sequent__TOP__final_integration__0\n"); );
    // Init
    IData/*31:0*/ __PVT__unnamedblk1__DOT__cf;
    __PVT__unnamedblk1__DOT__cf = 0;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__cp;
    __PVT__unnamedblk1__DOT__cp = 0;
    CData/*6:0*/ __Vdly__addr_mechanism;
    __Vdly__addr_mechanism = 0;
    CData/*5:0*/ __VdlyDim0__patching_bit__v64;
    __VdlyDim0__patching_bit__v64 = 0;
    CData/*5:0*/ __VdlyDim0__patching_bit__v65;
    __VdlyDim0__patching_bit__v65 = 0;
    CData/*5:0*/ __VdlyDim0__flipping_bit__v64;
    __VdlyDim0__flipping_bit__v64 = 0;
    CData/*5:0*/ __VdlyDim0__flipping_bit__v65;
    __VdlyDim0__flipping_bit__v65 = 0;
    CData/*5:0*/ __VdlyDim0__flipping_bit__v66;
    __VdlyDim0__flipping_bit__v66 = 0;
    CData/*5:0*/ __VdlyDim0__flipping_bit__v67;
    __VdlyDim0__flipping_bit__v67 = 0;
    CData/*5:0*/ __Vdly__rellenar_fallos__DOT__barrido_1s__DOT__addr_counter;
    __Vdly__rellenar_fallos__DOT__barrido_1s__DOT__addr_counter = 0;
    CData/*5:0*/ __Vdly__rellenar_fallos__DOT__barrido_0s__DOT__addr_counter;
    __Vdly__rellenar_fallos__DOT__barrido_0s__DOT__addr_counter = 0;
    CData/*0:0*/ __VdlySet__patching_bit__v0;
    __VdlySet__patching_bit__v0 = 0;
    CData/*0:0*/ __VdlySet__patching_bit__v64;
    __VdlySet__patching_bit__v64 = 0;
    CData/*0:0*/ __VdlySet__patching_bit__v65;
    __VdlySet__patching_bit__v65 = 0;
    CData/*0:0*/ __VdlySet__flipping_bit__v0;
    __VdlySet__flipping_bit__v0 = 0;
    CData/*0:0*/ __VdlySet__flipping_bit__v64;
    __VdlySet__flipping_bit__v64 = 0;
    CData/*0:0*/ __VdlySet__flipping_bit__v65;
    __VdlySet__flipping_bit__v65 = 0;
    CData/*0:0*/ __VdlySet__flipping_bit__v66;
    __VdlySet__flipping_bit__v66 = 0;
    CData/*0:0*/ __VdlySet__flipping_bit__v67;
    __VdlySet__flipping_bit__v67 = 0;
    // Body
    __Vdly__rellenar_fallos__DOT__barrido_0s__DOT__addr_counter 
        = vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__addr_counter;
    __Vdly__rellenar_fallos__DOT__barrido_1s__DOT__addr_counter 
        = vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__addr_counter;
    __Vdly__addr_mechanism = vlSelf->__PVT__addr_mechanism;
    __VdlySet__flipping_bit__v0 = 0U;
    __VdlySet__flipping_bit__v64 = 0U;
    __VdlySet__flipping_bit__v65 = 0U;
    __VdlySet__flipping_bit__v66 = 0U;
    __VdlySet__flipping_bit__v67 = 0U;
    __VdlySet__patching_bit__v0 = 0U;
    __VdlySet__patching_bit__v64 = 0U;
    __VdlySet__patching_bit__v65 = 0U;
    if (vlSymsp->TOP.reset) {
        __Vdly__rellenar_fallos__DOT__barrido_0s__DOT__addr_counter = 0U;
        __Vdly__rellenar_fallos__DOT__barrido_1s__DOT__addr_counter = 0U;
        __Vdly__addr_mechanism = 0U;
        __VdlySet__flipping_bit__v0 = 1U;
        __VdlySet__patching_bit__v0 = 1U;
        vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__current_state = 0U;
        vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__current_state = 0U;
    } else {
        if ((((1U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__current_state)) 
              & (1U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__next_state))) 
             | ((2U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__current_state)) 
                & (2U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__next_state))))) {
            __Vdly__rellenar_fallos__DOT__barrido_0s__DOT__addr_counter 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__addr_counter)));
        } else if (((1U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__current_state)) 
                    & (2U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__next_state)))) {
            __Vdly__rellenar_fallos__DOT__barrido_0s__DOT__addr_counter = 0U;
        } else if ((0U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__current_state))) {
            __Vdly__rellenar_fallos__DOT__barrido_0s__DOT__addr_counter = 0U;
        }
        if ((((1U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__current_state)) 
              & (1U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__next_state))) 
             | ((2U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__current_state)) 
                & (2U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__next_state))))) {
            __Vdly__rellenar_fallos__DOT__barrido_1s__DOT__addr_counter 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__addr_counter)));
        } else if (((1U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__current_state)) 
                    & (2U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__next_state)))) {
            __Vdly__rellenar_fallos__DOT__barrido_1s__DOT__addr_counter = 0U;
        } else if ((0U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__current_state))) {
            __Vdly__rellenar_fallos__DOT__barrido_1s__DOT__addr_counter = 0U;
        }
        if (vlSelf->__PVT__all_done) {
            if (vlSymsp->TOP.start_reading) {
                __Vdly__addr_mechanism = ((0x40U > 
                                           ((IData)(4U) 
                                            + (IData)(vlSelf->__PVT__addr_mechanism)))
                                           ? (0x7fU 
                                              & ((IData)(4U) 
                                                 + (IData)(vlSelf->__PVT__addr_mechanism)))
                                           : 0U);
            }
        } else {
            __Vdly__addr_mechanism = 0U;
        }
        if (((1U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__current_state)) 
             & (2U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__current_state)))) {
            if ((2U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__error_type1))) {
                __VdlyDim0__flipping_bit__v64 = vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__addr_counter;
                __VdlySet__flipping_bit__v64 = 1U;
                __VdlyDim0__patching_bit__v64 = vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__addr_counter;
                __VdlySet__patching_bit__v64 = 1U;
            } else if ((1U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__error_type1))) {
                if ((1U & (~ vlSelf->__PVT__patching_bit
                           [vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__addr_counter]))) {
                    __VdlyDim0__flipping_bit__v65 = vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__addr_counter;
                    __VdlySet__flipping_bit__v65 = 1U;
                }
            }
        } else if (((2U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__current_state)) 
                    & (2U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__current_state)))) {
            if ((2U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__error_type0))) {
                __VdlyDim0__flipping_bit__v66 = vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__addr_counter;
                __VdlySet__flipping_bit__v66 = 1U;
                __VdlyDim0__patching_bit__v65 = vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__addr_counter;
                __VdlySet__patching_bit__v65 = 1U;
            } else if ((1U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__error_type0))) {
                if ((1U & (~ vlSelf->__PVT__patching_bit
                           [vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__addr_counter]))) {
                    __VdlyDim0__flipping_bit__v67 = vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__addr_counter;
                    __VdlySet__flipping_bit__v67 = 1U;
                }
            }
        }
        vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__current_state 
            = vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__next_state;
        vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__current_state 
            = vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__next_state;
    }
    vlSelf->__PVT__addr_mechanism = __Vdly__addr_mechanism;
    if (__VdlySet__flipping_bit__v0) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelf->__PVT__flipping_bit[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
    if (__VdlySet__flipping_bit__v64) {
        vlSelf->__PVT__flipping_bit[__VdlyDim0__flipping_bit__v64] = 0U;
    }
    if (__VdlySet__flipping_bit__v65) {
        vlSelf->__PVT__flipping_bit[__VdlyDim0__flipping_bit__v65] = 1U;
    }
    if (__VdlySet__flipping_bit__v66) {
        vlSelf->__PVT__flipping_bit[__VdlyDim0__flipping_bit__v66] = 0U;
    }
    if (__VdlySet__flipping_bit__v67) {
        vlSelf->__PVT__flipping_bit[__VdlyDim0__flipping_bit__v67] = 1U;
    }
    vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__addr_counter 
        = __Vdly__rellenar_fallos__DOT__barrido_1s__DOT__addr_counter;
    vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__addr_counter 
        = __Vdly__rellenar_fallos__DOT__barrido_0s__DOT__addr_counter;
    if (__VdlySet__patching_bit__v0) {
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelf->__PVT__patching_bit[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
    }
    if (__VdlySet__patching_bit__v64) {
        vlSelf->__PVT__patching_bit[__VdlyDim0__patching_bit__v64] = 1U;
    }
    if (__VdlySet__patching_bit__v65) {
        vlSelf->__PVT__patching_bit[__VdlyDim0__patching_bit__v65] = 1U;
    }
    vlSelf->__PVT__all_done = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                               && (3U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__next_state)));
    __PVT__unnamedblk1__DOT__cf = (vlSelf->__PVT__flipping_bit
                                   [0U] ? 1U : 0U);
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [1U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [2U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [3U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [4U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [5U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [6U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [7U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [8U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [9U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0xaU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0xbU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0xcU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0xdU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0xeU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0xfU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x10U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x11U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x12U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x13U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x14U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x15U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x16U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x17U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x18U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x19U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x1aU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x1bU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x1cU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x1dU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x1eU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x1fU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x20U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x21U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x22U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x23U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x24U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x25U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x26U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x27U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x28U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x29U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x2aU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x2bU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x2cU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x2dU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x2eU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x2fU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x30U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x31U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x32U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x33U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x34U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x35U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x36U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x37U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x38U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x39U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x3aU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x3bU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x3cU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x3dU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x3eU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cf = (__PVT__unnamedblk1__DOT__cf 
                                   + (vlSelf->__PVT__flipping_bit
                                      [0x3fU] ? 1U : 0U));
    vlSelf->count_f = __PVT__unnamedblk1__DOT__cf;
    IData/*31:0*/ __Vilp3;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0x3fU)) {
        vlSelf->f[__Vilp3] = vlSelf->__PVT__flipping_bit
            [__Vilp3];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    __PVT__unnamedblk1__DOT__cp = (vlSelf->__PVT__patching_bit
                                   [0U] ? 1U : 0U);
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [1U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [2U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [3U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [4U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [5U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [6U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [7U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [8U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [9U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0xaU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0xbU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0xcU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0xdU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0xeU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0xfU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x10U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x11U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x12U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x13U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x14U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x15U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x16U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x17U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x18U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x19U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x1aU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x1bU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x1cU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x1dU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x1eU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x1fU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x20U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x21U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x22U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x23U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x24U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x25U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x26U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x27U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x28U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x29U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x2aU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x2bU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x2cU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x2dU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x2eU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x2fU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x30U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x31U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x32U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x33U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x34U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x35U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x36U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x37U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x38U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x39U] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x3aU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x3bU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x3cU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x3dU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x3eU] ? 1U : 0U));
    __PVT__unnamedblk1__DOT__cp = (__PVT__unnamedblk1__DOT__cp 
                                   + (vlSelf->__PVT__patching_bit
                                      [0x3fU] ? 1U : 0U));
    vlSelf->count_p = __PVT__unnamedblk1__DOT__cp;
    IData/*31:0*/ __Vilp4;
    __Vilp4 = 0U;
    while ((__Vilp4 <= 0x3fU)) {
        vlSelf->p[__Vilp4] = vlSelf->__PVT__patching_bit
            [__Vilp4];
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    vlSelf->__PVT__f_mechanism[0U] = vlSelf->f[(0x3fU 
                                                & (IData)(vlSelf->__PVT__addr_mechanism))];
    vlSelf->__PVT__f_mechanism[1U] = vlSelf->f[(0x3fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__addr_mechanism)))];
    vlSelf->__PVT__f_mechanism[2U] = vlSelf->f[(0x3fU 
                                                & ((IData)(2U) 
                                                   + (IData)(vlSelf->__PVT__addr_mechanism)))];
    vlSelf->__PVT__f_mechanism[3U] = vlSelf->f[(0x3fU 
                                                & ((IData)(3U) 
                                                   + (IData)(vlSelf->__PVT__addr_mechanism)))];
    vlSelf->__PVT__p_mechanism[0U] = vlSelf->p[(0x3fU 
                                                & (IData)(vlSelf->__PVT__addr_mechanism))];
    vlSelf->__PVT__p_mechanism[1U] = vlSelf->p[(0x3fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__addr_mechanism)))];
    vlSelf->__PVT__p_mechanism[2U] = vlSelf->p[(0x3fU 
                                                & ((IData)(2U) 
                                                   + (IData)(vlSelf->__PVT__addr_mechanism)))];
    vlSelf->__PVT__p_mechanism[3U] = vlSelf->p[(0x3fU 
                                                & ((IData)(3U) 
                                                   + (IData)(vlSelf->__PVT__addr_mechanism)))];
    vlSelf->f_m[3U] = vlSelf->__PVT__f_mechanism[3U];
    vlSelf->f_m[2U] = vlSelf->__PVT__f_mechanism[2U];
    vlSelf->f_m[1U] = vlSelf->__PVT__f_mechanism[1U];
    vlSelf->f_m[0U] = vlSelf->__PVT__f_mechanism[0U];
    vlSelf->__PVT__rellenar_fallos__DOT__write_enable1 = 0U;
    vlSelf->__PVT__rellenar_fallos__DOT__done_read1 = 0U;
    if ((2U & (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__current_state))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__current_state)))) {
            vlSelf->__PVT__rellenar_fallos__DOT__write_enable1 = 0U;
            if ((0x3fU == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__addr_counter))) {
                vlSelf->__PVT__rellenar_fallos__DOT__done_read1 = 1U;
            }
        }
    } else if ((1U & (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__current_state))) {
        vlSelf->__PVT__rellenar_fallos__DOT__write_enable1 = 1U;
    }
    vlSelf->__PVT__rellenar_fallos__DOT__write_enable0 = 0U;
    vlSelf->__PVT__rellenar_fallos__DOT__done_read0 = 0U;
    if ((2U & (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__current_state))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__current_state)))) {
            vlSelf->__PVT__rellenar_fallos__DOT__write_enable0 = 0U;
            if ((0x3fU == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__addr_counter))) {
                vlSelf->__PVT__rellenar_fallos__DOT__done_read0 = 1U;
            }
        }
    } else if ((1U & (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__current_state))) {
        vlSelf->__PVT__rellenar_fallos__DOT__write_enable0 = 1U;
    }
    vlSelf->p_m[3U] = vlSelf->__PVT__p_mechanism[3U];
    vlSelf->p_m[2U] = vlSelf->__PVT__p_mechanism[2U];
    vlSelf->p_m[1U] = vlSelf->__PVT__p_mechanism[1U];
    vlSelf->p_m[0U] = vlSelf->__PVT__p_mechanism[0U];
    vlSymsp->TOP__final_integration__test_mechanisms.__PVT__p[3U] 
        = vlSelf->__PVT__p_mechanism[3U];
    vlSymsp->TOP__final_integration__test_mechanisms.__PVT__p[2U] 
        = vlSelf->__PVT__p_mechanism[2U];
    vlSymsp->TOP__final_integration__test_mechanisms.__PVT__p[1U] 
        = vlSelf->__PVT__p_mechanism[1U];
    vlSymsp->TOP__final_integration__test_mechanisms.__PVT__p[0U] 
        = vlSelf->__PVT__p_mechanism[0U];
}

VL_INLINE_OPT void Vfinal_integration_final_integration___nba_sequent__TOP__final_integration__1(Vfinal_integration_final_integration* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vfinal_integration_final_integration___nba_sequent__TOP__final_integration__1\n"); );
    // Body
    vlSymsp->TOP__final_integration__test_mechanisms.__PVT__f[3U] 
        = vlSelf->__PVT__f_mechanism[3U];
    vlSymsp->TOP__final_integration__test_mechanisms.__PVT__f[2U] 
        = vlSelf->__PVT__f_mechanism[2U];
    vlSymsp->TOP__final_integration__test_mechanisms.__PVT__f[1U] 
        = vlSelf->__PVT__f_mechanism[1U];
    vlSymsp->TOP__final_integration__test_mechanisms.__PVT__f[0U] 
        = vlSelf->__PVT__f_mechanism[0U];
    vlSelf->flipped_out[3U] = vlSymsp->TOP__final_integration__test_mechanisms.__PVT__flipped_out
        [3U];
    vlSelf->flipped_out[2U] = vlSymsp->TOP__final_integration__test_mechanisms.__PVT__flipped_out
        [2U];
    vlSelf->flipped_out[1U] = vlSymsp->TOP__final_integration__test_mechanisms.__PVT__flipped_out
        [1U];
    vlSelf->flipped_out[0U] = vlSymsp->TOP__final_integration__test_mechanisms.__PVT__flipped_out
        [0U];
}

VL_INLINE_OPT void Vfinal_integration_final_integration___nba_sequent__TOP__final_integration__3(Vfinal_integration_final_integration* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vfinal_integration_final_integration___nba_sequent__TOP__final_integration__3\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->__PVT__rellenar_fallos__DOT__current_state 
        = ((IData)(vlSymsp->TOP.reset) ? 0U : (IData)(vlSelf->__PVT__rellenar_fallos__DOT__next_state));
    vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__next_state 
        = ((2U & (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__current_state))
            ? ((1U & (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__current_state))
                ? ((1U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__current_state))
                    ? 3U : 0U) : ((0x3fU == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__addr_counter))
                                   ? 3U : 2U)) : ((1U 
                                                   & (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__current_state))
                                                   ? 
                                                  ((0x3fU 
                                                    == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__addr_counter))
                                                    ? 2U
                                                    : 1U)
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__current_state))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__next_state 
        = ((2U & (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__current_state))
            ? ((1U & (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__current_state))
                ? ((2U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__current_state))
                    ? 3U : 0U) : ((0x3fU == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__addr_counter))
                                   ? 3U : 2U)) : ((1U 
                                                   & (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__current_state))
                                                   ? 
                                                  ((0x3fU 
                                                    == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__addr_counter))
                                                    ? 2U
                                                    : 1U)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__current_state))
                                                    ? 1U
                                                    : 0U)));
    if ((1U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__current_state))) {
        vlSelf->__PVT__rellenar_fallos__DOT__mem_addr 
            = vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__addr_counter;
        vlSelf->__PVT__rellenar_fallos__DOT__mem_write_enable 
            = vlSelf->__PVT__rellenar_fallos__DOT__write_enable1;
    } else {
        vlSelf->__PVT__rellenar_fallos__DOT__mem_addr 
            = ((2U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__current_state))
                ? (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__addr_counter)
                : 0U);
        vlSelf->__PVT__rellenar_fallos__DOT__mem_write_enable 
            = ((2U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__current_state)) 
               && (IData)(vlSelf->__PVT__rellenar_fallos__DOT__write_enable0));
    }
    __Vtableidx1 = (((IData)(vlSymsp->TOP.start_scan) 
                     << 6U) | (((IData)(vlSelf->__PVT__rellenar_fallos__DOT__done_read1) 
                                << 5U) | (((IData)(vlSelf->__PVT__rellenar_fallos__DOT__done_read0) 
                                           << 4U) | 
                                          (((IData)(vlSymsp->TOP.reset) 
                                            << 3U) 
                                           | (IData)(vlSelf->__PVT__rellenar_fallos__DOT__current_state)))));
    vlSelf->__PVT__rellenar_fallos__DOT__next_state 
        = Vfinal_integration__ConstPool__TABLE_h0d2d7aa8_0
        [__Vtableidx1];
}
