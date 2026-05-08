#include <stdio.h>

struct persona {
    char const *nombre;
    double altura;
    int edad;
};

int main(void) {
    printf("ziseof(struct persona) = %zu\n", sizeof(struct persona));
    return 0;
}
