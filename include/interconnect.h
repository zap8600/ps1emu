#include "bios.h"

#ifndef _INTERCONNECT_H
#define _INTERCONNECT_H 1

typedef struct interconnect_t {
    bios_t bios;
} interconnect_t;

// Initialize the Interconnect structure
void interconnect_init(interconnect_t* interconnect, uint8_t* bios_source);

uint32_t interconnect_load_32(interconnect_t* interconnect, uint32_t address);

#endif