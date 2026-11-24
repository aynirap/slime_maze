// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfast_top.h for the primary calling header

#ifndef VERILATED_VFAST_TOP___024ROOT_H_
#define VERILATED_VFAST_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vfast_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfast_top___024root final {
  public:

    // TOP LEVEL PORTS
    union {
        struct {
            VL_IN8(clk,0,0);
            VL_IN8(rst,0,0);
            VL_IN8(tick,0,0);
            VL_IN8(tick2,0,0);
            VL_IN8(btn,4,0);
            VL_IN16(x,9,0);
            VL_IN16(y,9,0);
            VL_OUT16(rgb,11,0);
            VL_OUT8(state,2,0);
            VL_OUT8(form,1,0);
            VL_OUT8(lives,1,0);
            VL_OUT16(score,15,0);
            VL_OUT8(ksec,3,0);
        } __VprimaryPorts;
    };

    // TRIVIALLY CONSTRUCTIBLE STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        ::CData/*3:0*/ fast_top__DOT__u_logic__DOT__galive;
        ::CData/*0:0*/ fast_top__DOT__u_logic__DOT__crown_on;
        ::CData/*5:0*/ fast_top__DOT__u_logic__DOT__frame;
        ::CData/*3:0*/ fast_top__DOT__u_logic__DOT__bcd_add10__Vstatic__d1;
        ::CData/*3:0*/ fast_top__DOT__u_logic__DOT__bcd_add10__Vstatic__d2;
        ::CData/*3:0*/ fast_top__DOT__u_logic__DOT__bcd_add10__Vstatic__d3;
        ::CData/*1:0*/ fast_top__DOT__u_logic__DOT__pdir;
        ::CData/*1:0*/ fast_top__DOT__u_logic__DOT__want;
        ::CData/*0:0*/ fast_top__DOT__u_logic__DOT__pmoving;
        ::CData/*0:0*/ fast_top__DOT__u_logic__DOT__want_valid;
        ::CData/*0:0*/ fast_top__DOT__u_logic__DOT__p_aligned;
        ::CData/*1:0*/ fast_top__DOT__u_logic__DOT__p_nd;
        ::CData/*0:0*/ fast_top__DOT__u_logic__DOT__p_go;
        ::CData/*1:0*/ fast_top__DOT__u_logic__DOT__gdir__BRA__0__KET__;
        ::CData/*1:0*/ fast_top__DOT__u_logic__DOT__gdir__BRA__1__KET__;
        ::CData/*1:0*/ fast_top__DOT__u_logic__DOT__gdir__BRA__2__KET__;
        ::CData/*1:0*/ fast_top__DOT__u_logic__DOT__gdir__BRA__3__KET__;
        ::CData/*1:0*/ fast_top__DOT__u_logic__DOT__gnd__BRA__0__KET__;
        ::CData/*1:0*/ fast_top__DOT__u_logic__DOT__gnd__BRA__1__KET__;
        ::CData/*1:0*/ fast_top__DOT__u_logic__DOT__gnd__BRA__2__KET__;
        ::CData/*1:0*/ fast_top__DOT__u_logic__DOT__gnd__BRA__3__KET__;
        ::CData/*1:0*/ fast_top__DOT__u_logic__DOT__d0;
        ::CData/*1:0*/ fast_top__DOT__u_logic__DOT__d1;
        ::CData/*1:0*/ fast_top__DOT__u_logic__DOT__d2;
        ::CData/*1:0*/ fast_top__DOT__u_logic__DOT__d3;
        ::CData/*1:0*/ fast_top__DOT__u_logic__DOT__cidx;
        ::CData/*0:0*/ fast_top__DOT__u_logic__DOT__crown_hit;
        ::CData/*3:0*/ fast_top__DOT__u_logic__DOT__touch;
        ::CData/*0:0*/ fast_top__DOT__u_logic__DOT__btnc_q;
        ::CData/*7:0*/ fast_top__DOT__u_logic__DOT__pcount;
        ::CData/*7:0*/ fast_top__DOT__u_logic__DOT__cdelay;
        ::CData/*5:0*/ fast_top__DOT__u_logic__DOT__kframe;
        ::CData/*6:0*/ fast_top__DOT__u_logic__DOT__dtimer;
        ::CData/*6:0*/ fast_top__DOT__u_logic__DOT__pend;
        ::CData/*0:0*/ fast_top__DOT__u_logic__DOT__start_press;
        ::CData/*0:0*/ fast_top__DOT__u_logic__DOT__ptick;
        ::CData/*0:0*/ fast_top__DOT__u_draw__DOT__crown_pix;
        ::CData/*0:0*/ fast_top__DOT__u_draw__DOT__king_ending;
        ::CData/*4:0*/ fast_top__DOT__u_draw__DOT__icon_ci;
        ::CData/*0:0*/ fast_top__DOT__u_draw__DOT__show_msg;
        ::CData/*0:0*/ fast_top__DOT__u_draw__DOT__in_line1;
        ::CData/*0:0*/ fast_top__DOT__u_draw__DOT__u_m__DOT__wall;
        ::CData/*4:0*/ fast_top__DOT__u_draw__DOT__u_crown__DOT__ci;
        ::CData/*4:0*/ fast_top__DOT__u_draw__DOT__u_ball__DOT__ci;
        ::CData/*0:0*/ __Vdfg_Regularize_313;
        ::CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        ::CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
        ::CData/*0:0*/ __Vtrigprevexpr___TOP__tick__0;
        ::CData/*0:0*/ __Vtrigprevexpr___TOP__tick2__0;
        ::CData/*4:0*/ __Vtrigprevexpr___TOP__btn__0;
        ::CData/*0:0*/ __Vtrigprevexpr___TOP__clk__1;
        ::SData/*9:0*/ fast_top__DOT__u_logic__DOT__px;
        ::SData/*9:0*/ fast_top__DOT__u_logic__DOT__py;
        ::SData/*15:0*/ fast_top__DOT__u_logic__DOT__lfsr;
        ::SData/*9:0*/ fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__;
        ::SData/*9:0*/ fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__;
        ::SData/*9:0*/ fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__;
        ::SData/*9:0*/ fast_top__DOT__u_logic__DOT__gx__BRA__3__KET__;
        ::SData/*9:0*/ fast_top__DOT__u_logic__DOT__gy__BRA__0__KET__;
        ::SData/*9:0*/ fast_top__DOT__u_logic__DOT__gy__BRA__1__KET__;
        ::SData/*9:0*/ fast_top__DOT__u_logic__DOT__gy__BRA__2__KET__;
        ::SData/*9:0*/ fast_top__DOT__u_logic__DOT__gy__BRA__3__KET__;
        ::SData/*8:0*/ fast_top__DOT__u_logic__DOT__pidx;
        ::SData/*8:0*/ fast_top__DOT__u_draw__DOT__tidx;
    };
    struct {
        ::SData/*9:0*/ fast_top__DOT__u_draw__DOT__sx;
        ::SData/*9:0*/ fast_top__DOT__u_draw__DOT__sy;
        ::SData/*9:0*/ fast_top__DOT__u_draw__DOT__g_ghost__BRA__0__KET____DOT__dx;
        ::SData/*9:0*/ fast_top__DOT__u_draw__DOT__g_ghost__BRA__0__KET____DOT__dy;
        ::SData/*9:0*/ fast_top__DOT__u_draw__DOT__g_ghost__BRA__1__KET____DOT__dx;
        ::SData/*9:0*/ fast_top__DOT__u_draw__DOT__g_ghost__BRA__1__KET____DOT__dy;
        ::SData/*9:0*/ fast_top__DOT__u_draw__DOT__g_ghost__BRA__2__KET____DOT__dx;
        ::SData/*9:0*/ fast_top__DOT__u_draw__DOT__g_ghost__BRA__2__KET____DOT__dy;
        ::SData/*9:0*/ fast_top__DOT__u_draw__DOT__g_ghost__BRA__3__KET____DOT__dx;
        ::SData/*9:0*/ fast_top__DOT__u_draw__DOT__g_ghost__BRA__3__KET____DOT__dy;
        ::SData/*9:0*/ __Vtrigprevexpr___TOP__x__0;
        ::SData/*9:0*/ __Vtrigprevexpr___TOP__y__0;
        ::VlWide<10>/*299:0*/ fast_top__DOT__u_logic__DOT__pellet;
        ::IData/*19:0*/ fast_top__DOT__u_draw__DOT__u_m__DOT__row;
        ::IData/*31:0*/ __Vdfg_Regularize_338;
        ::VlUnpacked<::QData/*63:0*/, 1> __VstlTriggered;
        ::VlUnpacked<::QData/*63:0*/, 2> __VicoTriggered;
        ::VlUnpacked<::QData/*63:0*/, 1> __VactTriggered;
        ::VlUnpacked<::QData/*63:0*/, 1> __VnbaTriggered;
    };

    // INTERNAL VARIABLES
    Vfast_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vfast_top___024root(Vfast_top__Syms* symsp, const char* namep);
    ~Vfast_top___024root();
    VL_UNCOPYABLE(Vfast_top___024root);
    VL_UNMOVABLE(Vfast_top___024root);

    // INTERNAL METHODS
};


#endif  // guard
