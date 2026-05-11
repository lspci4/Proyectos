#include <stdio.h>

int main(int argc, char *argv[argc + 1]) {
    if (argc < 2) {
        fprintf(stderr, "uso: %s <texto>", argv[0]);
        return 1;
    }

    printf("inseguro: ");
    printf(argv[1]);
    printf("\n");

    printf("seguro: ");
    printf("%s", argv[1]);
    printf("\n");
    return 0;
}
