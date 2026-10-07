#include <stdio.h>

int main() {
    int A, B;
    int divisores;
    int soma = 0;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    if (A >= B || A <= 0 || B <= 0) {
        printf("Valores invalidos. A deve ser menor que B e ambos positivos.\n");
        return 0;
    }

    printf("Números primos no intervalo [%d, %d]:\n", A, B);

    for (int numero = A; numero <= B; numero++) {
        divisores = 0;

        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                divisores++;
            }
        }

        if (numero > 1 && divisores == 2) {
            printf("%d ", numero);
            soma += numero;
        }
    }

    printf("\nSoma dos primos: %d\n", soma);

    return 0;
}