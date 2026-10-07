#include <stdio.h>

int main() {
    float valor;
    float soma = 0;
    float media;
    int quantidade = 0;

    printf("Digite valores positivos. Digite um valor negativo para parar.\n");

    while (1) {
        printf("Digite um valor: ");
        scanf("%f", &valor);

        if (valor < 0) {
            break;
        }

        soma += valor;
        quantidade++;
    }

    if (quantidade > 0) {
        media = soma / quantidade;

        printf("\nQuantidade de valores: %d\n", quantidade);
        printf("Soma total: %.2f\n", soma);
        printf("Media: %.2f\n", media);
    } else {
        printf("\nNenhum valor valido foi digitado.\n");
    }

    return 0;
}