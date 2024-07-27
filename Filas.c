#include <stdio.h>

// Función para imprimir la matriz
void imprimirMatriz(int filas, int columnas, int matriz[filas][columnas]) {
    printf("La matriz ingresada es:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");


        
    }
}

int main() {
    int filas, columnas;

    printf("Bienvenidos a mi programa de Matrices\n");

    printf("Ingresa el numero de filas: ");
    scanf("%d", &filas);
    printf("Ingresa el numero de columnas: ");
    scanf("%d", &columnas);

    int matriz[filas][columnas];

    printf("Ingresa los elementos de la matriz %dx%d:\n", filas, columnas);
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    imprimirMatriz(filas, columnas, matriz);

    printf("La matriz ingresada tiene %d filas y %d columnas.\n", filas, columnas);

    return 0;
}