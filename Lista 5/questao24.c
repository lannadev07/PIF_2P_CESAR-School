#include <stdio.h>

/* Descomente a linha abaixo para ativar o modo de depuracao. */
/* #define DEBUG */

int somaAteN(int n);

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Soma: %d\n", somaAteN(numero));

    return 0;
}

int somaAteN(int n) {
    int soma = 0;
    int i;

    for (i = 1; i <= n; i++) {
        soma = soma + i;

        #ifdef DEBUG
            printf("Soma parcial: %d\n", soma);
        #endif
    }

    return soma;
}