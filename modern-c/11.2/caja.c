#include <stdio.h>

typedef struct objeto {
    int id;
    int secreto;
} Objeto;

void por_valor(Objeto t) {
    printf("Por valor: t vive en %p\n", (void *) &t);
    t.secreto = 0;
}

void por_puntero(Objeto *t) {
    printf("Por puntero: t vive en %p\n", (void *) t);
    t->secreto = 0;
}

int main(void) {
    Objeto blanco = {.id = 1, .secreto = 42};
    printf("blanco vive en : %p\n", (void *) &blanco);

    por_valor(blanco);
    printf("tras por valor: secreto = %d\n", blanco.secreto);

    por_puntero(&blanco);
    printf("tras por_puntero: secreto = %d\n", blanco.secreto);
}
