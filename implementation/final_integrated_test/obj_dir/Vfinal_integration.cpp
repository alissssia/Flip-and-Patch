// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfinal_integration__pch.h"

//============================================================
// Constructors

Vfinal_integration::Vfinal_integration(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfinal_integration__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , start_reading{vlSymsp->TOP.start_reading}
    , start_scan{vlSymsp->TOP.start_scan}
    , scan_done{vlSymsp->TOP.scan_done}
    , count_f{vlSymsp->TOP.count_f}
    , count_p{vlSymsp->TOP.count_p}
    , activation_org{vlSymsp->TOP.activation_org}
    , activation_cache{vlSymsp->TOP.activation_cache}
    , f{vlSymsp->TOP.f}
    , p{vlSymsp->TOP.p}
    , flipped_out{vlSymsp->TOP.flipped_out}
    , patched_out{vlSymsp->TOP.patched_out}
    , activation_final{vlSymsp->TOP.activation_final}
    , f_m{vlSymsp->TOP.f_m}
    , p_m{vlSymsp->TOP.p_m}
    , final_integration{vlSymsp->TOP.final_integration}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vfinal_integration::Vfinal_integration(const char* _vcname__)
    : Vfinal_integration(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfinal_integration::~Vfinal_integration() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfinal_integration___024root___eval_debug_assertions(Vfinal_integration___024root* vlSelf);
#endif  // VL_DEBUG
void Vfinal_integration___024root___eval_static(Vfinal_integration___024root* vlSelf);
void Vfinal_integration___024root___eval_initial(Vfinal_integration___024root* vlSelf);
void Vfinal_integration___024root___eval_settle(Vfinal_integration___024root* vlSelf);
void Vfinal_integration___024root___eval(Vfinal_integration___024root* vlSelf);

void Vfinal_integration::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfinal_integration::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfinal_integration___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vfinal_integration___024root___eval_static(&(vlSymsp->TOP));
        Vfinal_integration___024root___eval_initial(&(vlSymsp->TOP));
        Vfinal_integration___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vfinal_integration___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vfinal_integration::eventsPending() { return false; }

uint64_t Vfinal_integration::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vfinal_integration::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vfinal_integration___024root___eval_final(Vfinal_integration___024root* vlSelf);

VL_ATTR_COLD void Vfinal_integration::final() {
    Vfinal_integration___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfinal_integration::hierName() const { return vlSymsp->name(); }
const char* Vfinal_integration::modelName() const { return "Vfinal_integration"; }
unsigned Vfinal_integration::threads() const { return 1; }
void Vfinal_integration::prepareClone() const { contextp()->prepareClone(); }
void Vfinal_integration::atClone() const {
    contextp()->threadPoolpOnClone();
}
