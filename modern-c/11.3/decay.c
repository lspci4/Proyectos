#include <stddef.h>
#include <stdio.h>

size_t cuantos(int a[], int valor) {
    printf("sizeof(a) adentro = %zu\n", sizeof(a));
    size_t n = 0;
    for (size_t i = 0; i < 4; ++i) {
        if (a[i] == valor) {
            n++;
        }
    }
    return n;
}

int main(void) {
    int nums[4] = {10, 20, 10, 40};
    printf("sizeof(nums) en main = %zu\n", sizeof(nums));
    printf("hay %zu veces el 10\n", cuantos(nums, 10));
}
