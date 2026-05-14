#include <stdio.h>

int main(void) {
    double A[2] = {0.0, 1.0};
    double *p = &A[0];

    printf("elemento %g\n", *p);
    ++p;
    printf("elemento %g\n", *p);
    ++p;
    printf("elemento %g\n", *p);
}
