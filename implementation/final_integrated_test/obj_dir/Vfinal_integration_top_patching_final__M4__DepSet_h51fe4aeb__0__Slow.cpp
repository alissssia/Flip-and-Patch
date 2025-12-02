// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfinal_integration.h for the primary calling header

#include "Vfinal_integration__pch.h"
#include "Vfinal_integration__Syms.h"
#include "Vfinal_integration_top_patching_final__M4.h"

VL_ATTR_COLD void Vfinal_integration_top_patching_final__M4___stl_sequent__TOP__final_integration__ensemble__patch_inst__0(Vfinal_integration_top_patching_final__M4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfinal_integration_top_patching_final__M4___stl_sequent__TOP__final_integration__ensemble__patch_inst__0\n"); );
    // Body
    vlSelf->patching_unit__DOT____Vcellout__patching_units__BRA__0__KET____DOT__u0__b 
        = (vlSelf->__PVT__p[0U] ? vlSelf->__PVT__activation_cache
           [0U] : vlSelf->__PVT__activation_org[0U]);
    vlSelf->patching_unit__DOT____Vcellout__patching_units__BRA__1__KET____DOT__u0__b 
        = (vlSelf->__PVT__p[1U] ? vlSelf->__PVT__activation_cache
           [1U] : vlSelf->__PVT__activation_org[1U]);
    vlSelf->patching_unit__DOT____Vcellout__patching_units__BRA__2__KET____DOT__u0__b 
        = (vlSelf->__PVT__p[2U] ? vlSelf->__PVT__activation_cache
           [2U] : vlSelf->__PVT__activation_org[2U]);
    vlSelf->patching_unit__DOT____Vcellout__patching_units__BRA__3__KET____DOT__u0__b 
        = (vlSelf->__PVT__p[3U] ? vlSelf->__PVT__activation_cache
           [3U] : vlSelf->__PVT__activation_org[3U]);
    if (vlSymsp->TOP__final_integration__ensemble.__PVT__read_write) {
        vlSelf->__PVT__chosen_activation[0U] = vlSelf->patching_unit__DOT____Vcellout__patching_units__BRA__0__KET____DOT__u0__b;
        vlSelf->__PVT__chosen_activation[1U] = vlSelf->patching_unit__DOT____Vcellout__patching_units__BRA__1__KET____DOT__u0__b;
        vlSelf->__PVT__chosen_activation[2U] = vlSelf->patching_unit__DOT____Vcellout__patching_units__BRA__2__KET____DOT__u0__b;
        vlSelf->__PVT__chosen_activation[3U] = vlSelf->patching_unit__DOT____Vcellout__patching_units__BRA__3__KET____DOT__u0__b;
    } else {
        vlSelf->__PVT__chosen_activation[0U] = 0xbebaU;
        vlSelf->__PVT__chosen_activation[1U] = 0xbebaU;
        vlSelf->__PVT__chosen_activation[2U] = 0xbebaU;
        vlSelf->__PVT__chosen_activation[3U] = 0xbebaU;
    }
}
