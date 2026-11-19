// SLIME MAZE : playable simulation of the real Verilog (Verilator + SDL2), fast version.
//
// slime_logic.v and slime_draw.v are simulated as they are (see fast_top.v).  To reach 60 frames per
// second on a laptop, vga_sync is replaced by this program:
//   - slime_logic gets 64 clocks per frame, with one "tick" and one "tick2" pulse
//     (on the board it gets 420,000 clocks per frame, but only those two pulses
//     make things move)
//   - slime_draw is combinational, so it is simply asked for the colour of each
//     of the 640 x 480 pixels
// Use "make run-exact" for the slow version that also clocks vga_sync pixel by pixel.
//
//   Arrow keys = BTNU/BTND/BTNL/BTNR     Space or Enter = BTNC
//   R = CPU RESET                        Esc = quit
#include "Vfast_top.h"
#include "verilated.h"
#include <SDL.h>
#include <cstdio>
#include <cstdint>
#include <cstdlib>
#include <vector>

static Vfast_top* top;

static inline void clock_logic() {
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();
}

// one video frame of game logic
static void step_logic() {
    for (int c = 0; c < 64; c++) {
        top->tick  = (c == 0);
        top->tick2 = (c == 32);
        clock_logic();
    }
    top->tick = 0; top->tick2 = 0;
}

// one video frame of picture
static void render(uint32_t* fb) {
    for (int y = 0; y < 480; y++) {
        top->y = y;
        for (int x = 0; x < 640; x++) {
            top->x = x;
            top->eval();
            uint32_t c = top->rgb;
            uint32_t r = ((c >> 8) & 15) * 17, g = ((c >> 4) & 15) * 17, b = (c & 15) * 17;
            fb[y * 640 + x] = 0xFF000000u | (r << 16) | (g << 8) | b;
        }
    }
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    int max_frames = (argc > 1) ? atoi(argv[1]) : 0;      // optional: stop after N frames (for testing)

    top = new Vfast_top;
    top->btn = 0; top->x = 0; top->y = 0;
    top->tick = top->tick2 = 0;
    top->rst = 1; for (int i = 0; i < 8; i++) clock_logic();
    top->rst = 0;

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
        top->btn = (k[SDL_SCANCODE_UP]    ? 1 : 0) | (k[SDL_SCANCODE_DOWN]  ? 2 : 0) |
                   (k[SDL_SCANCODE_LEFT]  ? 4 : 0) | (k[SDL_SCANCODE_RIGHT] ? 8 : 0) |
                   ((k[SDL_SCANCODE_SPACE] || k[SDL_SCANCODE_RETURN]) ? 16 : 0);
        top->rst   = k[SDL_SCANCODE_R];

        step_logic();
        frames++; fps_n++;

        // game speed is locked to 60 frames per second; if drawing is too slow,
        // some pictures are skipped but the game logic never is
        Uint32 now  = SDL_GetTicks();
        next += (frames % 3 == 0) ? 16 : 17;               // 50 ms per 3 frames = 60 Hz
        if (now > next + 250) next = now;
        if (now <= next + 17) {
            render(fb.data());
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
