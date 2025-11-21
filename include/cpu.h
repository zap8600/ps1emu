#include <stdint.h>
#include "bios.h"

#ifndef _CPU_H
#define _CPU_H 1

typedef struct cpu_t {
    uint32_t pc;
    bios_t bios;
} cpu_t;

// Initialize the CPU structure
void cpu_init(cpu_t* cpu, uint8_t* bios_source);

#endif