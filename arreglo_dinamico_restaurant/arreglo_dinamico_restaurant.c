#include <stdio.h>
#include <stdlib.h>

int* abrir_restaurante(int numero_mesas){
    int *mesas = malloc(numero_mesas * sizeof(int));
    if(mesas == NULL){
        printf("[-] No hay espacio para las mesas\n");
    }

    printf("[+] Restaurante abierto con %d mesas\n", numero_mesas);
    for(int i = 0; i < numero_mesas; i++){
        mesas[i] = (i == 0) ? 1: 0;
        printf("    - Mesa %d: Disponible\n", i);
    }

    //Mostrar estado inicial
    for(int i = 1; i < numero_mesas; i++ ){
        printf("");
    }
    return mesas;
}

// Función para intentar reservar una mesa
int reservar_mesa(int *mesas, int numero_mesas, int mesa_a_reservar) {
    if (mesa_a_reservar < 0 || mesa_a_reservar >= numero_mesas) {
        printf("[-] Error: Mesa %d no existe\n", mesa_a_reservar);
        return -1;  // Código de error
    }

    if (mesas[mesa_a_reservar] == 1) {
        printf("[-] Mesa %d ya está ocupada. No se puede reservar\n", mesa_a_reservar);
        return 0;  // Reserva fallida
    } else {
        mesas[mesa_a_reservar] = 1;
        printf("[+] Mesa %d reservada con éxito\n", mesa_a_reservar);
        return 1;  // Reserva exitosa
    }
}

int main(){
    int cantidad_mesas = 3;

    printf("[+] Abriendo Restaurnte...\n");
    int *mesas = abrir_restaurante(cantidad_mesas);

        // --- PRUEBA 1: Intentar reservar una mesa ya ocupada (mesa 0) ---
    printf("\n[TEST] Intentando reservar mesa 0 (ya ocupada):\n");
    reservar_mesa(mesas, cantidad_mesas, 0);

    // --- PRUEBA 2: Reservar una mesa disponible (mesa 1) ---
    printf("\n[TEST] Intentando reservar mesa 1 (disponible):\n");
    reservar_mesa(mesas, cantidad_mesas, 1);

    // --- PRUEBA 3: Intentar reservar una mesa inexistente ---
    printf("\n[TEST] Intentando reservar mesa 5 (inexistente):\n");
    reservar_mesa(mesas, cantidad_mesas, 5);

    free(mesas);
    printf("[+] Resaturant cerrado\n");
    return 0;
}