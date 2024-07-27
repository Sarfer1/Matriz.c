#include <stdio.h>

int main() {
    int matriz1[3][3];
    int matriz2[3][3];
    int producto[3][3];

    // Ingresar los elementos de la primera matriz
    printf("Ingrese los elementos de la primera matriz (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    // Ingresar los elementos de la segunda matriz
    printf("Ingrese los elementos de la segunda matriz (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Inicializar la matriz producto a cero
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            producto[i][j] = 0;
        }
    }

    // Multiplicar las dos matrices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                producto[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    // Imprimir la matriz producto
    printf("El producto de las dos matrices es:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", producto[i][j]);
        }
        printf("\n");
    }

    return 0;
}