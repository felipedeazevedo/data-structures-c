//
// Created by Felipe Azevedo on 28/08/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 1000

int main() {
    int array[TAMANHO];
    srand(time(NULL));

    for (int i = 0; i < TAMANHO; i++) {
        array[i] = rand();
    }
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", array[i]);
        if (i != 0 && i % 10 == 0) {
            printf("\n");
        }
    }

    return 0;
}
