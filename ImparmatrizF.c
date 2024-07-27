#include <stdio.h>
int main() {
    int matriz[3][3];

    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;
    printf("La matriz original es:\n");
    for(int m = 0; m < 3; m++) {
    for(int j = 0; j < 3; j++) {
        printf("%d", matriz[m][j]);
        printf("\n");
        printf("\nLos impares de la matriz son:\n");
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                if(matriz[i][j] % 2 != 0) {
                    printf("%d ", matriz[i][j]);

                }
            }
        }
        printf("\n");
}

    
    }
        
        
    
       
    int matriz3[3][4];
    matriz3[0][0] = 1;
    matriz3[0][1] = 2;
    matriz3[0][2] = 3;
    matriz3[0][3] = 4;
    matriz3[1][0] = 5;
    matriz3[1][1] = 6;
    matriz3[1][2] = 7;
    matriz3[1][3] = 8;
    matriz3[2][0] = 9;
    matriz3[2][1] = 10;
    matriz3[2][2] = 11;
    matriz3[2][3] = 12;
    printf("La matriz");
    for(int y = 0; y < 3; y++){
        for(int k = 0;k < 4; k++){
         printf("%d\n", matriz3[y][k]);
        }
    } 
        return 0;
}
       
        
        