#include <stddef.h>
#include <stdio.h>

void rellenar_secuencia(size_t n, int a[n]) {
    for (size_t i = 0; i < n; ++i) {
        a[i] = (int) i;
    }
}

void tamaño_incorrecto(int a[5]) {
    printf("ADENTRO: sizeof(a) = %zu \n", sizeof(a));
}

int main(void) {
    int datos[5];
    size_t n = sizeof(datos) / sizeof(datos[0]);

    printf("AFUERA: n=%zu\n", n);

    rellenar_secuencia(n, datos);
    for (size_t i = 0; i < n; ++i) {
        printf("datos[%zu] = %d\n", i, datos[i]);
    }

    tamaño_incorrecto(datos);
    return 0;
}
