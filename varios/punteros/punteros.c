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
    int nums[] = {10,20,30,40,50};
    int *p = nums;
    
    // sizeof solo puede darme el tamaño real del arreglo si estoy en el mismo ámbito donde fue declarado como array.
    // Si lo paso a una función, se convierte en puntero y sizeof ya no sirve para contar elementos.
    unsigned int len = sizeof(nums) / sizeof(nums[0]);
    printf("Largo del arreglo: %d\n", len);
    
    printf("=== RECORRIENDO ARRAY CON PUNTEROS ===\n");
    for(int i = 0; i < len; i++){
        printf("nums[%d] = %d (dirección %p)\n", i, *(p + i), p + i);
    }
    
    return 0;
}

