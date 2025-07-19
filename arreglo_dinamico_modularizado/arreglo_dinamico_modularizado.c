/*
=== Tarea principal===
Construir un arreglo dinámico en C, similar a un ArrayList de Java o vector de C++, 
que pueda crecer automáticamente y permita insertar y eliminar elementos.

=== Objetivos funcionales ===
1 Inicializar un arreglo con una capacidad inicial.
2 Insertar elementos.
3 Redimensionar el arreglo automáticamente si se llena.
4 Eliminar el último elemento.
5 Imprimir el contenido del arreglo.
6 Liberar memoria al finalizar.
*/
#include <stdio.h>
#include <stdlib.h>

// Prototipos
int *crear_arreglo(int capacidad);
int *insertar_elemento(int *arreglo, int *tamaño, int *capacidad, int valor);

int main(){
    // Inicializar arreglo
    int capacidad = 2;
    int tamaño = 0;

    // Desafio 1
    int *arreglo = crear_arreglo(capacidad);
    if(arreglo == NULL){
        return 1;
    }

    // Desafio 2 y 3
    arreglo = insertar_elemento(&arreglo, &tamaño, &capacidad, 10);
    arreglo = insertar_elemento(&arreglo, &tamaño, &capacidad, 20);
    
    printf("%d", arreglo);
    return 0;
}

// crear arreglo y retornar puntero
int *crear_arreglo(int capacidad){
    int *arreglo= malloc(capacidad * sizeof(int));
    if(arreglo == NULL){
        printf("[-] Error asignando memoria\n");
    }else{
        printf("[+] Asignación de memoria exitosa con capacidad: %d\n", capacidad);
    }
    return arreglo;
}

// Insertar elementos y redimiensionar arreglo
int *insertar_elemento(int *arreglo, int *tamaño, int *capacidad, int valor){
    if(*tamaño >= *capacidad){
        int nueva_capacidad = (*capacidad) *2;
        int *nuevo_arreglo = realloc(arreglo, nueva_capacidad * sizeof(int));
        if(nuevo_arreglo == NULL){
            printf("[-] No se puede redimensionar el arreglo\n");
            return arreglo;
        }
        arreglo = nuevo_arreglo;
        *capacidad = nueva_capacidad;
        printf("[+] Arreglo redimiensionado a nueva capacidad: %d\n", *capacidad);
    }
    arreglo[*tamaño] = valor;
    (*tamaño)++;
    printf("Insertado: %d (tamaño actual: %d)\n", valor,*tamaño);
}