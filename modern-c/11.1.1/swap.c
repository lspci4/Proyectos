#include <stdio.h>

void double_swap(double *p0, double *p1);

int main(void) {
    double d0 = 1.5;
    double d1 = 9.9;

    printf("antes: d0 = %g, d1 = %g\n", d0, d1);
    double_swap(&d0, &d1); // pasamos direcciones, no valores
    printf("despues: d0 = %g, d1 = %g\n", d0, d1);
    return 0;
}

void double_swap(double *p0, double *p1) {
    // p0 ahora contiene la dirección de d0
    // p1 ahora contiene la dirección de d1
    // (porque main pasó &d0 y &d1)

    double tmp = *p0;
    //          ^^^ aplico * a la dirección p0 -> me devuelve d0 ( que vale 1.5)

    *p0 = *p1;
    //   ^^^ desreferencio p1 -> me devuelve d1 (que vale 9.9)
    //  ^^^ desreferencio p0 -> me da acceso a d0 para escribir
    //  resultado: d1 ahora vale 1.5

    *p1 = tmp;
}
