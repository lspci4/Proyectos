#include <limits.h>
#include <stdckdint.h>
#include <stdio.h>

int main(void) {
    int a = INT_MAX;
    int b = 1;
    int suma;
    bool hubo_overflow = ckd_add(&suma, a, b);
    printf("a + b = %d\n", suma);
    printf("hubo_overflow = %s\n", hubo_overflow ? "true" : "false");
    return 0;
}
