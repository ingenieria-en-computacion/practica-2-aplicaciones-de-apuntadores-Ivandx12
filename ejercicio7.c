// 7. Accediendo a la Memoria
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    // Código para imprimir direcciones de memoria aquí
    printf("holo\n");
    for(int i = 0; i < 5; i++){
        printf("arr[%d] está en la dirección: %p\n", i, &arr[i]);
    }
    return 0;
}
