#include <stddef.h>
#include <stdio.h>

int main(void) {
    int numeros[] = {10, 20, 30, 40, 50, 60, 70};

    // Calcula la longitud usando el truco
    size_t n = sizeof(numeros) / sizeof(numeros[0]);

    printf("El arreglo tiene %zu elementos\n", n);
    printf("sizeof(numeros) = %zu bytes\n", sizeof(numeros));
    printf("sizeof(numeros[0]) = %zu bytes\n", sizeof(numeros[0]));

    // Recorrelo usando n
    for (size_t i = 0; i < n; ++i) {
        printf("numeros[%zu] = %d\n", i, numeros[i]);
    }

    return 0;
}
