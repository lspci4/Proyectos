#include <stdio.h>

void saludar(void) {
    puts("soy saludar");
}

void atacar(void) {
    puts("soy atacar");
}

typedef void accion(void);

int main(void) {
    accion *fp = saludar;
    fp();

    fp = atacar;
    fp();
}
