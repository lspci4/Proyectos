#include <stdio.h>
#include <stdlib.h>

int main(){
    int capacidad = 2; // Espacio para 2 productos en la bolsa
    int num_productos = 0; // Productos añadidos

    // Creo la bolsa vacia
    char *lista = malloc(capacidad * sizeof(int));
    if(lista == NULL){
        printf("No hay espacio en la bolsa\n");
        return 1;
    }

    printf("Bolsa de compras creada\n");


    return 0;
}
