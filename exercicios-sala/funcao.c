//
// Created by Felipe Azevedo on 14/08/23.
//

#include <stdio.h>

void exibirArray(int array[], int tamanho) {
    // Temos dois vetores na memória na execução do programa: 1 dentro da main e outro dentro da função exibir array

    for (int i = 0; i < tamanho; i++) {
        printf("%d\t", array[i]);
    }
    printf("\n");
}

int main() {
    int meuArray[] = {2, 5, 6, 9, 0};
    int tamanho = sizeof(meuArray) / sizeof(meuArray[0]);

    exibirArray(meuArray, tamanho);
    return 0;
}