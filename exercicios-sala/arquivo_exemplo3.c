//
// Created by Felipe Azevedo on 21/08/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    FILE *arquivo;
    int numero;
    char texto[50];

    arquivo = fopen("arquivo.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    // primeiro parametro: ponteiro pro arquivo
    fscanf(arquivo, "%d %s\n", &numero, texto);
    printf("Numero: %d\nTexto: %s", numero, texto);
    fclose(arquivo);
    return 0;
}
