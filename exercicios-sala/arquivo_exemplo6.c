//
// Created by Felipe Azevedo on 21/08/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    FILE *arquivo;
    char linha[100];
    int i = 0;

    arquivo = fopen("dados.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        i++;
        printf("%d %s", i, linha);
    }

    fclose(arquivo);
    return 0;
}
