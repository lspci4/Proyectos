#include <stdio.h>

int *get_local(void) {
    int x = 42;
    return &x; // ← UB: x muere al retornar la función
}

int main(void) {
    int *p = get_local();
    printf("%d\n", *p); // acceso a stack muerto
}
