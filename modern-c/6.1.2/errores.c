#include <stdio.h>

int main(void) {
    int a[3] = {1, 2, 3};
    int b[3] = {1, 2, 3};

    // Intento 1: asignar un arreglo a otro
    a = b;

    // Intento 2: comparar con ==
    if (a == b) {
        printf("son iguales \n");
    }

    return 0;
}
