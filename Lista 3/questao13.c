#include <stdio.h>

int main() {
    int N;
    long long int fatorial = 1;

    printf("Digite um número inteiro: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Erro: não existe fatorial de número negativo.\n");
    } else {
        for (int i = 1; i <= N; i++) {
            fatorial *= i;
        }

        printf("%d! = %lld\n", N, fatorial);
    }

    return 0;
}