#include <stdio.h>

int main(){
    int matriz1[3][3];
    int matriz2[3][3];
    int resta[3][3];

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

    // Restar las dos matrices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resta[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }

    // Imprimir la resta de las matrices
    printf("La resta de las dos matrices es:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", resta[i][j]);
        }
        printf("\n");
    }

    return 0;
}