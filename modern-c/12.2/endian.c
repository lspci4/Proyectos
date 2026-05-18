#include <stdint.h>
#include <stdio.h>

typedef union {
    uint32_t val;
    unsigned char bytes[sizeof(uint32_t)];
} Inspector;

int main(void) {
    Inspector u = {.val = 1};

    printf("val  = 0x%X\n", u.val);
    for (size_t i = 0; i < sizeof u.bytes; ++i)
        printf("bytes[%zu] = 0x%02X\n", i, u.bytes[i]);
    u.bytes[0] = 0xFF;
    printf("val despues = 0x%X\n", u.val);
}
