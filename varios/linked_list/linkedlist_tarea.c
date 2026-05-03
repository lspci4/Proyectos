#include <stdio.h>

// Definimos un nodo como tarea
struct Tarea{
    int id; // id de la tarea
    struct Tarea* siguiente;// Puntero a la siguiente tarea
};
typedef struct Tarea Tarea; // Creamos un alias

void imprimirLista(Tarea* inicio){
    Tarea* actual = inicio;
    while (actual != NULL)
    {
        printf("Tarea %d -> ", actual->id);
        actual = actual->siguiente;
    }    
}

int main(){
    // Creamos 3 Tareas
    Tarea tarea1, tarea2, tarea3;

    // Asginamos valores
    tarea1.id = 101;
    tarea2.id = 202;
    tarea3.id = 303;

    // Enlazamos las tareas: tarea1->tarea2->tarea3->NULL
    tarea1.siguiente = &tarea2; // la tarea1 apunta a tarea2
    tarea2.siguiente = &tarea3; // la tarea2 apunta a tarea3
    tarea3.siguiente = NULL;    // la tarea3 no tiene siguiente (fin de la lsita)

    // El inicio de la lista es tarea1
    Tarea* inicioDeLaLista = &tarea1;

    // Imprimir la lista
    imprimirLista(inicioDeLaLista);

    return 0;
}