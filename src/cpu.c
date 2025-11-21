#include "../include/cpu.h"

void cpu_init(cpu_t* cpu, uint8_t* bios_source) {
    cpu->pc = 0xbfc00000; // Beginning of BIOS
    bios_init(&(cpu->bios), bios_source);
}