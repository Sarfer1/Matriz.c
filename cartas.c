#include <stdio.h>    // Biblioteca estándar de entrada y salida para printf
#include <stdlib.h>   // Biblioteca estándar para funciones de utilidad como srand y rand
#include <time.h>     // Biblioteca para funciones relacionadas con el tiempo, como time

#define FILA 4        // Definición de constante para el número de filas (4 filas)
#define COLS 13       // Definición de constante para el número de columnas (13 cartas por palo)

// Prototipos de funciones
void imprimirMazo(char mazo[FILA][COLS][4]);     // Declaración de función para imprimir el mazo
void barajarMazo(char mazo[FILA][COLS][4]);   // Declaración de función para desordenar el mazo
void inicializarMazo(char mazo[FILA][COLS][4]); // Declaración de función para inicializar el mazo en orden
void ordenarMazo(char mazo[FILA][COLS][4]);      // Declaración de función para ordenar el mazo

int main() {
    char mazo[FILA][COLS][4];  // Declaración del mazo de cartas como un arreglo de cadenas

    inicializarMazo(mazo);      // Inicializar el mazo en orden

    printf("Matriz desordenada:\n");  // Imprimir título para el mazo desordenado
    barajarMazo(mazo);  // Desordenar el mazo
    imprimirMazo(mazo);    // Imprimir el mazo desordenado

    ordenarMazo(mazo);     // Ordenar el mazo
    printf("\nMatriz ordenada:\n");  // Imprimir título para el mazo ordenado
    imprimirMazo(mazo);    // Imprimir el mazo ordenado

    return 0;   // Retornar 0 para indicar que el programa terminó correctamente
}

// Inicializa el mazo en orden
void inicializarMazo(char mazo[FILA][COLS][4]) {
    char palos[] = {'C', 'D', 'T', 'P'};  // Palos: Corazones, Diamantes, Tréboles, Picas
    for (int i = 0; i < FILA; i++) {  // Recorrer las filas
        for (int j = 0; j < COLS; j++) {  // Recorrer los valores de las cartas
            snprintf(mazo[i][j], sizeof(mazo[i][j]), "%d%c", j + 1, palos[i]);  // Crear la cadena de cada carta con el formato "valor+palo"
        }
    }
}

// Imprime el mazo
void imprimirMazo(char mazo[FILA][COLS][4]) {
    for (int i = 0; i < FILA; i++) {  // Recorrer las filas
        for (int j = 0; j < COLS; j++) {  // Recorrer los valores de las cartas
            printf("%s ", mazo[i][j]);  // Imprimir la carta
        }
        printf("\n");  // Nueva línea después de cada palo
    }
}

// Desordena el mazo utilizando el algoritmo de Fisher-Yates
void barajarMazo(char mazo[FILA][COLS][4]) {
    srand(time(NULL));  // Inicializar la semilla de aleatoriedad con el tiempo actual
    for (int i = 0; i < FILA; i++) {  // Recorrer las filas
        for (int j = 0; j < COLS; j++) {  // Recorrer los valores de las cartas
            int i1 = rand() % FILA;  // Obtener una fila aleatoria
            int j1 = rand() % COLS;  // Obtener una columna aleatoria
            char temp[4];  // Variable temporal para el intercambio

            snprintf(temp, sizeof(temp), "%s", mazo[i][j]);  // Copiar la carta actual a la variable temporal
            snprintf(mazo[i][j], sizeof(mazo[i][j]), "%s", mazo[i1][j1]);  // Copiar la carta aleatoria a la posición actual
            snprintf(mazo[i1][j1], sizeof(mazo[i1][j1]), "%s", temp);  // Copiar la carta de la variable temporal a la posición aleatoria
        }
    }
}

// Ordena el mazo
void ordenarMazo(char mazo[FILA][COLS][4]) {
    char palos[] = {'C', 'D', 'T', 'P'};  // Palos: Corazones, Diamantes, Tréboles, Picas
    char mazoOrdenado[FILA][COLS][4];  // Arreglo temporal para el mazo ordenado

    for (int i = 0; i < FILA; i++) {  // Recorrer las filas
        for (int j = 0; j < COLS; j++) {  // Recorrer los valores de las cartas
            snprintf(mazoOrdenado[i][j], sizeof(mazoOrdenado[i][j]), "%d%c", j + 1, palos[i]);  // Crear la cadena de cada carta con el formato "valor+palo"
        }
    }

    for (int i = 0; i < FILA; i++) {  // Recorrer las filas
        for (int j = 0; j < COLS; j++) {  // Recorrer los valores de las cartas
            snprintf(mazo[i][j], sizeof(mazo[i][j]), "%s", mazoOrdenado[i][j]);  // Copiar las cartas ordenadas de mazoOrdenado a mazo
        }
    }
}