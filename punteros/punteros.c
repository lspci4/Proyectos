//5. Puntero a puntero 
#include <stdio.h>

// Función que imprime los elementos de un arreglo usando un puntero
void imprimir(int *arreglo, int cantidad_de_elementos) {
    for (int i = 0; i < cantidad_de_elementos; i++) {
        printf("Elemento %d = %d\n", i, *(arreglo + i));
    }
    printf("\n");
}

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
    int cantidad_de_elementos = sizeof(nums) / sizeof(nums[0]);
    
    imprimir(nums, cantidad_de_elementos);
    
    printf("=== RECORRIENDO ARRAY CON PUNTEROS ===\n");
    for(int i = 0; i < cantidad_de_elementos; i++){
        printf("nums[%d] = %d (dirección %p)\n", i, *(p + i), p + i);
    }
    
    return 0;
}

