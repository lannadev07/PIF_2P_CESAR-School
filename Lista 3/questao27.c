#include <stdio.h>

int main() {
    int saque;
    int cedulas[] = {100, 50, 20, 10, 5, 2};
    int quantidade;

    printf("Digite o valor do saque: R$ ");
    scanf("%d", &saque);

    if (saque <= 0) {
        printf("Valor de saque inválido.\n");
        return 0;
    }

    printf("\nCédulas utilizadas:\n");

    for (int i = 0; i < 6; i++) {
        quantidade = 0;

        while (saque >= cedulas[i]) {
            saque = saque - cedulas[i];
            quantidade++;
        }

        if (quantidade > 0) {
            printf("R$ %d: %d cedula(s)\n", cedulas[i], quantidade);
        }
    }

    if (saque != 0) {
        printf("\nNão foi possível compor todo o valor com as cédulas disponíveis.\n");
    }

    return 0;
}