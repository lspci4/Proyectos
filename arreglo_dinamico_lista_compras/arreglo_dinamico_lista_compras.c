#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int capacidad = 2;  // espacio para 2 productos en la bolsa
    int num_productos = 0;  // Productos añadidos
    
    // Paso 1: Crear la lista con malloc (como una bolsa vacía)
    char **lista = malloc(capacidad * sizeof(char*));
    if (lista == NULL) {
        printf("No hay espacio en el carrito\n");
        return 1;
    }

    printf("[+] Bolsa de compras creada (capacidad: %d)\n", capacidad);

    // Paso 2: Añadir productos dinámicamente
    char producto[50];
    while (1) {
        printf("\nIngresa un producto: ");
        fgets(producto, 50, stdin);
        producto[strcspn(producto, "\n")] = '\0';  // Eliminar el salto de línea

        if (strcmp(producto, "fin") == 0) break;

        // Paso 3: Redimensionar la lista si está llena (usando realloc)
        if (num_productos >= capacidad) {
            capacidad += 2;  // Aumentar la capacidad en 2
            lista = realloc(lista, capacidad * sizeof(char*));
            if (lista == NULL) {
                printf("[-] La bolsa está llena No caben más productos.\n");
                break;
            }
            printf("[+] Bolsa agrandada, Nueva capacidad: %d\n", capacidad);
        }

        // Almacenar el producto, usando strdup para copiar el string
        lista[num_productos] = strdup(producto);
        num_productos++;
    }

    // Paso 4: Mostrar la lista final
    printf("\n=== LISTA FINAL ===\n");
    for (int i = 0; i < num_productos; i++) {
        printf("%d. %s\n", i+1, lista[i]);
    }

    // Paso 5: Liberar memoria, (vaciar la bolsa)
    for (int i = 0; i < num_productos; i++) {
        free(lista[i]); 
    }
    free(lista);

    printf("\n[+] Bolsa vacía.\n");
    return 0;
}
