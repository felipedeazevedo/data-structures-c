#include <stdio.h>

int fatorial(int N) {
    if (N == 0) {
        return 1;
    }
    return N * fatorial(N - 1);
}

int main() {
    int N;
    printf("Digite um número: ");
    scanf("%d", &N);
    printf("Resultado: %d", fatorial(N));
    return 0;
}