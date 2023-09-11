//
// Created by Felipe Azevedo on 04/09/23.
//

#include <stdio.h>
#include <stdlib.h>

void insercao(int vetor[], int tamanho) {
    for (int i = 1; i < tamanho; i++) {
        int chave = vetor[i];
        int j = i - 1;
        while (j > 0 && chave < vetor[j]) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] + chave;
    }
}

int main() {
    int array[] = {0, 64, 25, 12, 22, 11};
    int N = sizeof(array)/sizeof(array[0]);
    insercao(array, N);
    printf("Vetor ordenado\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

