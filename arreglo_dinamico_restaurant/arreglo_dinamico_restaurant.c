#include <stdio.h>
#include <stdlib.h>

int* abrir_restaurante(int numero_mesas) {
    int *mesas = malloc(numero_mesas * sizeof(int));
    if(mesas == NULL) {
        printf("[-] Error: No se pudo crear el restaurante\n");
        return NULL;
    }

    // Inicializar mesas (mesa 0 ocupada, otras disponibles)
    for(int i = 0; i < numero_mesas; i++) {
        mesas[i] = (i == 0) ? 1 : 0;
    }
    
    printf("[+] Restaurante abierto con %d mesas\n", numero_mesas);
    return mesas;
}

// Función para añadir más mesas (usa realloc)
int* agregar_mesas(int *mesas, int *numero_mesas_actual, int mesas_adicionales) {
    int nuevo_total = *numero_mesas_actual + mesas_adicionales;
    int *nuevas_mesas = realloc(mesas, nuevo_total * sizeof(int));
    
    if(nuevas_mesas == NULL) {
        printf("[-] Error: No se pudieron agregar mesas\n");
        return mesas; // Retorna el arreglo original sin cambios
    }

    // Inicializar las nuevas mesas como disponibles
    for(int i = *numero_mesas_actual; i < nuevo_total; i++) {
        nuevas_mesas[i] = 0;
    }
    
    *numero_mesas_actual = nuevo_total;
    printf("[+] Se agregaron %d mesas. Total ahora: %d\n", mesas_adicionales, nuevo_total);
    return nuevas_mesas;
}

void mostrar_estado_mesas(int *mesas, int total_mesas) {
    printf("\n[ Estado actual de mesas ]\n");
    for(int i = 0; i < total_mesas; i++) {
        printf("Mesa %d: %s\n", i, mesas[i] ? "OCUPADA" : "DISPONIBLE");
    }
}

int main() {
    int total_mesas = 3;
    int *mesas = abrir_restaurante(total_mesas);
    if(mesas == NULL) return 1;

    mostrar_estado_mesas(mesas, total_mesas);

    // Agregar 2 mesas más usando realloc
    mesas = agregar_mesas(mesas, &total_mesas, 2);
    mostrar_estado_mesas(mesas, total_mesas);

    // Reservar una de las nuevas mesas (mesa 3)
    printf("\n[+] Intentando reservar mesa 3:\n");
    if(mesas[3] == 0) {
        mesas[3] = 1;
        printf("[+] Mesa 3 reservada con éxito\n");
    } else {
        printf("[-] Mesa 3 ya está ocupada\n");
    }

    mostrar_estado_mesas(mesas, total_mesas);

    free(mesas);
    printf("\n[+] Restaurante cerrado. Todas las mesas liberadas\n");
    return 0;
}