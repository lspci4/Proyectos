#include <stdio.h>
#include <string.h>

int main(void) {
    char saludo[] = "hola";

    printf("sizeof = %zu\n", sizeof(saludo));
    printf("strlen = %zu\n", strlen(saludo));

    return 0;
}
