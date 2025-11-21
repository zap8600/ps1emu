#include "../include/bios.h"

void bios_init(bios_t* bios, uint8_t* source) {
    bios->data = source;
}

uint32_t bios_load_32(bios_t* bios, uint32_t offset) {
    return (((uint32_t)(bios->data[offset + 3])) << 24) | (((uint32_t)(bios->data[offset + 2])) << 16) | (((uint32_t)(bios->data[offset + 1])) << 8) | ((uint32_t)(bios->data[offset]));
}