#include <stdio.h>

int fatorial(int N) {
   if (N == 1 || N == 2) return N;
   else return fatorial(N - 1) + fatorial(N - 2);
}

int main() {
    int N;
    printf("Digite um número: ");
    scanf("%d", &N);
    printf("Resultado: %d", fatorial(N));
    return 0;
}