//
// Created by Felipe Azevedo on 14/08/23.
//

#include <stdio.h>

struct Pessoa {
    char nome[20];
    int idade;
};

void modificarPessoa(struct Pessoa *p) {
    p -> idade += 1;
}

void testarPessoa(struct Pessoa p) {
    p.idade *= 2;
}

int main() {
    struct Pessoa p = {"João", 25};
    modificarPessoa(&p);

    printf("Nome: %s\n", p.nome);
    printf("Nome: %d\n", p.idade);

    testarPessoa(p);

    printf("Nome: %s\n", p.nome);
    printf("Nome: %d\n", p.idade);

    return 0;
}