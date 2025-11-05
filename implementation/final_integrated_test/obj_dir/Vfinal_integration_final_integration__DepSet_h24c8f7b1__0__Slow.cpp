// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfinal_integration.h for the primary calling header

#include "Vfinal_integration__pch.h"
#include "Vfinal_integration__Syms.h"
#include "Vfinal_integration_final_integration.h"

extern const VlUnpacked<CData/*2:0*/, 128> Vfinal_integration__ConstPool__TABLE_h0d2d7aa8_0;

VL_ATTR_COLD void Vfinal_integration_final_integration___stl_sequent__TOP__final_integration__0(Vfinal_integration_final_integration* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vfinal_integration_final_integration___stl_sequent__TOP__final_integration__0\n"); );
    // Init
    IData/*31:0*/ __PVT__unnamedblk1__DOT__cf;
    __PVT__unnamedblk1__DOT__cf = 0;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__cp;
    __PVT__unnamedblk1__DOT__cp = 0;
    SData/*15:0*/ __PVT__rellenar_fallos__DOT__barrido_1s__DOT__not_expected_value;
    __PVT__rellenar_fallos__DOT__barrido_1s__DOT__not_expected_value = 0;
    CData/*0:0*/ __PVT__rellenar_fallos__DOT__barrido_0s__DOT__has_high_order;
    __PVT__rellenar_fallos__DOT__barrido_0s__DOT__has_high_order = 0;
    CData/*0:0*/ __PVT__rellenar_fallos__DOT__barrido_0s__DOT__has_low_order;
    __PVT__rellenar_fallos__DOT__barrido_0s__DOT__has_low_order = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
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
    vlSelf->__PVT__rellenar_fallos__DOT__write_enable1 = 0U;
    vlSelf->__PVT__rellenar_fallos__DOT__write_enable0 = 0U;
    vlSelf->__PVT__rellenar_fallos__DOT__done_read1 = 0U;
    if ((2U & (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__current_state))) {
        vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__next_state 
            = ((1U & (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__current_state))
                ? ((1U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__current_state))
                    ? 3U : 0U) : ((0x3fU == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__addr_counter))
                                   ? 3U : 2U));
        if ((1U & (~ (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__current_state)))) {
            vlSelf->__PVT__rellenar_fallos__DOT__write_enable1 = 0U;
            if ((0x3fU == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__addr_counter))) {
                vlSelf->__PVT__rellenar_fallos__DOT__done_read1 = 1U;
            }
        }
    } else if ((1U & (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__current_state))) {
        vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__next_state 
            = ((0x3fU == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__addr_counter))
                ? 2U : 1U);
        vlSelf->__PVT__rellenar_fallos__DOT__write_enable1 = 1U;
    } else {
        vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__next_state 
            = ((1U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__current_state))
                ? 1U : 0U);
    }
    vlSelf->__PVT__rellenar_fallos__DOT__done_read0 = 0U;
    if ((2U & (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__current_state))) {
        vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__next_state 
            = ((1U & (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__current_state))
                ? ((2U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__current_state))
                    ? 3U : 0U) : ((0x3fU == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__addr_counter))
                                   ? 3U : 2U));
        if ((1U & (~ (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__current_state)))) {
            vlSelf->__PVT__rellenar_fallos__DOT__write_enable0 = 0U;
            if ((0x3fU == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__addr_counter))) {
                vlSelf->__PVT__rellenar_fallos__DOT__done_read0 = 1U;
            }
        }
    } else if ((1U & (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__current_state))) {
        vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__next_state 
            = ((0x3fU == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__addr_counter))
                ? 2U : 1U);
        vlSelf->__PVT__rellenar_fallos__DOT__write_enable0 = 1U;
    } else {
        vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__next_state 
            = ((2U == (IData)(vlSelf->__PVT__rellenar_fallos__DOT__current_state))
                ? 1U : 0U);
    }
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
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x3fU)) {
        vlSelf->f[__Vilp1] = vlSelf->__PVT__flipping_bit
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x3fU)) {
        vlSelf->p[__Vilp2] = vlSelf->__PVT__patching_bit
            [__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
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
    vlSelf->flipped_out[3U] = vlSymsp->TOP__final_integration__test_mechanisms.__PVT__flipped_out
        [3U];
    vlSelf->flipped_out[2U] = vlSymsp->TOP__final_integration__test_mechanisms.__PVT__flipped_out
        [2U];
    vlSelf->flipped_out[1U] = vlSymsp->TOP__final_integration__test_mechanisms.__PVT__flipped_out
        [1U];
    vlSelf->flipped_out[0U] = vlSymsp->TOP__final_integration__test_mechanisms.__PVT__flipped_out
        [0U];
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
    vlSelf->f_m[3U] = vlSelf->__PVT__f_mechanism[3U];
    vlSelf->f_m[2U] = vlSelf->__PVT__f_mechanism[2U];
    vlSelf->f_m[1U] = vlSelf->__PVT__f_mechanism[1U];
    vlSelf->f_m[0U] = vlSelf->__PVT__f_mechanism[0U];
    vlSymsp->TOP__final_integration__test_mechanisms.__PVT__f[3U] 
        = vlSelf->__PVT__f_mechanism[3U];
    vlSymsp->TOP__final_integration__test_mechanisms.__PVT__f[2U] 
        = vlSelf->__PVT__f_mechanism[2U];
    vlSymsp->TOP__final_integration__test_mechanisms.__PVT__f[1U] 
        = vlSelf->__PVT__f_mechanism[1U];
    vlSymsp->TOP__final_integration__test_mechanisms.__PVT__f[0U] 
        = vlSelf->__PVT__f_mechanism[0U];
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
