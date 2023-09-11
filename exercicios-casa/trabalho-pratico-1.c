//
// Created by Felipe Azevedo on 10/09/23.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char nome[30];
    char situacao[10];
    char telefone[15];
    char curso[20];
    float nota1;
    float nota2;

} Aluno;

int main() {
    FILE *arquivoLido, *arquivoGerado;

    arquivoLido = fopen("/Users/felipeazevedo/Documents/ucb/estrutura-de-dados/c-projects/cmake-build-debug/DadosEntrada.csv", "r");
    if (arquivoLido == NULL) {
        printf("Erro ao abrir o arquivo lido!\n");
        exit(1);
    }

    arquivoGerado = fopen("/Users/felipeazevedo/Documents/ucb/estrutura-de-dados/c-projects/cmake-build-debug/SituacaoFinal.csv", "w");
    if (arquivoGerado == NULL) {
        printf("Erro ao abrir o arquivo gerado!\n");
        exit(1);
    }

    Aluno alunos[100];
    int linhas_lidas = 0;
    int valores_lidos_linha = 0;
    do {
        valores_lidos_linha = fscanf(arquivoLido, "%29[^,],%14[^,],%19[^,],%f,%f\n",
                                     alunos[linhas_lidas].nome,
                                     alunos[linhas_lidas].telefone,
                                     alunos[linhas_lidas].curso,
                                     &alunos[linhas_lidas].nota1,
                                     &alunos[linhas_lidas].nota2);

        if (valores_lidos_linha == 5) {
            linhas_lidas++;
        }
    } while (!feof(arquivoLido));

    for (int i = 0; i < linhas_lidas; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2) / 2;
        strcpy(alunos[i].situacao, media < 7 ? "REPROVADO" : "APROVADO");
        fprintf(arquivoGerado, "%s,%.2f,%s\n", alunos[i].nome, media, alunos[i].situacao);
    }

    fclose(arquivoLido);
    fclose(arquivoGerado);
    return 0;
}