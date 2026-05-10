#include <stdio.h>

int cuadrado(int x);
int abs_int(int x);
void saludar(char const *nombre);

int main(void) {
    printf("cuadrado(7)  = %d\n", cuadrado(7));
    printf("abs_int(-5)  = %d\n", abs_int(-5));
    printf("abs_int(10)  = %d\n", abs_int(10));

    saludar("Luis");
    saludar(nullptr);
}

int cuadrado(int x) {
    return x * x;
}

int abs_int(int x) {
    if (x < 0) {
        return -x;
    }
    return x;
}

void saludar(char const *nombre) {
    if (nombre == nullptr)
        return; // 7.2: primer return (sin valor, función void)
    printf("Hola, %s!\n", nombre);
    // 7.4: caer al final equivale a return;
    // 7.5: legal porque la función es void
}
