/*
=== Tarea principal===
Construir un arreglo dinámico en C, similar a un ArrayList de Java o vector de C++, 
que pueda crecer automáticamente y permita insertar y eliminar elementos.

=== Objetivos funcionales ===
Inicializar un arreglo con una capacidad inicial.
Insertar elementos.
Redimensionar el arreglo automáticamente si se llena.
Eliminar el último elemento.
Imprimir el contenido del arreglo.
Liberar memoria al finalizar.
*/
#include <stdio.h>
#include <stdlib.h>

// Prototipos
void crear_arreglo(int capacidad);

int main(){
    // Inicializar arreglo
    int capacidad = 2;

    crear_arreglo(capacidad);
    return 0;
}

void crear_arreglo(int capacidad){
    int *arr= malloc(capacidad * sizeof(int));
    if(arr == NULL){
        printf("[-] Error asignando memoria\n");
    }else{
        printf("[+] Asignación de memoria exitosa\n");
        free(arr);
    }
}