#include <stdio.h>

int main(void) {
    char *saludo = "hola";
    printf("Antes: %s\n", saludo);
    saludo[0] = 'H';
    printf("Despues: %s\n", saludo);
    return 0;
}
