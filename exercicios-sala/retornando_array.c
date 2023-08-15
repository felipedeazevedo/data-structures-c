//
// Created by Felipe Azevedo on 14/08/23.
//

#include <stdio.h>
#include <stdlib.h>


int *criarVetor(int tamanho) {
    int *vetor = malloc(tamanho * sizeof(int)); // tamanho será 40 bytes

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = 2 * i + 3;
    }

    return vetor;
}

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    criarVetor(tamanho);

    return 0;
}
