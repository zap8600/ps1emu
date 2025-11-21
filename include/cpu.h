#include <stdint.h>
#include "interconnect.h"

#ifndef _CPU_H
#define _CPU_H 1

typedef struct cpu_t {
    uint32_t pc;
    interconnect_t interconnect;
} cpu_t;

// Initialize the CPU structure
void cpu_init(cpu_t* cpu, uint8_t* bios_source);

// Load a 32-bit value
uint32_t cpu_load_32(cpu_t* cpu, uint32_t addr);

#endif