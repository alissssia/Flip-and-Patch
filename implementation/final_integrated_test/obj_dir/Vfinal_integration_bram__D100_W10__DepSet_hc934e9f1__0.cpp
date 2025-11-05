// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfinal_integration.h for the primary calling header

#include "Vfinal_integration__pch.h"
#include "Vfinal_integration__Syms.h"
#include "Vfinal_integration_bram__D100_W10.h"

VL_INLINE_OPT void Vfinal_integration_bram__D100_W10___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram__0(Vfinal_integration_bram__D100_W10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vfinal_integration_bram__D100_W10___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram__0\n"); );
    // Init
    SData/*15:0*/ __VdlyVal__ram__v0;
    __VdlyVal__ram__v0 = 0;
    CData/*7:0*/ __VdlyDim0__ram__v0;
    __VdlyDim0__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ram__v0;
    __VdlySet__ram__v0 = 0;
    // Body
    __VdlySet__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if ((1U & (IData)(vlSymsp->TOP__final_integration__test_mechanisms__patch_inst__patch_cache.__PVT__write_enable_data))) {
            __VdlyVal__ram__v0 = vlSymsp->TOP__final_integration__test_mechanisms.__PVT__activation_in;
            __VdlyDim0__ram__v0 = (0xffU & (IData)(vlSymsp->TOP__final_integration__test_mechanisms.__PVT__index_counter));
            __VdlySet__ram__v0 = 1U;
        }
    }
    if (__VdlySet__ram__v0) {
        vlSelf->ram[__VdlyDim0__ram__v0] = __VdlyVal__ram__v0;
    }
}

VL_INLINE_OPT void Vfinal_integration_bram__D100_W10___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram__0(Vfinal_integration_bram__D100_W10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vfinal_integration_bram__D100_W10___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram__0\n"); );
    // Init
    SData/*15:0*/ __VdlyVal__ram__v0;
    __VdlyVal__ram__v0 = 0;
    CData/*7:0*/ __VdlyDim0__ram__v0;
    __VdlyDim0__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ram__v0;
    __VdlySet__ram__v0 = 0;
    // Body
    __VdlySet__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if ((2U & (IData)(vlSymsp->TOP__final_integration__test_mechanisms__patch_inst__patch_cache.__PVT__write_enable_data))) {
            __VdlyVal__ram__v0 = vlSymsp->TOP__final_integration__test_mechanisms.__PVT__activation_in;
            __VdlyDim0__ram__v0 = (0xffU & (IData)(vlSymsp->TOP__final_integration__test_mechanisms.__PVT__index_counter));
            __VdlySet__ram__v0 = 1U;
        }
    }
    if (__VdlySet__ram__v0) {
        vlSelf->ram[__VdlyDim0__ram__v0] = __VdlyVal__ram__v0;
    }
}

VL_INLINE_OPT void Vfinal_integration_bram__D100_W10___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram__0(Vfinal_integration_bram__D100_W10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vfinal_integration_bram__D100_W10___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram__0\n"); );
    // Init
    SData/*15:0*/ __VdlyVal__ram__v0;
    __VdlyVal__ram__v0 = 0;
    CData/*7:0*/ __VdlyDim0__ram__v0;
    __VdlyDim0__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ram__v0;
    __VdlySet__ram__v0 = 0;
    // Body
    __VdlySet__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if ((4U & (IData)(vlSymsp->TOP__final_integration__test_mechanisms__patch_inst__patch_cache.__PVT__write_enable_data))) {
            __VdlyVal__ram__v0 = vlSymsp->TOP__final_integration__test_mechanisms.__PVT__activation_in;
            __VdlyDim0__ram__v0 = (0xffU & (IData)(vlSymsp->TOP__final_integration__test_mechanisms.__PVT__index_counter));
            __VdlySet__ram__v0 = 1U;
        }
    }
    if (__VdlySet__ram__v0) {
        vlSelf->ram[__VdlyDim0__ram__v0] = __VdlyVal__ram__v0;
    }
}

VL_INLINE_OPT void Vfinal_integration_bram__D100_W10___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram__0(Vfinal_integration_bram__D100_W10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vfinal_integration_bram__D100_W10___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram__0\n"); );
    // Init
    SData/*15:0*/ __VdlyVal__ram__v0;
    __VdlyVal__ram__v0 = 0;
    CData/*7:0*/ __VdlyDim0__ram__v0;
    __VdlyDim0__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ram__v0;
    __VdlySet__ram__v0 = 0;
    // Body
    __VdlySet__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if ((8U & (IData)(vlSymsp->TOP__final_integration__test_mechanisms__patch_inst__patch_cache.__PVT__write_enable_data))) {
            __VdlyVal__ram__v0 = vlSymsp->TOP__final_integration__test_mechanisms.__PVT__activation_in;
            __VdlyDim0__ram__v0 = (0xffU & (IData)(vlSymsp->TOP__final_integration__test_mechanisms.__PVT__index_counter));
            __VdlySet__ram__v0 = 1U;
        }
    }
    if (__VdlySet__ram__v0) {
        vlSelf->ram[__VdlyDim0__ram__v0] = __VdlyVal__ram__v0;
    }
}

VL_INLINE_OPT void Vfinal_integration_bram__D100_W10___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram__0(Vfinal_integration_bram__D100_W10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vfinal_integration_bram__D100_W10___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram__0\n"); );
    // Init
    SData/*15:0*/ __VdlyVal__ram__v0;
    __VdlyVal__ram__v0 = 0;
    CData/*7:0*/ __VdlyDim0__ram__v0;
    __VdlyDim0__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ram__v0;
    __VdlySet__ram__v0 = 0;
    // Body
    __VdlySet__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if ((0x10U & (IData)(vlSymsp->TOP__final_integration__test_mechanisms__patch_inst__patch_cache.__PVT__write_enable_data))) {
            __VdlyVal__ram__v0 = vlSymsp->TOP__final_integration__test_mechanisms.__PVT__activation_in;
            __VdlyDim0__ram__v0 = (0xffU & (IData)(vlSymsp->TOP__final_integration__test_mechanisms.__PVT__index_counter));
            __VdlySet__ram__v0 = 1U;
        }
    }
    if (__VdlySet__ram__v0) {
        vlSelf->ram[__VdlyDim0__ram__v0] = __VdlyVal__ram__v0;
    }
}
