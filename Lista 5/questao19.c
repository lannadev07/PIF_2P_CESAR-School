#include <stdio.h>

void contagem(int n);
void contagemCrescente(int n);

int main() {
    int numero;

    printf("Digite um numero positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Numero invalido.\n");
    } else {
        printf("Contagem regressiva:\n");
        contagem(numero);

        printf("\nContagem crescente:\n");
        contagemCrescente(numero);
    }

    return 0;
}

void contagem(int n) {
    if (n == 0) {
        printf("Fogo!\n");
        return;
    }

    printf("%d\n", n);
    contagem(n - 1);
}

void contagemCrescente(int n) {
    if (n == 0) {
        return;
    }

    contagemCrescente(n - 1);
    printf("%d\n", n);
}