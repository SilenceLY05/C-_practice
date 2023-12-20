#include <stdint.h>
#include <stdio.h>

#define POLYNOMIAL 0x8408

uint16_t computeCRC(uint16_t data, uint16_t polynomial, uint16_t preset) {
    uint16_t crc = preset;

    for (int i = 0; i < 16; i++) {
        if ((crc & 0x8000) != 0) { // If the MSB of crc is 1
            crc = (crc << 1) ^ polynomial;
        }
        else {
            crc = crc << 1;
        }

        if ((data & (0x8000 >> i)) != 0) { // If the current bit of data is 1
            crc ^= 1;
        }
    }

    return crc;
}

int main() {
    uint16_t data = 0x0022;
    uint16_t crc = computeCRC(data, POLYNOMIAL, 0xBAE3);
    printf("Computed CRC for 0x22 is: 0x%04X\n", crc);
    return 0;
}
