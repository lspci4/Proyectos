#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *registro = fopen("mensajes.log", "a");
    if (registro == nullptr) {
        perror("no se pudo abrir mensajes.log");
        return EXIT_FAILURE;
    }
    fputs("hola desde el log\n", registro);
    fputs("una segunda linea\n", registro);
    fclose(registro);
    puts("escrito.");
    return EXIT_SUCCESS;
}
