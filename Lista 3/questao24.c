#include <stdio.h>

int main() {
    int N;

    printf("Digite uma dimensão ímpar entre 3 e 19: ");
    scanf("%d", &N);

    if (N < 3 || N > 19 || N % 2 == 0) {
        printf("Valor invalido!\n");
        return 0;
    }

    for (int linha = 0; linha < N; linha++) {
        for (int coluna = 0; coluna < N; coluna++) {

            if (coluna == linha || coluna == N - 1 - linha) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}