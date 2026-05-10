#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[argc + 1]) {
    printf("argc = %d\n", argc);
    if (argc < 2) {
        fprintf(stderr, "Uso: %s <argumento1> [argumento2 ...]\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < argc; ++i) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    if (argv[argc] == nullptr) {
        printf("argv[%d] es nullptr ✓\n", argc);
    }
}
