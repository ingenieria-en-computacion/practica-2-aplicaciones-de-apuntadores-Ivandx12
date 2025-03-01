// 9. Suma con Apuntadores
#include <stdio.h>

int sumaArreglo(int *arr, int tam){
    // Implementar la suma aquí
    int suma = 0;
    for (int i = 0; i < tam; i++) {
        suma += *(arr + i);  
    }
    return suma;
}

int main(){
    int numeros[j] = {1, 2, 3, 4, 5};
    // Código para calcular y mostrar la suma 
    int tam = sizeof(numeros) / sizeof(numeros[0]);
    int resultado = sumaArreglo(numeros, tam);
    printf("La suma del arreglo es: %d\n", resultado);
    return 0;
}
