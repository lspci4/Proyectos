#include <stdio.h>

int main(void) {
    char saludo[] = "hola";
    char *valido = saludo;
    char *nulo = nullptr;

    if (valido) {
        printf("valido apunta a: %s\n", saludo);
    } else {
        printf("valido es nulo\n");
    }

    if (nulo) {
        printf("nulo apunta a: %s\n", nulo);
    } else {
        printf("nulo apunta a nulo\n");
    }

    return 0;
}
