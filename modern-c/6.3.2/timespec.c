#include <stdio.h>
#include <time.h>

double timespec_diff(struct timespec a, struct timespec b) {
    return (double) (a.tv_sec - b.tv_sec) + (a.tv_nsec - b.tv_nsec) / 1e9;
}

int main(void) {
    struct timespec a = {.tv_sec = 100, .tv_nsec = 500000000};
    struct timespec b = {.tv_sec = 100, .tv_nsec = 250000000};

    double diferencia = timespec_diff(a, b);

    printf("a - b = %.9f segundos\n", diferencia);

    struct timespec c = {.tv_sec = 10, .tv_nsec = 100};
    struct timespec d = {.tv_sec = 9, .tv_nsec = 999999999};
    printf("c - d = %.9f segundos\n", timespec_diff(c, d));

    struct timespec inicio;
    struct timespec fin;

    clock_gettime(CLOCK_MONOTONIC, &inicio);

    long suma = 0;
    for (long i = 0; i < 100000000L; i++) {
        suma += i;
    }

    clock_gettime(CLOCK_MONOTONIC, &fin);

    printf("La suma dio %ld\n", suma);
    printf("El cálculo tardó %.9f segundos\n", timespec_diff(fin, inicio));
}
