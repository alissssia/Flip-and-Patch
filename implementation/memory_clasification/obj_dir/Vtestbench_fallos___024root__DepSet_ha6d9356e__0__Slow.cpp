// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench_fallos.h for the primary calling header

#include "Vtestbench_fallos__pch.h"
#include "Vtestbench_fallos___024root.h"

VL_ATTR_COLD void Vtestbench_fallos___024root___eval_static(Vtestbench_fallos___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_fallos__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_fallos___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtestbench_fallos___024root___eval_initial__TOP(Vtestbench_fallos___024root* vlSelf);

VL_ATTR_COLD void Vtestbench_fallos___024root___eval_initial(Vtestbench_fallos___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_fallos__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_fallos___024root___eval_initial\n"); );
    // Body
    Vtestbench_fallos___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
}

VL_ATTR_COLD void Vtestbench_fallos___024root___eval_initial__TOP(Vtestbench_fallos___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_fallos__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_fallos___024root___eval_initial__TOP\n"); );
    // Init
    IData/*31:0*/ testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_1__DOT__i;
    testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_1__DOT__i = 0;
    IData/*31:0*/ testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i;
    testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i = 0;
    // Body
    (void)VL_URANDOM_SEEDED_II(0xc0ffeeU);
    testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_1__DOT__i = 0U;
    while (VL_GTES_III(32, 0xfffffU, testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_1__DOT__i)) {
        vlSelf->testbench_fallos__DOT__memory[(0xfffffU 
                                               & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_1__DOT__i)] = 0U;
        testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_1__DOT__i 
            = ((IData)(1U) + testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_1__DOT__i);
    }
    testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i = 0U;
    while (VL_GTES_III(32, 0xfffffU, testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)) {
        vlSelf->testbench_fallos__DOT__stuck0_mask[(0xfffffU 
                                                    & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] = 0U;
        vlSelf->testbench_fallos__DOT__stuck1_mask[(0xfffffU 
                                                    & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] = 0U;
        if ((0x239U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->testbench_fallos__DOT__stuck0_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (1U | vlSelf->testbench_fallos__DOT__stuck0_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->testbench_fallos__DOT__stuck1_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (1U | vlSelf->testbench_fallos__DOT__stuck1_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        if ((0x239U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->testbench_fallos__DOT__stuck0_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (2U | vlSelf->testbench_fallos__DOT__stuck0_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->testbench_fallos__DOT__stuck1_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (2U | vlSelf->testbench_fallos__DOT__stuck1_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        if ((0x239U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->testbench_fallos__DOT__stuck0_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (4U | vlSelf->testbench_fallos__DOT__stuck0_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->testbench_fallos__DOT__stuck1_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (4U | vlSelf->testbench_fallos__DOT__stuck1_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        if ((0x239U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->testbench_fallos__DOT__stuck0_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (8U | vlSelf->testbench_fallos__DOT__stuck0_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->testbench_fallos__DOT__stuck1_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (8U | vlSelf->testbench_fallos__DOT__stuck1_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        if ((0x239U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->testbench_fallos__DOT__stuck0_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x10U | vlSelf->testbench_fallos__DOT__stuck0_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->testbench_fallos__DOT__stuck1_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x10U | vlSelf->testbench_fallos__DOT__stuck1_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        if ((0x239U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->testbench_fallos__DOT__stuck0_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x20U | vlSelf->testbench_fallos__DOT__stuck0_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->testbench_fallos__DOT__stuck1_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x20U | vlSelf->testbench_fallos__DOT__stuck1_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        if ((0x239U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->testbench_fallos__DOT__stuck0_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x40U | vlSelf->testbench_fallos__DOT__stuck0_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->testbench_fallos__DOT__stuck1_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x40U | vlSelf->testbench_fallos__DOT__stuck1_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        if ((0x239U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->testbench_fallos__DOT__stuck0_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x80U | vlSelf->testbench_fallos__DOT__stuck0_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->testbench_fallos__DOT__stuck1_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x80U | vlSelf->testbench_fallos__DOT__stuck1_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        if ((0x239U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->testbench_fallos__DOT__stuck0_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x100U | vlSelf->testbench_fallos__DOT__stuck0_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->testbench_fallos__DOT__stuck1_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x100U | vlSelf->testbench_fallos__DOT__stuck1_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        if ((0x239U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->testbench_fallos__DOT__stuck0_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x200U | vlSelf->testbench_fallos__DOT__stuck0_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->testbench_fallos__DOT__stuck1_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x200U | vlSelf->testbench_fallos__DOT__stuck1_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        if ((0x239U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->testbench_fallos__DOT__stuck0_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x400U | vlSelf->testbench_fallos__DOT__stuck0_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->testbench_fallos__DOT__stuck1_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x400U | vlSelf->testbench_fallos__DOT__stuck1_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        if ((0x239U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->testbench_fallos__DOT__stuck0_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x800U | vlSelf->testbench_fallos__DOT__stuck0_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->testbench_fallos__DOT__stuck1_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x800U | vlSelf->testbench_fallos__DOT__stuck1_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        if ((0x239U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->testbench_fallos__DOT__stuck0_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x1000U | vlSelf->testbench_fallos__DOT__stuck0_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->testbench_fallos__DOT__stuck1_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x1000U | vlSelf->testbench_fallos__DOT__stuck1_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        if ((0x239U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->testbench_fallos__DOT__stuck0_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x2000U | vlSelf->testbench_fallos__DOT__stuck0_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->testbench_fallos__DOT__stuck1_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x2000U | vlSelf->testbench_fallos__DOT__stuck1_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        if ((0x239U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->testbench_fallos__DOT__stuck0_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x4000U | vlSelf->testbench_fallos__DOT__stuck0_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->testbench_fallos__DOT__stuck1_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x4000U | vlSelf->testbench_fallos__DOT__stuck1_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        if ((0x239U > VL_URANDOM_RANGE_I(0U, 0xf423fU))) {
            if ((0U == VL_URANDOM_RANGE_I(0U, 1U))) {
                vlSelf->testbench_fallos__DOT__stuck0_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x8000U | vlSelf->testbench_fallos__DOT__stuck0_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            } else {
                vlSelf->testbench_fallos__DOT__stuck1_mask[(0xfffffU 
                                                            & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] 
                    = (0x8000U | vlSelf->testbench_fallos__DOT__stuck1_mask
                       [(0xfffffU & testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i)]);
            }
        }
        testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i 
            = ((IData)(1U) + testbench_fallos__DOT__unnamedblk1__DOT__unnamedblk2_2__DOT__i);
    }
}

VL_ATTR_COLD void Vtestbench_fallos___024root___eval_final__TOP(Vtestbench_fallos___024root* vlSelf);

VL_ATTR_COLD void Vtestbench_fallos___024root___eval_final(Vtestbench_fallos___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_fallos__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_fallos___024root___eval_final\n"); );
    // Body
    Vtestbench_fallos___024root___eval_final__TOP(vlSelf);
}

VL_ATTR_COLD void Vtestbench_fallos___024root___eval_final__TOP(Vtestbench_fallos___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_fallos__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_fallos___024root___eval_final__TOP\n"); );
    // Init
    IData/*31:0*/ testbench_fallos__DOT__unnamedblk5__DOT__ok_total;
    testbench_fallos__DOT__unnamedblk5__DOT__ok_total = 0;
    IData/*31:0*/ testbench_fallos__DOT__unnamedblk5__DOT__ones_only;
    testbench_fallos__DOT__unnamedblk5__DOT__ones_only = 0;
    IData/*31:0*/ testbench_fallos__DOT__unnamedblk5__DOT__zeros_only;
    testbench_fallos__DOT__unnamedblk5__DOT__zeros_only = 0;
    IData/*31:0*/ testbench_fallos__DOT__unnamedblk5__DOT__err_words;
    testbench_fallos__DOT__unnamedblk5__DOT__err_words = 0;
    double testbench_fallos__DOT__unnamedblk5__DOT__porcentaje_total;
    testbench_fallos__DOT__unnamedblk5__DOT__porcentaje_total = 0;
    double testbench_fallos__DOT__unnamedblk5__DOT__porcentaje_ones;
    testbench_fallos__DOT__unnamedblk5__DOT__porcentaje_ones = 0;
    double testbench_fallos__DOT__unnamedblk5__DOT__porcentaje_zeros;
    testbench_fallos__DOT__unnamedblk5__DOT__porcentaje_zeros = 0;
    IData/*31:0*/ testbench_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__i;
    testbench_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__i = 0;
    // Body
    testbench_fallos__DOT__unnamedblk5__DOT__ok_total = 0U;
    testbench_fallos__DOT__unnamedblk5__DOT__ones_only = 0U;
    testbench_fallos__DOT__unnamedblk5__DOT__zeros_only = 0U;
    testbench_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__i = 0U;
    while (VL_GTES_III(32, 0xfffffU, testbench_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__i)) {
        vlSelf->testbench_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi 
            = vlSelf->flipping_bit[(0xfffffU & testbench_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__i)];
        vlSelf->testbench_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi 
            = vlSelf->patching_bit[(0xfffffU & testbench_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__i)];
        if (vlSelf->testbench_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi) {
            if ((1U & (~ (IData)(vlSelf->testbench_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi)))) {
                testbench_fallos__DOT__unnamedblk5__DOT__zeros_only 
                    = ((IData)(1U) + testbench_fallos__DOT__unnamedblk5__DOT__zeros_only);
            }
        } else if (vlSelf->testbench_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi) {
            testbench_fallos__DOT__unnamedblk5__DOT__ones_only 
                = ((IData)(1U) + testbench_fallos__DOT__unnamedblk5__DOT__ones_only);
        } else {
            testbench_fallos__DOT__unnamedblk5__DOT__ok_total 
                = ((IData)(1U) + testbench_fallos__DOT__unnamedblk5__DOT__ok_total);
        }
        testbench_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__i 
            = ((IData)(1U) + testbench_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__i);
    }
    testbench_fallos__DOT__unnamedblk5__DOT__err_words 
        = (testbench_fallos__DOT__unnamedblk5__DOT__ones_only 
           + testbench_fallos__DOT__unnamedblk5__DOT__zeros_only);
    testbench_fallos__DOT__unnamedblk5__DOT__porcentaje_total 
        = ((100.0 * VL_ITOR_D_I(32, testbench_fallos__DOT__unnamedblk5__DOT__err_words)) 
           / 1.04857600000000000e+06);
    testbench_fallos__DOT__unnamedblk5__DOT__porcentaje_ones 
        = ((100.0 * VL_ITOR_D_I(32, testbench_fallos__DOT__unnamedblk5__DOT__ones_only)) 
           / 1.04857600000000000e+06);
    testbench_fallos__DOT__unnamedblk5__DOT__porcentaje_zeros 
        = ((100.0 * VL_ITOR_D_I(32, testbench_fallos__DOT__unnamedblk5__DOT__zeros_only)) 
           / 1.04857600000000000e+06);
    VL_WRITEF_NX("\n================= RESULTADOS (p/f) =================\nN_WORDS        : 1048576\nOK             : %0#\nBit f (01)    : %0#\nBit p (10)    : %0#\n%%ERR total    : %.2f%%\n  - %% Bit f  : %.2f%%\n  - %% Bit p  : %.6f%%\n====================================================\n\n",0,
                 32,testbench_fallos__DOT__unnamedblk5__DOT__ok_total,
                 32,testbench_fallos__DOT__unnamedblk5__DOT__ones_only,
                 32,testbench_fallos__DOT__unnamedblk5__DOT__zeros_only,
                 64,testbench_fallos__DOT__unnamedblk5__DOT__porcentaje_total,
                 64,testbench_fallos__DOT__unnamedblk5__DOT__porcentaje_ones,
                 64,testbench_fallos__DOT__unnamedblk5__DOT__porcentaje_zeros);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench_fallos___024root___dump_triggers__stl(Vtestbench_fallos___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtestbench_fallos___024root___eval_phase__stl(Vtestbench_fallos___024root* vlSelf);

VL_ATTR_COLD void Vtestbench_fallos___024root___eval_settle(Vtestbench_fallos___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_fallos__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_fallos___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtestbench_fallos___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("testbench_fallos.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtestbench_fallos___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench_fallos___024root___dump_triggers__stl(Vtestbench_fallos___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_fallos__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_fallos___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestbench_fallos___024root___stl_sequent__TOP__0(Vtestbench_fallos___024root* vlSelf);

VL_ATTR_COLD void Vtestbench_fallos___024root___eval_stl(Vtestbench_fallos___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_fallos__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_fallos___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtestbench_fallos___024root___stl_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*2:0*/, 128> Vtestbench_fallos__ConstPool__TABLE_h0d2d7aa8_0;

VL_ATTR_COLD void Vtestbench_fallos___024root___stl_sequent__TOP__0(Vtestbench_fallos___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_fallos__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_fallos___024root___stl_sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ testbench_fallos__DOT__barrido_1s__DOT__not_expected_value;
    testbench_fallos__DOT__barrido_1s__DOT__not_expected_value = 0;
    CData/*0:0*/ testbench_fallos__DOT__barrido_0s__DOT__has_high_order;
    testbench_fallos__DOT__barrido_0s__DOT__has_high_order = 0;
    CData/*0:0*/ testbench_fallos__DOT__barrido_0s__DOT__has_low_order;
    testbench_fallos__DOT__barrido_0s__DOT__has_low_order = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->testbench_fallos__DOT__write_enable1 = 0U;
    vlSelf->testbench_fallos__DOT__write_enable0 = 0U;
    vlSelf->testbench_fallos__DOT__done_read1 = 0U;
    if ((2U & (IData)(vlSelf->testbench_fallos__DOT__barrido_1s__DOT__current_state))) {
        vlSelf->testbench_fallos__DOT__barrido_1s__DOT__next_state 
            = ((1U & (IData)(vlSelf->testbench_fallos__DOT__barrido_1s__DOT__current_state))
                ? ((1U == (IData)(vlSelf->testbench_fallos__DOT__current_state))
                    ? 3U : 0U) : ((0xfffffU == vlSelf->testbench_fallos__DOT__barrido_1s__DOT__addr_counter)
                                   ? 3U : 2U));
        if ((1U & (~ (IData)(vlSelf->testbench_fallos__DOT__barrido_1s__DOT__current_state)))) {
            vlSelf->testbench_fallos__DOT__write_enable1 = 0U;
            if ((0xfffffU == vlSelf->testbench_fallos__DOT__barrido_1s__DOT__addr_counter)) {
                vlSelf->testbench_fallos__DOT__done_read1 = 1U;
            }
        }
    } else if ((1U & (IData)(vlSelf->testbench_fallos__DOT__barrido_1s__DOT__current_state))) {
        vlSelf->testbench_fallos__DOT__barrido_1s__DOT__next_state 
            = ((0xfffffU == vlSelf->testbench_fallos__DOT__barrido_1s__DOT__addr_counter)
                ? 2U : 1U);
        vlSelf->testbench_fallos__DOT__write_enable1 = 1U;
    } else {
        vlSelf->testbench_fallos__DOT__barrido_1s__DOT__next_state 
            = ((1U == (IData)(vlSelf->testbench_fallos__DOT__current_state))
                ? 1U : 0U);
    }
    vlSelf->testbench_fallos__DOT__done_read0 = 0U;
    if ((2U & (IData)(vlSelf->testbench_fallos__DOT__barrido_0s__DOT__current_state))) {
        vlSelf->testbench_fallos__DOT__barrido_0s__DOT__next_state 
            = ((1U & (IData)(vlSelf->testbench_fallos__DOT__barrido_0s__DOT__current_state))
                ? ((2U == (IData)(vlSelf->testbench_fallos__DOT__current_state))
                    ? 3U : 0U) : ((0xfffffU == vlSelf->testbench_fallos__DOT__barrido_0s__DOT__addr_counter)
                                   ? 3U : 2U));
        if ((1U & (~ (IData)(vlSelf->testbench_fallos__DOT__barrido_0s__DOT__current_state)))) {
            vlSelf->testbench_fallos__DOT__write_enable0 = 0U;
            if ((0xfffffU == vlSelf->testbench_fallos__DOT__barrido_0s__DOT__addr_counter)) {
                vlSelf->testbench_fallos__DOT__done_read0 = 1U;
            }
        }
    } else if ((1U & (IData)(vlSelf->testbench_fallos__DOT__barrido_0s__DOT__current_state))) {
        vlSelf->testbench_fallos__DOT__barrido_0s__DOT__next_state 
            = ((0xfffffU == vlSelf->testbench_fallos__DOT__barrido_0s__DOT__addr_counter)
                ? 2U : 1U);
        vlSelf->testbench_fallos__DOT__write_enable0 = 1U;
    } else {
        vlSelf->testbench_fallos__DOT__barrido_0s__DOT__next_state 
            = ((2U == (IData)(vlSelf->testbench_fallos__DOT__current_state))
                ? 1U : 0U);
    }
    __Vtableidx1 = (((IData)(vlSelf->start) << 6U) 
                    | (((IData)(vlSelf->testbench_fallos__DOT__done_read1) 
                        << 5U) | (((IData)(vlSelf->testbench_fallos__DOT__done_read0) 
                                   << 4U) | (((IData)(vlSelf->reset) 
                                              << 3U) 
                                             | (IData)(vlSelf->testbench_fallos__DOT__current_state)))));
    vlSelf->testbench_fallos__DOT__next_state = Vtestbench_fallos__ConstPool__TABLE_h0d2d7aa8_0
        [__Vtableidx1];
    vlSelf->testbench_fallos__DOT__mem_addr = ((1U 
                                                == (IData)(vlSelf->testbench_fallos__DOT__current_state))
                                                ? vlSelf->testbench_fallos__DOT__barrido_1s__DOT__addr_counter
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->testbench_fallos__DOT__current_state))
                                                    ? vlSelf->testbench_fallos__DOT__barrido_0s__DOT__addr_counter
                                                    : 0U));
    testbench_fallos__DOT__barrido_1s__DOT__not_expected_value 
        = (0xffffU & (~ vlSelf->testbench_fallos__DOT__memory
                      [vlSelf->testbench_fallos__DOT__mem_addr]));
    testbench_fallos__DOT__barrido_0s__DOT__has_low_order 
        = (0U != (0xffU & vlSelf->testbench_fallos__DOT__memory
                  [vlSelf->testbench_fallos__DOT__mem_addr]));
    testbench_fallos__DOT__barrido_0s__DOT__has_high_order 
        = (0U != (0xffU & (vlSelf->testbench_fallos__DOT__memory
                           [vlSelf->testbench_fallos__DOT__mem_addr] 
                           >> 8U)));
    vlSelf->testbench_fallos__DOT__error_type1 = ((
                                                   (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0xffU 
                                                                & (IData)(testbench_fallos__DOT__barrido_1s__DOT__not_expected_value))))) 
                                                   & (0U 
                                                      != 
                                                      (0xffU 
                                                       & ((IData)(testbench_fallos__DOT__barrido_1s__DOT__not_expected_value) 
                                                          >> 8U))))
                                                   ? 1U
                                                   : 
                                                  (((0U 
                                                     != 
                                                     (0xffU 
                                                      & ((IData)(testbench_fallos__DOT__barrido_1s__DOT__not_expected_value) 
                                                         >> 8U))) 
                                                    & (0U 
                                                       != 
                                                       (0xffU 
                                                        & (IData)(testbench_fallos__DOT__barrido_1s__DOT__not_expected_value))))
                                                    ? 2U
                                                    : 0U));
    vlSelf->testbench_fallos__DOT__error_type0 = ((
                                                   (~ (IData)(testbench_fallos__DOT__barrido_0s__DOT__has_low_order)) 
                                                   & (IData)(testbench_fallos__DOT__barrido_0s__DOT__has_high_order))
                                                   ? 1U
                                                   : 
                                                  (((IData)(testbench_fallos__DOT__barrido_0s__DOT__has_high_order) 
                                                    & (IData)(testbench_fallos__DOT__barrido_0s__DOT__has_low_order))
                                                    ? 2U
                                                    : 0U));
    if ((1U == (IData)(vlSelf->testbench_fallos__DOT__current_state))) {
        vlSelf->testbench_fallos__DOT__mem_write_enable 
            = vlSelf->testbench_fallos__DOT__write_enable1;
        vlSelf->rd_data = vlSelf->testbench_fallos__DOT__error_type1;
    } else {
        vlSelf->testbench_fallos__DOT__mem_write_enable 
            = ((2U == (IData)(vlSelf->testbench_fallos__DOT__current_state)) 
               && (IData)(vlSelf->testbench_fallos__DOT__write_enable0));
        vlSelf->rd_data = ((2U == (IData)(vlSelf->testbench_fallos__DOT__current_state))
                            ? (IData)(vlSelf->testbench_fallos__DOT__error_type0)
                            : 0U);
    }
}

VL_ATTR_COLD void Vtestbench_fallos___024root___eval_triggers__stl(Vtestbench_fallos___024root* vlSelf);

VL_ATTR_COLD bool Vtestbench_fallos___024root___eval_phase__stl(Vtestbench_fallos___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_fallos__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_fallos___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtestbench_fallos___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtestbench_fallos___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench_fallos___024root___dump_triggers__ico(Vtestbench_fallos___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_fallos__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_fallos___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench_fallos___024root___dump_triggers__act(Vtestbench_fallos___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_fallos__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_fallos___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench_fallos___024root___dump_triggers__nba(Vtestbench_fallos___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_fallos__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_fallos___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestbench_fallos___024root___ctor_var_reset(Vtestbench_fallos___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_fallos__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_fallos___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    vlSelf->rd_data = VL_RAND_RESET_I(2);
    vlSelf->all_done = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->flipping_bit[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->patching_bit[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->testbench_fallos__DOT__mem_write_enable = VL_RAND_RESET_I(1);
    vlSelf->testbench_fallos__DOT__mem_addr = VL_RAND_RESET_I(20);
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->testbench_fallos__DOT__memory[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->testbench_fallos__DOT__stuck0_mask[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->testbench_fallos__DOT__stuck1_mask[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->testbench_fallos__DOT__done_read1 = VL_RAND_RESET_I(1);
    vlSelf->testbench_fallos__DOT__write_enable1 = VL_RAND_RESET_I(1);
    vlSelf->testbench_fallos__DOT__error_type1 = VL_RAND_RESET_I(2);
    vlSelf->testbench_fallos__DOT__done_read0 = VL_RAND_RESET_I(1);
    vlSelf->testbench_fallos__DOT__write_enable0 = VL_RAND_RESET_I(1);
    vlSelf->testbench_fallos__DOT__error_type0 = VL_RAND_RESET_I(2);
    vlSelf->testbench_fallos__DOT__current_state = VL_RAND_RESET_I(3);
    vlSelf->testbench_fallos__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->testbench_fallos__DOT__unnamedblk3__DOT__keep_mask = VL_RAND_RESET_I(16);
    vlSelf->testbench_fallos__DOT__unnamedblk3__DOT__forced1 = VL_RAND_RESET_I(16);
    vlSelf->testbench_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi = VL_RAND_RESET_I(1);
    vlSelf->testbench_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi = VL_RAND_RESET_I(1);
    vlSelf->testbench_fallos__DOT__barrido_1s__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->testbench_fallos__DOT__barrido_1s__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->testbench_fallos__DOT__barrido_1s__DOT__addr_counter = VL_RAND_RESET_I(20);
    vlSelf->testbench_fallos__DOT__barrido_0s__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->testbench_fallos__DOT__barrido_0s__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->testbench_fallos__DOT__barrido_0s__DOT__addr_counter = VL_RAND_RESET_I(20);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
}
