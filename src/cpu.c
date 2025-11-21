#include "../include/cpu.h"
#include <stdio.h>

void cpu_init(cpu_t* cpu, uint8_t* bios_source) {
    cpu->pc = BIOS_BASE; // Beginning of BIOS
    interconnect_init(&(cpu->interconnect), bios_source);
}

uint32_t cpu_load_32(cpu_t* cpu, uint32_t addr) {
    return interconnect_load_32(&(cpu->interconnect), addr);
}

void cpu_step(cpu_t* cpu, uint32_t inst) {
    fprintf(stderr, "Unknown instruction 0x%x!\n", inst);
}