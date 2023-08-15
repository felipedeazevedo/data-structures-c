//
// Created by Felipe Azevedo on 14/08/23.
//

#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[20];
    int idade;
    float altura;
};

int main() {
    struct Pessoa p1;
    strcpy(p1.nome, "João");
    p1.idade = 25;
    p1.altura = 1.75;

    printf ("Nome: %s / Idade: %d / Altura: %.2f", p1.nome, p1.idade, p1.altura);
    return 0;
}
