#include <stdio.h>

// Función para obtener el cofactor de la matriz
void obtenerCofactor(int matriz[3][3], int cofactor[3][3], int p, int q, int n) {
    int i = 0, j = 0;
    // Recorre cada elemento de la matriz
    for (int fila = 0; fila < n; fila++) {
        for (int columna = 0; columna < n; columna++) {
            // Si no estamos en la fila p ni en la columna q
            if (fila != p && columna != q) {
                cofactor[i][j++] = matriz[fila][columna];
                // Reinicia j al llegar al final de la columna y pasa a la siguiente fila
                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

// Función para calcular el determinante de la matriz
int determinante(int matriz[3][3], int n) {
    int det = 0; // Inicializa el determinante a 0
    if (n == 1) {
        return matriz[0][0]; // Caso base para una matriz 1x1
    }
    int cofactor[3][3]; // Matriz para almacenar los cofactores
    int signo = 1; // Alterna el signo para calcular el determinante
    // Recorre cada elemento de la primera fila
    for (int f = 0; f < n; f++) {
        obtenerCofactor(matriz, cofactor, 0, f, n); // Obtiene el cofactor de la matriz
        det += signo * matriz[0][f] * determinante(cofactor, n - 1); // Calcula el determinante
        signo = -signo; // Alterna el signo
    }
    return det;
}

// Función para calcular la matriz adjunta
void adjunta(int matriz[3][3], int adj[3][3]) {
    // Si el determinante es 0, la matriz no es invertible
    if (determinante(matriz, 3) == 0) {
        printf("La matriz no es invertible.\n");
        return;
    }
    int signo = 1; // Alterna el signo para los cofactores
    int cofactor[3][3]; // Matriz para almacenar los cofactores
    // Recorre cada elemento de la matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            obtenerCofactor(matriz, cofactor, i, j, 3); // Obtiene el cofactor
            signo = ((i + j) % 2 == 0) ? 1 : -1; // Determina el signo
            adj[j][i] = signo * determinante(cofactor, 2); // Almacena el cofactor en la matriz adjunta
        }
    }
}

// Función para calcular la inversa de la matriz
int inversa(int matriz[3][3], float inversa[3][3]) {
    int det = determinante(matriz, 3); // Calcula el determinante de la matriz
    // Si el determinante es 0, la matriz no es invertible
    if (det == 0) {
        printf("La matriz no es invertible.\n");
        return 0;
    }
    int adj[3][3]; // Matriz para almacenar la adjunta
    adjunta(matriz, adj); // Calcula la adjunta de la matriz

    // Divide cada elemento de la adjunta por el determinante para obtener la inversa
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            inversa[i][j] = adj[i][j] / (float) det;
        }
    }
    return 1;
}

// Función para multiplicar dos matrices
void multiplicarMatrices(float A[3][3], int B[3][3], float resultado[3][3]) {
    // Recorre cada fila de la matriz A
    for (int i = 0; i < 3; i++) {
        // Recorre cada columna de la matriz B
        for (int j = 0; j < 3; j++) {
            resultado[i][j] = 0; // Inicializa el elemento de la matriz resultado
            // Recorre cada elemento de la fila i de A y columna j de B
            for (int k = 0; k < 3; k++) {
                resultado[i][j] += A[i][k] * B[k][j]; // Realiza la multiplicación y suma
            }
        }
    }
}

// Función para imprimir una matriz
void imprimirMatriz(float matriz[3][3]) {
    // Recorre cada fila de la matriz
    for (int i = 0; i < 3; i++) {
        // Recorre cada columna de la matriz
        for (int j = 0; j < 3; j++) {
            printf("%.2f ", matriz[i][j]); // Imprime el elemento de la matriz
        }
        printf("\n"); // Nueva línea después de cada fila
    }
}

int main() {
    // Matriz A de 3x3
    int A[3][3] = {
        {2, -1, 0},
        {1, 3, 4},
        {0, -2, 5}
    };
    
    // Matriz B de 3x3
    int B[3][3] = {
        {1, 0, 2},
        {-1, 3, 1},
        {4, 2, -1}
    };

    // Matriz para almacenar la inversa de A
    float A_inv[3][3];
    
    // Si la inversa se calculó correctamente
    if (inversa(A, A_inv)) {
        printf("La inversa de la matriz A es:\n");
        imprimirMatriz(A_inv); // Imprime la matriz inversa
        // Matriz para almacenar el resultado de la multiplicación
        float resultado[3][3];
        multiplicarMatrices(A_inv, B, resultado); // Multiplica la inversa de A por B
        printf("\nEl resultado de A^-1 * B es:\n");
        imprimirMatriz(resultado); // Imprime el resultado de la multiplicación
    }
    return 0;
}