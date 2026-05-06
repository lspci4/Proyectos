#include <stdio.h>

int main(void) {
    char *invalido;

    if (invalido) {
        printf("invalido es no-nulo, intentando imprimir...\n");
        printf("%s\n", invalido);
    } else {
        printf("invalido resulto ser 0\n");
    }
}
