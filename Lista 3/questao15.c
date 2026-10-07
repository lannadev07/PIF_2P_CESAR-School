#include <stdio.h>

int main() {
    int NUM;
    int encontrou = 0;

    printf("Digite um número limite inteiro positivo: ");
    scanf("%d", &NUM);

    printf("Números multiplos de 3 e 5 ao mesmo tempo:\n");

    for (int i = 1; i <= NUM; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrou = 1;
        }
    }

    if (encontrou == 0) {
        printf("Nenhum número satisfaz a condição.");
    }

    printf("\n");

    return 0;
}