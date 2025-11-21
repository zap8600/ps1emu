#include <stdint.h>

#ifndef _BIOS_H
#define _BIOS_H 1

#define BIOS_SIZE (512 * 1024) // 512KB

typedef struct bios_t {
    uint8_t* data;
} bios_t;

// Initialize the BIOS structure
void bios_init(bios_t* bios, uint8_t* source);

// Load a 32-bit byte value from the BIOS data
uint32_t bios_load_32(bios_t* bios, uint32_t offset);

#endif