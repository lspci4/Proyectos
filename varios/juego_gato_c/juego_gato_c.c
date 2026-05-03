#include <stdio.h>

void inicializa_tablero(char tablero[3][3]);
void mostrar_tablero(char tablero[3][3]);

int main()
{
    // Declaración del tablero 3x3
    char tablero[3][3];
    
    inicializa_tablero(tablero);
    mostrar_tablero(tablero);
    
	return 0;
}

// llena el tablero con los caracteres del '1' al '9'
void inicializa_tablero(char tablero[3][3]){
    int fila, columna;
    char celda = '1';
    
    for(fila = 0; fila < 3; fila++){
        for(columna = 0; columna < 3; columna++){
            tablero[fila][columna] = celda++;
            //printf("%c", tablero[fila][columna]);
        }
    }
}

// Muestra el tablero con formato
void mostrar_tablero(char tablero[3][3]){
    int fila, columna;
    
    for(fila = 0; fila < 3; fila++){
        for(columna = 0; columna < 3; columna++){
            if(columna < 2){
                printf(" %c |", tablero[fila][columna]);
            }else{
                printf(" %c ", tablero[fila][columna]);
            }
        }
        
        // separador de fila
        if(fila < 2){
            printf("\n---------\n");
        }
    }
    
    printf("\n\n");
}

