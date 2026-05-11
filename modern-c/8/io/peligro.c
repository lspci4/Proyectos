#include <stdio.h>
#include <string.h>

int main(void) {
    char nombre[10];
    char canario[10] = "INTACTO";

    printf("escribe tu nombre: ");
    gets(nombre);

    printf("hola, %s\n", nombre);
    printf("canario: %s\n", canario);

    return 0;
}
