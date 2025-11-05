// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfinal_integration.h for the primary calling header

#include "Vfinal_integration__pch.h"
#include "Vfinal_integration__Syms.h"
#include "Vfinal_integration_cache_tfg.h"

extern const VlUnpacked<CData/*2:0*/, 128> Vfinal_integration__ConstPool__TABLE_he4111221_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vfinal_integration__ConstPool__TABLE_h599c0850_0;

VL_INLINE_OPT void Vfinal_integration_cache_tfg___ico_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__0(Vfinal_integration_cache_tfg* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfinal_integration_cache_tfg___ico_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__0\n"); );
    // Init
    CData/*0:0*/ __PVT__enable_write;
    __PVT__enable_write = 0;
    CData/*2:0*/ __PVT__way_to_write;
    __PVT__way_to_write = 0;
    CData/*0:0*/ __PVT__enable_write_way_bit;
    __PVT__enable_write_way_bit = 0;
    CData/*4:0*/ __PVT__write_way_selector_inst__DOT__tmp_valid_bits;
    __PVT__write_way_selector_inst__DOT__tmp_valid_bits = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (0x10U | (((IData)((0U != (0x1fU 
                                              & (~ 
                                                 vlSelf->__PVT__valid_bits_array
                                                 [(0xffU 
                                                   & (IData)(vlSymsp->TOP__final_integration__test_mechanisms.__PVT__index_counter))])))) 
                              << 6U) | (((IData)(vlSymsp->TOP__final_integration__test_mechanisms.__PVT__read_write) 
                                         << 5U) | (
                                                   ((IData)(vlSymsp->TOP.reset) 
                                                    << 3U) 
                                                   | (IData)(vlSelf->__PVT__state)))));
    vlSelf->__PVT__next_state = Vfinal_integration__ConstPool__TABLE_he4111221_0
        [__Vtableidx1];
    __PVT__enable_write = Vfinal_integration__ConstPool__TABLE_h599c0850_0
        [__Vtableidx1];
    vlSelf->__PVT__enable_write_valid = Vfinal_integration__ConstPool__TABLE_h599c0850_0
        [__Vtableidx1];
    __PVT__enable_write_way_bit = Vfinal_integration__ConstPool__TABLE_h599c0850_0
        [__Vtableidx1];
    __PVT__write_way_selector_inst__DOT__tmp_valid_bits 
        = vlSelf->__PVT__valid_bits_out;
    __PVT__way_to_write = 0U;
    if (__PVT__enable_write_way_bit) {
        vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__i = 0U;
        {
            while ((5U > vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__i)) {
                if ((1U & (~ ((4U >= (7U & vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__i)) 
                              && (1U & ((IData)(vlSelf->__PVT__valid_bits_out) 
                                        >> (7U & vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__i))))))) {
                    __PVT__way_to_write = (7U & vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__i);
                    vlSelf->write_way_selector_inst__DOT____Vlvbound_h797c410c__0 = 1U;
                    if (VL_LIKELY((4U >= (7U & vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__i)))) {
                        __PVT__write_way_selector_inst__DOT__tmp_valid_bits 
                            = (((~ ((IData)(1U) << 
                                    (7U & vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__i))) 
                                & (IData)(__PVT__write_way_selector_inst__DOT__tmp_valid_bits)) 
                               | (0x1fU & ((IData)(vlSelf->write_way_selector_inst__DOT____Vlvbound_h797c410c__0) 
                                           << (7U & vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__i))));
                    }
                    goto __Vlabel1;
                }
                vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__i 
                    = ((IData)(1U) + vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__i);
            }
            __Vlabel1: ;
        }
    }
    vlSelf->__PVT__valid_bits_next = __PVT__write_way_selector_inst__DOT__tmp_valid_bits;
    vlSelf->__PVT__write_enable_data = 0U;
    vlSelf->__PVT__write_enable_tag = 0U;
    if (__PVT__enable_write) {
        vlSelf->write_enable_generator_inst__DOT____Vlvbound_h4ac1e79a__0 = 1U;
        vlSelf->write_enable_generator_inst__DOT____Vlvbound_hd1dcecc8__0 = 1U;
        if ((4U >= (IData)(__PVT__way_to_write))) {
            vlSelf->__PVT__write_enable_data = (((~ 
                                                  ((IData)(1U) 
                                                   << (IData)(__PVT__way_to_write))) 
                                                 & (IData)(vlSelf->__PVT__write_enable_data)) 
                                                | (0x1fU 
                                                   & ((IData)(vlSelf->write_enable_generator_inst__DOT____Vlvbound_h4ac1e79a__0) 
                                                      << (IData)(__PVT__way_to_write))));
            vlSelf->__PVT__write_enable_tag = (((~ 
                                                 ((IData)(1U) 
                                                  << (IData)(__PVT__way_to_write))) 
                                                & (IData)(vlSelf->__PVT__write_enable_tag)) 
                                               | (0x1fU 
                                                  & ((IData)(vlSelf->write_enable_generator_inst__DOT____Vlvbound_hd1dcecc8__0) 
                                                     << (IData)(__PVT__way_to_write))));
        }
    }
}

VL_INLINE_OPT void Vfinal_integration_cache_tfg___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__0(Vfinal_integration_cache_tfg* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfinal_integration_cache_tfg___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__0\n"); );
    // Init
    CData/*7:0*/ __VdlyDim0__valid_bits_array__v0;
    __VdlyDim0__valid_bits_array__v0 = 0;
    CData/*4:0*/ __VdlyVal__valid_bits_array__v1;
    __VdlyVal__valid_bits_array__v1 = 0;
    CData/*7:0*/ __VdlyDim0__valid_bits_array__v1;
    __VdlyDim0__valid_bits_array__v1 = 0;
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0x100U, vlSelf->__PVT__unnamedblk1__DOT__i)) {
            __VdlyDim0__valid_bits_array__v0 = (0xffU 
                                                & vlSelf->__PVT__unnamedblk1__DOT__i);
            vlSelf->__VdlyCommitQueue__valid_bits_array__v0.enqueue(0U, (IData)(__VdlyDim0__valid_bits_array__v0));
            vlSelf->__PVT__unnamedblk1__DOT__i = ((IData)(1U) 
                                                  + vlSelf->__PVT__unnamedblk1__DOT__i);
        }
    } else if (vlSelf->__PVT__enable_write_valid) {
        __VdlyVal__valid_bits_array__v1 = vlSelf->__PVT__valid_bits_next;
        __VdlyDim0__valid_bits_array__v1 = (0xffU & (IData)(vlSymsp->TOP__final_integration__test_mechanisms.__PVT__index_counter));
        vlSelf->__VdlyCommitQueue__valid_bits_array__v0.enqueue(__VdlyVal__valid_bits_array__v1, (IData)(__VdlyDim0__valid_bits_array__v1));
    }
    vlSelf->__PVT__state = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSelf->__PVT__next_state));
    vlSelf->__VdlyCommitQueue__valid_bits_array__v0.commit(vlSelf->__PVT__valid_bits_array);
}

VL_INLINE_OPT void Vfinal_integration_cache_tfg___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__1(Vfinal_integration_cache_tfg* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfinal_integration_cache_tfg___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__1\n"); );
    // Init
    CData/*0:0*/ __PVT__enable_write;
    __PVT__enable_write = 0;
    CData/*2:0*/ __PVT__way_to_write;
    __PVT__way_to_write = 0;
    CData/*0:0*/ __PVT__enable_write_way_bit;
    __PVT__enable_write_way_bit = 0;
    CData/*4:0*/ __PVT__write_way_selector_inst__DOT__tmp_valid_bits;
    __PVT__write_way_selector_inst__DOT__tmp_valid_bits = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->__PVT__valid_bits_out = vlSelf->__PVT__valid_bits_array
        [(0xffU & (IData)(vlSymsp->TOP__final_integration__test_mechanisms.__PVT__index_counter))];
    __Vtableidx1 = (0x10U | (((IData)((0U != (0x1fU 
                                              & (~ 
                                                 vlSelf->__PVT__valid_bits_array
                                                 [(0xffU 
                                                   & (IData)(vlSymsp->TOP__final_integration__test_mechanisms.__PVT__index_counter))])))) 
                              << 6U) | (((IData)(vlSymsp->TOP__final_integration__test_mechanisms.__PVT__read_write) 
                                         << 5U) | (
                                                   ((IData)(vlSymsp->TOP.reset) 
                                                    << 3U) 
                                                   | (IData)(vlSelf->__PVT__state)))));
    vlSelf->__PVT__next_state = Vfinal_integration__ConstPool__TABLE_he4111221_0
        [__Vtableidx1];
    __PVT__enable_write = Vfinal_integration__ConstPool__TABLE_h599c0850_0
        [__Vtableidx1];
    vlSelf->__PVT__enable_write_valid = Vfinal_integration__ConstPool__TABLE_h599c0850_0
        [__Vtableidx1];
    __PVT__enable_write_way_bit = Vfinal_integration__ConstPool__TABLE_h599c0850_0
        [__Vtableidx1];
    __PVT__write_way_selector_inst__DOT__tmp_valid_bits 
        = vlSelf->__PVT__valid_bits_out;
    __PVT__way_to_write = 0U;
    if (__PVT__enable_write_way_bit) {
        vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__i = 0U;
        {
            while ((5U > vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__i)) {
                if ((1U & (~ ((4U >= (7U & vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__i)) 
                              && (1U & ((IData)(vlSelf->__PVT__valid_bits_out) 
                                        >> (7U & vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__i))))))) {
                    __PVT__way_to_write = (7U & vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__i);
                    vlSelf->write_way_selector_inst__DOT____Vlvbound_h797c410c__0 = 1U;
                    if (VL_LIKELY((4U >= (7U & vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__i)))) {
                        __PVT__write_way_selector_inst__DOT__tmp_valid_bits 
                            = (((~ ((IData)(1U) << 
                                    (7U & vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__i))) 
                                & (IData)(__PVT__write_way_selector_inst__DOT__tmp_valid_bits)) 
                               | (0x1fU & ((IData)(vlSelf->write_way_selector_inst__DOT____Vlvbound_h797c410c__0) 
                                           << (7U & vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__i))));
                    }
                    goto __Vlabel2;
                }
                vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__i 
                    = ((IData)(1U) + vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__i);
            }
            __Vlabel2: ;
        }
    }
    vlSelf->__PVT__valid_bits_next = __PVT__write_way_selector_inst__DOT__tmp_valid_bits;
    vlSelf->__PVT__write_enable_data = 0U;
    vlSelf->__PVT__write_enable_tag = 0U;
    if (__PVT__enable_write) {
        vlSelf->write_enable_generator_inst__DOT____Vlvbound_h4ac1e79a__0 = 1U;
        vlSelf->write_enable_generator_inst__DOT____Vlvbound_hd1dcecc8__0 = 1U;
        if ((4U >= (IData)(__PVT__way_to_write))) {
            vlSelf->__PVT__write_enable_data = (((~ 
                                                  ((IData)(1U) 
                                                   << (IData)(__PVT__way_to_write))) 
                                                 & (IData)(vlSelf->__PVT__write_enable_data)) 
                                                | (0x1fU 
                                                   & ((IData)(vlSelf->write_enable_generator_inst__DOT____Vlvbound_h4ac1e79a__0) 
                                                      << (IData)(__PVT__way_to_write))));
            vlSelf->__PVT__write_enable_tag = (((~ 
                                                 ((IData)(1U) 
                                                  << (IData)(__PVT__way_to_write))) 
                                                & (IData)(vlSelf->__PVT__write_enable_tag)) 
                                               | (0x1fU 
                                                  & ((IData)(vlSelf->write_enable_generator_inst__DOT____Vlvbound_hd1dcecc8__0) 
                                                     << (IData)(__PVT__way_to_write))));
        }
    }
}
