#include <stdio.h>

int main(void) {
    // Arreglo de 5 enteros, todos en cero
    int a[5] = {0};

    // Arreglo donde solo defines algunas casillas
    int b[5] = {[4] = 99, [1] = 7};

    // Imprimir ambos
    for (size_t i = 0; i < 5; ++i) {
        printf("a[%zu] = %d b[%zu] = %d\n", i, a[i], i, b[i]);
    }

    return 0;
}
