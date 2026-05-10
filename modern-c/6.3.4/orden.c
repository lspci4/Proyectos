#include <stdio.h>

// Tres campos de tamaños DISTINTOS:
//   unsigned char       → 1 byte (alineación 1)
//   unsigned            → 4 bytes (alineación 4)
//   unsigned long long  → 8 bytes (alineación 8)

struct A {
    unsigned char c;
    unsigned i;
    unsigned long long ll;
}; // c, i, ll
struct B {
    unsigned char c;
    unsigned long long ll;
    unsigned i;
}; // c, ll, i
struct C {
    unsigned i;
    unsigned char c;
    unsigned long long ll;
}; // i, c, ll
struct D {
    unsigned i;
    unsigned long long ll;
    unsigned char c;
}; // i, ll, c
struct E {
    unsigned long long ll;
    unsigned char c;
    unsigned i;
}; // ll, c, i
struct F {
    unsigned long long ll;
    unsigned i;
    unsigned char c;
}; // ll, i, c

int main(void) {
    printf("Suma ideal (sin padding): %zu\n",
           sizeof(unsigned char) + sizeof(unsigned) + sizeof(unsigned long long));
    printf("struct A (c, i, ll)  = %zu\n", sizeof(struct A));
    printf("struct B (c, ll, i)  = %zu\n", sizeof(struct B));
    printf("struct C (i, c, ll)  = %zu\n", sizeof(struct C));
    printf("struct D (i, ll, c)  = %zu\n", sizeof(struct D));
    printf("struct E (ll, c, i)  = %zu\n", sizeof(struct E));
    printf("struct F (ll, i, c)  = %zu\n", sizeof(struct F));
}
