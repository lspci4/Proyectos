#include <stdio.h>

// Función que rellena el arreglo con 0, 1, 2, ...., n-1

int main(void) {
    int datos[5];

    // Calcula tamaño AFUERA (donde sí funciona)
    size_t n = sizeof(datos) / sizeof(datos[0]);
    printf("AFUERA: n=%zu", n);

    // LLena con la secuencia
    rellenar_secuencia(n, datos);

    // Imprime para ver que cambió de verdad
    for (size_t i = 0; i < n; ++i) {
        printf("datos[%zu] = %d\n", i, datos[i]);
    }

    // Demuestra el bug del sizeof adentro
    tamaño_incorrecto(datos);

    return 0;
}
