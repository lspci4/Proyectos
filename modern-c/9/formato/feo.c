#include <stdio.h>
#include <stdlib.h>

int cuadrado(int x) {
    return x * x;
}

int main(int argc, char *argv[argc + 1]) {
    if (argc < 2) {
        fprintf(stderr, "uso: %s <n>\n", argv[0]);
        return EXIT_FAILURE;
    }
    int n = atoi(argv[1]);
    printf("cuadrado(%d) = %d\n", n, cuadrado(n));
    return 0;
}
