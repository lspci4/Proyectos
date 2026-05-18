#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t n = 5;
    double *v = malloc(sizeof(double) * n);
    if (!v) {
        perror("malloc");
        return 1;
    }

    for (size_t i = 0; i < n; ++i)
        v[i] = (double) (i + 1);

    double suma = 0;
    for (size_t i = 0; i < n; ++i)
        suma += v[i];

    printf("suma = %g\n", suma);
    free(v);
    printf("uso despues de free: %g\n", v[0]); // ← esta línea
}
