// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTESTBENCH_FALLOS__SYMS_H_
#define VERILATED_VTESTBENCH_FALLOS__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtestbench_fallos.h"

// INCLUDE MODULE CLASSES
#include "Vtestbench_fallos___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtestbench_fallos__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtestbench_fallos* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtestbench_fallos___024root    TOP;

    // CONSTRUCTORS
    Vtestbench_fallos__Syms(VerilatedContext* contextp, const char* namep, Vtestbench_fallos* modelp);
    ~Vtestbench_fallos__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
