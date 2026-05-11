#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[argc + 1]) {
    if (argc < 2) {
        fprintf(stderr, "uso: %s <texto>", argv[1]);
        return 1;
    }
    char destino[10];
    char canario[10] = "INTACTO";

    strcpy(destino, argv[1]);

    printf("destino: %s\n", destino);
    printf("canario: %s\n", canario);

    return 0;
}
