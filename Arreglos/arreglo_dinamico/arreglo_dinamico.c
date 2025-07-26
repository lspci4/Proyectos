/*
    ==== Arreglo Dinamico ====
    Inicia con capacidad para 2 elementos
    Agrega 5 números uno por uno
    Duplica su tamaño cuando se llena
    Imprime el arreglo al final
    Libera la memoria al terminar
*/
#include <stdio.h> // necesario para entradas y salidas printf
#include <stdlib.h> // necesario para malloc, realloc

int main(){
    int capacidad = 2; //capacidad Inicial
    int elementos = 0; //cantidad de elemento actuales
    int *arr= malloc(capacidad * sizeof(int)); // reserva memoria dinamica

    // Agregar 5 elemento uno por uno
    for(int i=0; i < 5; i++){
        // Si esta lleno duplicar la capacidad
        if(elementos == capacidad){
            capacidad *=2;
            int *new_arr = realloc(arr, capacidad * sizeof(int)); // redimensionar 
            if(new_arr == NULL){
                printf("[-] Error de memoria..\n");
                free(arr);
                return 1;
            } 
            arr = new_arr; // actualizar el puntero original
        }
        arr[elementos] = i; // insertar elemento
        elementos++; // aumentar tamaño actual
    }
    printf("Elementos del arreglo dinamico:\n");
    for(int i = 0; i < elementos; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr); // liberar memoria
    return 0;

}