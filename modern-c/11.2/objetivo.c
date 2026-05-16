#include <stdio.h>

typedef struct objetivo {
    int id;
    int secreto;
} OBJETIVO;

void revelar(OBJETIVO *t) {
    printf("id: %d en dirección: %p\n", t->id, (void *) &t->id);
    printf("secreto: %d en dirección: %p\n", t->secreto, (void *) &t->secreto);
}

void corromper(OBJETIVO *t) {
    t->secreto = 0;
}

int main(void) {
    OBJETIVO blanco = {.id = 1, .secreto = 42};
    revelar(&blanco);
    corromper(&blanco);
    revelar(&blanco);
}
