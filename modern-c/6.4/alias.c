#include <stdio.h>

typedef struct persona persona;
struct persona {
    char const *nombre;
    double altura;
    int edad;
};

persona cumplir_anos(persona x) {
    x.edad += 1;
    return x;
}

int main(void) {
    persona p = {.nombre = "Luis", .altura = 1.73, .edad = 48};
    persona p_viejo = cumplir_anos(p);

    printf("%s, edad: %d\n", p.nombre, p.edad);
    printf("%s_viejo, edad: %d\n", p_viejo.nombre, p_viejo.edad);

    printf("sizeof(persona)     = %zu\n", sizeof(persona));
    printf("sizeof(struct persona) = %zu\n", sizeof(struct persona));
}
