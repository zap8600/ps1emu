#ifndef _PS1EMU_H
#define _PS1EMU_H 1

/**
    To use ps1emu.h.h for the bare minimum, the following:

    #define PS1EMU_IMPLEMENTATION

    #include "mini-rv32ima.h"
*/

struct ps1emu_state_t {
    unsigned int pc;
};

// #ifdef PS1EMU_IMPLEMENTATION

int ps1emu_step(struct ps1emu_state_t* state) {
    //
}

// #endif

#endif