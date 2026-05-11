#include <stdio.h>

int main(void) {
    puts("línea 1 con puts");
    putchar('A');
    putchar('B');
    putchar('C');
    putchar('\n');
    fputs("línea 3 con fputs (no agrega \\n)", stdout);
    putchar('\n');
    fputs("esto va a stderr\n", stderr);
    return 0;
}
