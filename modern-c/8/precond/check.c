#include <stdio.h>

static_assert(sizeof(int) >= 4, "este programa necesita int de al menos 32 bits");
static_assert(sizeof(void *) == 8, "este programa solo corre en 64-bit");

int main(void) {
    printf("int: %zu bytes\n", sizeof(int));
    printf("void*: %zu bytes\n", sizeof(void *));
    return 0;
}
