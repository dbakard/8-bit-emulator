#pragma once

class chip8 {
    private:
        unsigned char memory[4096];
        unsigned char V[8];
        unsigned short I;
        unsigned short pc;
        unsigned short opcode;
        unsigned char gfx[64 * 32];
        unsigned char delay_timer;
        unsigned char sound_timer;
        unsigned short stack[16];
        unsigned short sp;
        unsigned char key[16];

    public:
        void initialize();
        void emulate_cycle();
};
