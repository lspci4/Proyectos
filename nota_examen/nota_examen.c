#include <stdio.h>

/*Dada una nota de un examen mediante un código
escribir el literal que le corresponde a la nota.*/ 

int main(){
    char nota;
    printf("Introduzca calificación (A-F) y pulse Intro:");
    scanf("%c", &nota);

    switch (nota){
        case 'A':   puts("Excelente. Examen superado");
                    break;
        case 'B':   puts("Notable. Suficiencia");
                    break;
        case 'C':   puts("Aprobado");
                    break;
        case 'D':   
        case 'F':   puts("Suspendido");
                    break;
        default:    puts("No es posible esta nota");
    
    }
    puts("Final de programa");
    return 0;
}