#include <stdio.h>

int main(){
    int matriz[3][3]; // matriz de 3x3
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;

   // Imprimir la matriz
    printf("La matriz original es:\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    //Imprimir los elementos pares de la matriz
    printf("\nLos pares de la matriz son:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] % 2 == 0) {
                printf("%d ", matriz[i][j]);
            }
        }
    }
    printf("\n");





    return 0;
}