#include <stdint.h>
#include <stdio.h>

int main(void) {
    uint32_t n = 0xAABBCCDD;
    printf("valor: 0x%X  (%zu bytes)\n", n, sizeof n);

    // el MISMO objeto n, visto como bytes crudos (Concl. 12.3)
    unsigned char *bytes = (unsigned char *) &n;
    for (size_t i = 0; i < sizeof n; ++i)
        printf("byte[%zu] = 0x%02X\n", i, bytes[i]);
}
