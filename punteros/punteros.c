//3. Modificación a través de munteros
//4. Aritmética de punteros
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
    printf("valrr y: %c (dirección de y: %p)\n\n", y, &y);
    
    
    return 0;
}
