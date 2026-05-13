#include <stdio.h>

double sum0(size_t len, double const *a);

int main(void) {
    double A[3] = {10.0, 20.0, 30.0};
    double *p = &A[0];
    size_t len = sizeof(A) / sizeof(A[0]);

    printf("p     apunta a: %p\n", (void *) p);
    printf("p + 1 apunta a: %p\n", (void *) (p + 1));
    printf("p + 2 apunta a: %p\n", (void *) (p + 2));

    printf("\n");
    printf("*p       = %g\n", *p);
    printf("*(p + 1) = %g\n", *(p + 1));
    printf("*(p + 2) = %g\n", *(p + 2));

    double total = sum0(len, A);
    printf("suma = %g\n", total);
    return 0;
}

double sum0(size_t len, double const *a) {
    double ret = 0.0;
    for (size_t i = 0; i < len; ++i) {
        ret += *(a + i);
    }
    return ret;
}
