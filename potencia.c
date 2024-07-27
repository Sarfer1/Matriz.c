#include <stdio.h>

// Función para multiplicar dos matrices de 3x3
void multiplicarMatrices(int A[3][3], int B[3][3], int resultado[3][3]) {
    // Itera sobre las filas de la matriz A
    for (int i = 0; i < 3; i++) {
        // Itera sobre las columnas de la matriz B
        for (int j = 0; j < 3; j++) {
            // Inicializa el elemento actual en resultado a 0
            resultado[i][j] = 0;
            // Realiza la multiplicación y suma de elementos correspondientes
            for (int k = 0; k < 3; k++) {
                resultado[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Función para copiar una matriz de 3x3 a otra
void copiarMatriz(int origen[3][3], int destino[3][3]) {
    // Itera sobre las filas de la matriz origen
    for (int i = 0; i < 3; i++) {
        // Itera sobre las columnas de la matriz origen
        for (int j = 0; j < 3; j++) {
            // Copia cada elemento de origen a destino
            destino[i][j] = origen[i][j];
        }
    }
}

// Función para calcular la potencia de una matriz de 3x3
void potenciaMatriz(int A[3][3], int resultado[3][3], int potencia) {
    // Inicializa resultado como matriz identidad
    int identidad[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };

    // Copia la matriz identidad a resultado
    copiarMatriz(identidad, resultado);

    // Matriz temporal para almacenar resultados intermedios
    int temp[3][3];
    // Multiplica A por sí misma potencia veces
    for (int p = 0; p < potencia; p++) {
        // Multiplica la matriz resultado por A y almacena en temp
        multiplicarMatrices(resultado, A, temp);
        // Copia el contenido de temp de vuelta a resultado
        copiarMatriz(temp, resultado);
    }
}

// Función para imprimir una matriz de 3x3
void imprimirMatriz(int matriz[3][3]) {
    // Itera sobre las filas de la matriz
    for (int i = 0; i < 3; i++) {
        // Itera sobre las columnas de la matriz
        for (int j = 0; j < 3; j++) {
            // Imprime cada elemento de la matriz
            printf("%d ", matriz[i][j]);
        }
        // Salto de línea al final de cada fila
        printf("\n");
    }
}

int main() {
    // Matriz A de 3x3
    int A[3][3] = {
        {2, -1, 0},
        {1, 3, 4},
        {0, -2, 5}
    };
    // Matriz para almacenar el resultado
    int resultado[3][3];

    int n = 3; // Potencia a la que queremos elevar la matriz
    // Calcula la potencia de la matriz A
    potenciaMatriz(A, resultado, n);
    
    // Imprime el resultado
    printf("La matriz A elevada a la potencia %d es:\n", n);
    imprimirMatriz(resultado);

    return 0;
}