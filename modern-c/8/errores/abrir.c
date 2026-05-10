#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *f = fopen("archivo_que_no_existe.txt", "r");
    if (f == nullptr) {
        perror("no puede abrir el archivo");
        exit(EXIT_FAILURE);
    }

    puts("archivo abierto correctamente");
    fclose(f);
    return EXIT_SUCCESS;
}
