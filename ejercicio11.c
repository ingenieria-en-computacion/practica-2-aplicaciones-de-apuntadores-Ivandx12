// 11. Buscar en un Arreglo
#include <stdio.h>

int *buscarElemento(int *arr, int tamaño, int valor) {
    // Implementar búsqueda aquí
    for (int i = 0; i < tamaño; i++) {
        if (*(arr + i) == valor) {
            return (arr + i);
        }
    }
    return NULL;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    // Código para buscar un número y mostrar su dirección
    int tamaño = sizeof(arr) / sizeof(arr[0]);
    int valorBuscar = 30;
    printf("%p\n", arr);

    int *direccion = buscarElemento(arr, tamaño, valorBuscar);

    if (direccion != NULL) {
        printf("El valor %d se encuentra en la dirección de memoria: %p\n", valorBuscar, direccion);
    } else {
        printf("El valor %d no se encuentra en el arreglo.\n", valorBuscar);
    
    }
    return 0;
}
