//
// Created by Felipe Azevedo on 21/08/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {


    FILE *arquivo;
    int numero = 125;
    char texto[] = "Esta é uma frase que será gravada no arquivo";

    arquivo = fopen("saida.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    // primeiro parametro: ponteiro pro arquivo
    fprintf(arquivo, "Número: %d\nTexto: %s\n", numero, texto);

    fclose(arquivo);
    return 0;
}