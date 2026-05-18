#include <stdio.h>

void saludar(void) {
    puts("soy saludar");
}
void atacar(void) {
    puts("soy atacar");
}

typedef void accion(void);

int main(void) {
    printf("saludar vive en %p\n", (void *) saludar);
    printf("atacar  vive en %p\n", (void *) atacar);

    accion *fp = saludar;
    printf("la caja fp esta en %p, guarda %p -> ", (void *) &fp, (void *) fp);
    fp();

    fp = atacar;
    printf("la caja fp esta en %p, guarda %p -> ", (void *) &fp, (void *) fp);
    fp();
}
