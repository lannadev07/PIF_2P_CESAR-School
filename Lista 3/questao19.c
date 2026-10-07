#include <stdio.h>

int main() {
    int N;
    int a = 1, b = 1, proximo;

    printf("Digite o número do termo desejado: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("O termo deve ser um número positivo.\n");
        return 0;
    }

    printf("Termos da sequência:\n");

    for (int i = 1; i <= N; i++) {
        if (i == 1 || i == 2) {
            printf("%d ", 1);
        } else {
            proximo = a + b;
            printf("%d ", proximo);

            a = b;
            b = proximo;
        }
    }

    printf("\n");

    if (N == 1 || N == 2) {
        printf("O %d termo e: 1\n", N);
    } else {
        printf("O %d termo e: %d\n", N, b);
    }

    return 0;
}