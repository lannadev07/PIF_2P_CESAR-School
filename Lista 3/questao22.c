#include <stdio.h>

int main() {
    int N;
    int numero = 1;

    printf("Digite o número de linhas: ");
    scanf("%d", &N);

    for (int linha = 1; linha <= N; linha++) {
        for (int coluna = 1; coluna <= linha; coluna++) {
            printf("%d ", numero);
            numero++;
        }

        printf("\n");
    }

    return 0;
}