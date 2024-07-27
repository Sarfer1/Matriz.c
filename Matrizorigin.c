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


    // Imprimir los 4 elementos de la esquina
    printf("\nLos elementos de las esquinas son:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if ((i == 0 || i == 2) && (j == 0 || j == 2)) {
                printf("%d ", matriz[i][j]);
                
            }
        }
    }
    printf("\n");
}