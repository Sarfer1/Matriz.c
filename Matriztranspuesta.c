#include <stdio.h>

int main(){
    int matriz[3][3]; // matriz de 3x3
    int transpuesta[3][3]; // matriz para almacenar la transpuesta

    // Inicializar la matriz original
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;

    // Imprimir la matriz original
    printf("La matriz original es:\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Generar la matriz transpuesta
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            transpuesta[j][i] = matriz[i][j];
        }
    }

    // Imprimir la matriz transpuesta
    printf("\nLa matriz transpuesta es:\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", transpuesta[i][j]);
        }
        printf("\n");
    }

    return 0;
}