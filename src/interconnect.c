#include "../include/interconnect.h"
#include <stdio.h>

void interconnect_init(interconnect_t* interconnect, uint8_t* bios_source) {
    bios_init(&(interconnect->bios), bios_source);
}

uint32_t interconnect_load_32(interconnect_t* interconnect, uint32_t address) {
    if((address >= BIOS_BASE) && (address < (BIOS_BASE + BIOS_SIZE))) {
        return bios_load_32(&(interconnect->bios), address - BIOS_BASE);
    } else {
        fprintf(stderr, "Address 0x%x is not in valid range!\n", address);
    }
}