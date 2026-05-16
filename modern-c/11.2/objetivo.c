#include <stdio.h>

struct objetivo {
    int id;
    int secreto;
};

void revelar(struct objetivo *t) {
    printf("id: %d en dirección: %p\n", t->id, (void *) &t->id);
    printf("secreto: %d en dirección: %p\n", t->secreto, (void *) &t->secreto);
}

void corromper(struct objetivo *t) {
    t->secreto = 0;
}

int main(void) {
    struct objetivo blanco = {.id = 1, .secreto = 42};
    revelar(&blanco);
    corromper(&blanco);
    revelar(&blanco);
}
