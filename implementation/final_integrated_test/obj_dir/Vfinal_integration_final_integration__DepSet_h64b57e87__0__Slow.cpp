// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfinal_integration.h for the primary calling header

#include "Vfinal_integration__pch.h"
#include "Vfinal_integration_final_integration.h"

VL_ATTR_COLD void Vfinal_integration_final_integration___eval_initial__TOP__final_integration(Vfinal_integration_final_integration* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vfinal_integration_final_integration___eval_initial__TOP__final_integration\n"); );
    // Init
    IData/*31:0*/ rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i;
    rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i = 0;
    // Body
    (void)VL_URANDOM_SEEDED_II(0xc0ffeeU);
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x3fU)) {
        vlSelf->__PVT__rellenar_fallos__DOT__memory[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i = 0U;
    while (VL_GTES_III(32, 0x3fU, rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)) {
        vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask[(0x3fU 
                                                          & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] = 0U;
        vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask[(0x3fU 
                                                          & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] = 0U;
        if ((0x493e0U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (1U | vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (1U | vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        if ((0x493e0U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (2U | vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (2U | vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        if ((0x493e0U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (4U | vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (4U | vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        if ((0x493e0U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (8U | vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (8U | vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        if ((0x493e0U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x10U | vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x10U | vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        if ((0x493e0U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x20U | vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x20U | vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        if ((0x493e0U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x40U | vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x40U | vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        if ((0x493e0U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x80U | vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x80U | vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        if ((0x493e0U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x100U | vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x100U | vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        if ((0x493e0U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x200U | vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x200U | vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        if ((0x493e0U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x400U | vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x400U | vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        if ((0x493e0U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x800U | vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x800U | vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        if ((0x493e0U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x1000U | vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x1000U | vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        if ((0x493e0U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x2000U | vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x2000U | vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        if ((0x493e0U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x4000U | vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x4000U | vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        if ((0x493e0U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x8000U | vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask[(0x3fU 
                                                                  & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x8000U | vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask
                       [(0x3fU & rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i 
            = ((IData)(1U) + rellenar_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i);
    }
}

VL_ATTR_COLD void Vfinal_integration_final_integration___eval_final__TOP__final_integration(Vfinal_integration_final_integration* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vfinal_integration_final_integration___eval_final__TOP__final_integration\n"); );
    // Init
    IData/*31:0*/ __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total;
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total = 0;
    IData/*31:0*/ __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only;
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only = 0;
    IData/*31:0*/ __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only;
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only = 0;
    IData/*31:0*/ __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__err_words;
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__err_words = 0;
    double __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__porcentaje_total;
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__porcentaje_total = 0;
    double __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__porcentaje_ones;
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__porcentaje_ones = 0;
    double __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__porcentaje_zeros;
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__porcentaje_zeros = 0;
    CData/*0:0*/ __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi;
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi = 0;
    CData/*0:0*/ __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi;
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi = 0;
    // Body
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total = 0U;
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only = 0U;
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only = 0U;
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x3fU];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x3fU];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x3eU];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x3eU];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x3dU];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x3dU];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x3cU];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x3cU];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x3bU];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x3bU];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x3aU];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x3aU];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x39U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x39U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x38U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x38U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x37U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x37U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x36U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x36U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x35U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x35U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x34U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x34U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x33U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x33U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x32U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x32U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x31U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x31U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x30U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x30U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x2fU];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x2fU];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x2eU];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x2eU];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x2dU];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x2dU];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x2cU];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x2cU];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x2bU];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x2bU];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x2aU];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x2aU];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x29U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x29U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x28U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x28U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x27U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x27U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x26U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x26U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x25U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x25U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x24U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x24U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x23U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x23U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x22U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x22U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x21U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x21U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x20U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x20U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x1fU];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x1fU];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x1eU];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x1eU];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x1dU];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x1dU];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x1cU];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x1cU];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x1bU];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x1bU];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x1aU];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x1aU];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x19U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x19U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x18U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x18U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x17U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x17U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x16U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x16U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x15U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x15U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x14U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x14U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x13U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x13U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x12U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x12U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x11U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x11U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0x10U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0x10U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0xfU];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0xfU];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0xeU];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0xeU];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0xdU];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0xdU];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0xcU];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0xcU];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0xbU];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0xbU];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0xaU];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0xaU];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[9U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[9U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[8U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[8U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[7U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[7U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[6U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[6U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[5U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[5U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[4U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[4U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[3U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[3U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[2U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[2U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[1U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[1U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
        = vlSelf->__PVT__flipping_bit[0U];
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
        = vlSelf->__PVT__patching_bit[0U];
    if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
        if ((1U & (~ (IData)(__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
            __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only 
                = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
        }
    } else if (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only);
    } else {
        __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total 
            = ((IData)(1U) + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total);
    }
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__err_words 
        = (__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only 
           + __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only);
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__porcentaje_total 
        = ((100.0 * VL_ITOR_D_I(32, __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__err_words)) 
           / 64.0);
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__porcentaje_ones 
        = ((100.0 * VL_ITOR_D_I(32, __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only)) 
           / 64.0);
    __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__porcentaje_zeros 
        = ((100.0 * VL_ITOR_D_I(32, __PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only)) 
           / 64.0);
    VL_WRITEF_NX("\n================= RESULTADOS (p/f) =================\nN_WORDS        : 64\nOK             : %0#\nBit f (01)    : %0#\nBit p (10)    : %0#\n%%ERR total    : %.2f%%\n  - %% Bit f  : %.2f%%\n  - %% Bit p  : %.6f%%\n====================================================\n\n",0,
                 32,__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ok_total,
                 32,__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__ones_only,
                 32,__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__zeros_only,
                 64,__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__porcentaje_total,
                 64,__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__porcentaje_ones,
                 64,__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__porcentaje_zeros);
}

VL_ATTR_COLD void Vfinal_integration_final_integration___ctor_var_reset(Vfinal_integration_final_integration* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vfinal_integration_final_integration___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->activation_org[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->activation_cache[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->start_reading = VL_RAND_RESET_I(1);
    vlSelf->start_scan = VL_RAND_RESET_I(1);
    vlSelf->scan_done = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->f[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->p[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->flipped_out[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->patched_out[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->activation_final[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->f_m[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->p_m[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->count_f = 0;
    vlSelf->count_p = 0;
    vlSelf->__PVT__all_done = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__flipping_bit[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__patching_bit[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__addr_mechanism = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__f_mechanism[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__p_mechanism[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__rellenar_fallos__DOT__mem_write_enable = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rellenar_fallos__DOT__mem_addr = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__rellenar_fallos__DOT__memory[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__PVT__rellenar_fallos__DOT__done_read1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rellenar_fallos__DOT__write_enable1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rellenar_fallos__DOT__error_type1 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__rellenar_fallos__DOT__done_read0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rellenar_fallos__DOT__write_enable0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rellenar_fallos__DOT__error_type0 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__rellenar_fallos__DOT__current_state = VL_RAND_RESET_I(3);
    vlSelf->__PVT__rellenar_fallos__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->__PVT__rellenar_fallos__DOT__unnamedblk3__DOT__keep_mask = VL_RAND_RESET_I(16);
    vlSelf->__PVT__rellenar_fallos__DOT__unnamedblk3__DOT__forced1 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__addr_counter = VL_RAND_RESET_I(6);
    vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__addr_counter = VL_RAND_RESET_I(6);
}
