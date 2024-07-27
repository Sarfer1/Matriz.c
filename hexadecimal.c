#include <stdio.h>

int main(){
    int matriz1[3][3]; // Declaración de la primera matriz 3x3
    int matriz2[3][3]; // Declaración de la segunda matriz 3x3
    int suma[3][3]; // Declaración de la matriz para almacenar la suma de matriz1 y matriz2

    // Ingresar los elementos de la primera matriz
    printf("Ingrese los elementos de la primera matriz (3x3):\n");
    for (int i = 0; i < 3; i++) { // Recorre las filas de la matriz
        for (int j = 0; j < 3; j++) { // Recorre las columnas de la matriz
            printf("Elemento [%d][%d]: ", i, j); // Pide al usuario que ingrese cada elemento
            scanf("%d", &matriz1[i][j]); // Guarda el valor ingresado en la matriz1
        }
    }

    // Ingresar los elementos de la segunda matriz
    printf("Ingrese los elementos de la segunda matriz (3x3):\n");
    for (int i = 0; i < 3; i++) { // Recorre las filas de la matriz
        for (int j = 0; j < 3; j++) { // Recorre las columnas de la matriz
            printf("Elemento [%d][%d]: ", i, j); // Pide al usuario que ingrese cada elemento
            scanf("%d", &matriz2[i][j]); // Guarda el valor ingresado en la matriz2
        }
    }

    // Sumar las dos matrices
    for (int i = 0; i < 3; i++) { // Recorre las filas de las matrices
        for (int j = 0; j < 3; j++) { // Recorre las columnas de las matrices
            suma[i][j] = matriz1[i][j] + matriz2[i][j]; // Suma los elementos correspondientes y los guarda en la matriz suma
        }
    }

    // Imprimir la suma de las matrices en hexadecimal
    printf("La suma de las dos matrices en hexadecimal es:\n");
    for (int i = 0; i < 3; i++) { // Recorre las filas de la matriz suma
        for (int j = 0; j < 3; j++) { // Recorre las columnas de la matriz suma
            printf("%x ", suma[i][j]); // Imprime cada elemento de la matriz suma en formato hexadecimal
        }
        printf("\n"); // Salto de línea después de imprimir cada fila de la matriz
    }

    return 0; // Fin del programa
}