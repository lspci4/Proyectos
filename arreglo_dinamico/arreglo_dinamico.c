/*
arreglo_dinamico.c
    Vamos a crear un arreglo que:
    Inicia con capacidad para 2 elementos
    Agrega 5 números uno por uno
    Duplica su tamaño cuando se llena
    Imprime el arreglo al final
    Libera la memoria al terminar
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int capacidad = 2;
    int elementos = 0;
    int *arr= malloc(capacidad * sizeof(int));

}