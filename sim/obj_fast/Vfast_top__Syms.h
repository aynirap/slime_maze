// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFAST_TOP__SYMS_H_
#define VERILATED_VFAST_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vfast_top.h"

// INCLUDE MODULE CLASSES
#include "Vfast_top___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vfast_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vfast_top* const __Vm_modelp;
    const bool __Vm_isRoot;
    std::string __Vm_topNames[2];
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    union {
        struct {
            Vfast_top___024root            TOP;
        } vlInst;
    };

    // CONSTRUCTORS
    Vfast_top__Syms(VerilatedContext* contextp, Vfast_top* modelp, const char* namep, bool isRoot);
    ~Vfast_top__Syms();

    // METHODS
    const char* name() const { return vlInst.TOP.vlNamep; }
};

#endif  // guard
