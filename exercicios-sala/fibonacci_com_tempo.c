//
// Created by Felipe Azevedo on 28/08/23.
// Calculando tempo de exeecução do algoritmo
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int calculaFibonacci(int n) {
    if (n == 1) return 1;
    if (n == 2) return 1;
    return calculaFibonacci(n - 1) + calculaFibonacci(n - 2);
}

int main() {
    clock_t momento_inicial, momento_final;
    double tempo;

    // A partir daqui toda instrução executada entra na contagem
    momento_inicial = clock();
    int x = calculaFibonacci(32);
    momento_final = clock();

    tempo = ((double) (momento_final - momento_inicial)) / CLOCKS_PER_SEC;

    printf("Termo da série: %d\n", x);
    printf("Tempo de execução: %f", tempo);

    return 0;
}
