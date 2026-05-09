#include <stdio.h>

struct persona {
    char const *nombre;
    double altura;
    int edad;
};

struct persona cumplir_anos(struct persona x) {
    x.edad += 1;
    return x;
}

struct persona p = {.nombre = "Luis", .altura = 1.73, .edad = 48};

struct persona q = {.nombre = "Anon"};

int main(void) {
    printf("%s mide %.2f y tiene %d\n", p.nombre, p.altura, p.edad);
    printf("%s mide %f y tiene %d\n", q.nombre, q.altura, q.edad);

    struct persona p_copia = p;
    struct persona p_viejo = cumplir_anos(p);

    printf("copia_p: %s mide %.2f y tiene %d\n", p_copia.nombre, p_copia.altura, p_copia.edad);
    printf("p.edad: %d p_viejo.edad: %d\n", p.edad, p_viejo.edad);
}
