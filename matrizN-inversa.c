#include <stdio.h>

// Función para imprimir una matriz
void imprimirMatriz(double matriz[3][6]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%6.2f ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    double matriz[3][6] = {
        {1, 2, 3, 1, 0, 0},
        {4, 5, 6, 0, 1, 0},
        {7, 8, 9, 0, 0, 1}
    };

    printf("Matriz aumentada inicial:\n");
    imprimirMatriz(matriz);

    // Aplicar operaciones para convertir la matriz a la forma escalonada reducida por filas
    for (int i = 0; i < 3; i++) {
        // Dividir la fila i por matriz[i][i] para hacer el pivote 1
        double pivote = matriz[i][i];
        if (pivote == 0) {
            printf("La matriz no tiene inversa.\n");
            return 1;
        }
        for (int j = 0; j < 6; j++) {
            matriz[i][j] /= pivote;
        }

        // Hacer ceros en las demás filas en la columna del pivote
        for (int k = 0; k < 3; k++) {
            if (k != i) {
                double factor = matriz[k][i];
                for (int j = 0; j < 6; j++) {
                    matriz[k][j] -= factor * matriz[i][j];
                }
            }
        }

        printf("Paso %d:\n", i + 1);
        imprimirMatriz(matriz);
    }

    // La inversa está en las columnas 3 a 5
    double inversa[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            inversa[i][j] = matriz[i][j + 3];
        }
    }

    printf("Matriz inversa:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%6.2f ", inversa[i][j]);
        }
        printf("\n");
    }

    return 0;
}