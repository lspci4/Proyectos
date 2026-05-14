#include <stddef.h>
#include <stdio.h>

int main(void) {
    double A[5] = {10.0, 20.0, 30.0, 40.0, 50.0};
    double *p = &A[1];
    double *q = &A[4];

    printf("p apunta a: %g\n", *p);
    printf("q apunta a: %g\n", *q);

    printf("direccion de p: %p\n", (void *) p);
    printf("direccion de q: %p\n", (void *) q);

    //   - ptrdiff_t vive en <stddef.h>. Es el tipo oficial para diferencias entre punteros
    //   (signed).
    // - %td es el especificador de printf para imprimir un ptrdiff_t. (La t es de "ptrdiff_t", la d
    // de "decimal con signo".)
    ptrdiff_t adelante = q - p;
    ptrdiff_t atras = p - q;

    printf("q - p = %td\n", adelante);
    printf("p - q = %td\n", atras);

    return 0;
}
