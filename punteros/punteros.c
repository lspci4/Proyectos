//5. Puntero a puntero 
#include <stdio.h>

int main(){
    //1. variables normales
    int x = 10;
    char y = 'X';
    
    //2. Punteros
    int *p1 = &x;
    char *p2 = &y;
    
    printf("=== VALORES ORIGINALES ===\n");
    printf("valor x: %d (dirección de x: %p)\n", x, &x);
    printf("valor y: %c (dirección de y: %p)\n\n", y, &y);
    
    //3. Modificación a través de punteros
    *p1 = 50;
    *p2 = 'J';
    
    printf("=== VALORES MODIFICADOS CON PUNTEROS ===\n"); 
    printf("x: %d (dirección de x: %p)\n", x, &x);
    printf("y: %c (dirección de y: %p)\n\n", y, &y);
    
    //4. Aritmética de punteros

    return 0;
}
