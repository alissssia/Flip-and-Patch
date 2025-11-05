// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfinal_integration.h for the primary calling header

#include "Vfinal_integration__pch.h"
#include "Vfinal_integration__Syms.h"
#include "Vfinal_integration_top_patching_final__M4.h"

VL_INLINE_OPT void Vfinal_integration_top_patching_final__M4___ico_sequent__TOP__final_integration__test_mechanisms__patch_inst__0(Vfinal_integration_top_patching_final__M4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfinal_integration_top_patching_final__M4___ico_sequent__TOP__final_integration__test_mechanisms__patch_inst__0\n"); );
    // Init
    SData/*15:0*/ patching_unit__DOT____Vcellout__patching_units__BRA__0__KET____DOT__u0__b;
    patching_unit__DOT____Vcellout__patching_units__BRA__0__KET____DOT__u0__b = 0;
    SData/*15:0*/ patching_unit__DOT____Vcellout__patching_units__BRA__1__KET____DOT__u0__b;
    patching_unit__DOT____Vcellout__patching_units__BRA__1__KET____DOT__u0__b = 0;
    SData/*15:0*/ patching_unit__DOT____Vcellout__patching_units__BRA__2__KET____DOT__u0__b;
    patching_unit__DOT____Vcellout__patching_units__BRA__2__KET____DOT__u0__b = 0;
    SData/*15:0*/ patching_unit__DOT____Vcellout__patching_units__BRA__3__KET____DOT__u0__b;
    patching_unit__DOT____Vcellout__patching_units__BRA__3__KET____DOT__u0__b = 0;
    // Body
    patching_unit__DOT____Vcellout__patching_units__BRA__0__KET____DOT__u0__b 
        = (vlSelf->__PVT__p[0U] ? vlSelf->__PVT__activation_cache
           [0U] : vlSelf->__PVT__activation_org[0U]);
    patching_unit__DOT____Vcellout__patching_units__BRA__1__KET____DOT__u0__b 
        = (vlSelf->__PVT__p[1U] ? vlSelf->__PVT__activation_cache
           [1U] : vlSelf->__PVT__activation_org[1U]);
    patching_unit__DOT____Vcellout__patching_units__BRA__2__KET____DOT__u0__b 
        = (vlSelf->__PVT__p[2U] ? vlSelf->__PVT__activation_cache
           [2U] : vlSelf->__PVT__activation_org[2U]);
    patching_unit__DOT____Vcellout__patching_units__BRA__3__KET____DOT__u0__b 
        = (vlSelf->__PVT__p[3U] ? vlSelf->__PVT__activation_cache
           [3U] : vlSelf->__PVT__activation_org[3U]);
    if (vlSymsp->TOP__final_integration__test_mechanisms.__PVT__read_write) {
        vlSelf->__PVT__chosen_activation[0U] = patching_unit__DOT____Vcellout__patching_units__BRA__0__KET____DOT__u0__b;
        vlSelf->__PVT__chosen_activation[1U] = patching_unit__DOT____Vcellout__patching_units__BRA__1__KET____DOT__u0__b;
        vlSelf->__PVT__chosen_activation[2U] = patching_unit__DOT____Vcellout__patching_units__BRA__2__KET____DOT__u0__b;
        vlSelf->__PVT__chosen_activation[3U] = patching_unit__DOT____Vcellout__patching_units__BRA__3__KET____DOT__u0__b;
    } else {
        vlSelf->__PVT__chosen_activation[0U] = 0xbebaU;
        vlSelf->__PVT__chosen_activation[1U] = 0xbebaU;
        vlSelf->__PVT__chosen_activation[2U] = 0xbebaU;
        vlSelf->__PVT__chosen_activation[3U] = 0xbebaU;
    }
}

VL_INLINE_OPT void Vfinal_integration_top_patching_final__M4___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__0(Vfinal_integration_top_patching_final__M4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfinal_integration_top_patching_final__M4___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__0\n"); );
    // Init
    SData/*15:0*/ __VdlyVal__activation_cache__v0;
    __VdlyVal__activation_cache__v0 = 0;
    CData/*1:0*/ __VdlyDim0__activation_cache__v0;
    __VdlyDim0__activation_cache__v0 = 0;
    CData/*0:0*/ __VdlySet__activation_cache__v0;
    __VdlySet__activation_cache__v0 = 0;
    // Body
    __VdlySet__activation_cache__v0 = 0U;
    if (vlSymsp->TOP__final_integration__test_mechanisms.__PVT__store_enable) {
        __VdlyVal__activation_cache__v0 = vlSymsp->TOP__final_integration__test_mechanisms.__PVT__activation_in;
        __VdlyDim0__activation_cache__v0 = vlSymsp->TOP__final_integration__test_mechanisms.__PVT__index_counter;
        __VdlySet__activation_cache__v0 = 1U;
    }
    if (__VdlySet__activation_cache__v0) {
        vlSelf->__PVT__activation_cache[__VdlyDim0__activation_cache__v0] 
            = __VdlyVal__activation_cache__v0;
    }
}
