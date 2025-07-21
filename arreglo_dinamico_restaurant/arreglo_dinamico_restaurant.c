#include <stdio.h>
#include <stdlib.h>

int* abrir_restaurante(int numero_mesas){
    int *mesas = malloc(numero_mesas * sizeof(int));
    if(mesas == NULL){
        printf("[-] No hay espacio para las mesas\n");
    }

    printf("[+] Restaurante abierto con %d mesas\n", numero_mesas);
    for(int i = 0; i < numero_mesas; i++){
        mesas[i] = numero_mesas == 0 ? 1: 0;
        printf("    - Mesa %d: Disponible\n", i);
    }

    //Mostrar estado inicial
    for(int i = 1; i < numero_mesas; i++ ){
        printf("");
    }
    return mesas;
}

int main(){
    int cantidad_mesas = 2;

    printf("[+] Abriendo Restaurnte...\n");
    int *mesas = abrir_restaurante(cantidad_mesas);

    free(mesas);
    printf("[+] Resaturant cerrado\n");
    return 0;
}