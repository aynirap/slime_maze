// SLIME MAZE : playable simulation of the real Verilog (Verilator + SDL2).
// Every pixel in the window comes from slime_draw.v, one clock per pixel,
// exactly as the VGA monitor would get it.
//   Arrow keys = BTNU/BTND/BTNL/BTNR     Space or Enter = BTNC
//   R = CPU RESET                        Esc = quit
#include "Vsim_top.h"
#include "verilated.h"
#include <SDL.h>
#include <cstdio>
#include <cstdint>
#include <cstdlib>
#include <vector>

static Vsim_top* top;

static inline void clock_once() {
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();
}

// run one whole video frame (800 x 525 clocks); keep the pixels if draw is true
static void run_frame(uint32_t* fb, bool draw) {
    for (int i = 0; i < 800 * 525; i++) {
        if (draw && top->video_on) {
            uint32_t c = top->rgb;
            uint32_t r = ((c >> 8) & 15) * 17, g = ((c >> 4) & 15) * 17, b = (c & 15) * 17;
            fb[top->y * 640 + top->x] = 0xFF000000u | (r << 16) | (g << 8) | b;
        }
        clock_once();
    }
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    int max_frames = (argc > 1) ? atoi(argv[1]) : 0;      // optional: stop after N frames (for testing)

    top = new Vsim_top;
    top->btn = 0;
    top->rst = 1; for (int i = 0; i < 8; i++) clock_once();
    top->rst = 0;
    while (!(top->x == 0 && top->y == 0)) clock_once();   // start at the top-left pixel

    if (SDL_Init(SDL_INIT_VIDEO) != 0) { fprintf(stderr, "SDL_Init: %s\n", SDL_GetError()); return 1; }
    SDL_Window*   win = SDL_CreateWindow("SLIME MAZE (simulation)", SDL_WINDOWPOS_CENTERED,
                                         SDL_WINDOWPOS_CENTERED, 960, 720, SDL_WINDOW_RESIZABLE);
    SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);
    if (!ren) ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_SOFTWARE);
    SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "0");
    SDL_RenderSetLogicalSize(ren, 640, 480);
    SDL_Texture*  tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888,
                                          SDL_TEXTUREACCESS_STREAMING, 640, 480);
    std::vector<uint32_t> fb(640 * 480, 0xFF000000u);

    const char* state_name[] = {"TITLE", "PLAY", "PAUSE", "CAUGHT", "WIN", "GAME OVER", "?", "?"};
    bool   running = true;
    long   frames  = 0;
    Uint32 next    = SDL_GetTicks();
    Uint32 fps_t0  = SDL_GetTicks();
    int    fps_n   = 0;

    while (running) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT) running = false;
            if (e.type == SDL_KEYDOWN && e.key.keysym.sym == SDLK_ESCAPE) running = false;
        }
        const Uint8* k = SDL_GetKeyboardState(NULL);
        top->btn = (k[SDL_SCANCODE_UP]    ? 1  : 0) | (k[SDL_SCANCODE_DOWN]  ? 2 : 0) |
                   (k[SDL_SCANCODE_LEFT]  ? 4  : 0) | (k[SDL_SCANCODE_RIGHT] ? 8 : 0) |
                   ((k[SDL_SCANCODE_SPACE] || k[SDL_SCANCODE_RETURN]) ? 16 : 0);
        top->rst = k[SDL_SCANCODE_R] ? 1 : 0;

        // If this computer is slower than 60 frames per second, still simulate
        // every frame but only draw some of them.
        Uint32 now  = SDL_GetTicks();
        bool   late = (now > next + 34);
        run_frame(fb.data(), !late);
        frames++; fps_n++;
        next += 1000 / 60;
        if (late && now > next + 250) next = now;          // too far behind : stop trying to catch up

        if (!late) {
            SDL_UpdateTexture(tex, NULL, fb.data(), 640 * sizeof(uint32_t));
            SDL_RenderClear(ren);
            SDL_RenderCopy(ren, tex, NULL, NULL);
            SDL_RenderPresent(ren);
            now = SDL_GetTicks();
            if (now < next) SDL_Delay(next - now);
        }

        if (SDL_GetTicks() - fps_t0 >= 500) {
            int fps = fps_n * 2; fps_n = 0; fps_t0 = SDL_GetTicks();
            char title[160];
            snprintf(title, sizeof title,
                     "SLIME MAZE (simulation)  |  %s  score %04X  lives %d  form %d  king %2ds  |  %d game frames/s",
                     state_name[top->state & 7], (unsigned)top->score, (int)top->lives,
                     (int)top->form, (int)top->ksec, fps);
            SDL_SetWindowTitle(win, title);
        }
        if (max_frames && frames >= max_frames) running = false;
    }
    printf("frames=%ld state=%d score=%04X lives=%d form=%d\n", frames, (int)top->state,
           (unsigned)top->score, (int)top->lives, (int)top->form);
    SDL_Quit();
    return 0;
}
