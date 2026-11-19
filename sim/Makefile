# SLIME MAZE playable simulation (Verilator + SDL2)
#   make run         fast version, 60 frames per second (use this one to play)
#   make run-exact   slow version that also simulates vga_sync pixel by pixel
VFLAGS  = --cc -Wno-fatal -O3 --x-assign fast --x-initial fast
CFLAGS  = -O3 $(shell sdl2-config --cflags)
LDFLAGS = $(shell sdl2-config --libs)
GAME    = ../slime_logic.v ../slime_draw.v ../slime_roms.v ../slime_art.v

run: obj_fast/Vfast_top
	./obj_fast/Vfast_top

run-exact: obj_exact/Vsim_top
	./obj_exact/Vsim_top

obj_fast/Vfast_top: sim_fast.cpp fast_top.v $(GAME)
	verilator $(VFLAGS) --top-module fast_top fast_top.v $(GAME) \
	    --exe sim_fast.cpp --Mdir obj_fast -CFLAGS "$(CFLAGS)" -LDFLAGS "$(LDFLAGS)"
	$(MAKE) -C obj_fast -f Vfast_top.mk OPT_FAST="-O3"

obj_exact/Vsim_top: sim_main.cpp sim_top.v ../vga_sync.v $(GAME)
	verilator $(VFLAGS) --top-module sim_top sim_top.v ../vga_sync.v $(GAME) \
	    --exe sim_main.cpp --Mdir obj_exact -CFLAGS "$(CFLAGS)" -LDFLAGS "$(LDFLAGS)"
	$(MAKE) -C obj_exact -f Vsim_top.mk OPT_FAST="-O3"

.PHONY: run run-exact
