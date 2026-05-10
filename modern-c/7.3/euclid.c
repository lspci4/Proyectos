#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    assert(a >= 0); // precondición: a no negativo
    assert(b >= 0); // precondición: b no negativo
    assert(a <= b); // precondición: a es el menor
    if (a == 0)
        return b;
    int r = b % a;
    return gcd(r, a);
}

int main(void) {
    printf("gcd(18, 30) = %d\n", gcd(18, 30));
    printf("gcd(8, 12)  = %d\n", gcd(8, 12));
    printf("gcd(7, 13)  = %d\n", gcd(7, 13));
    printf("gcd(-3, 6) = %d\n", gcd(-3, 6));
    return EXIT_SUCCESS;
}
