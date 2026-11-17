#include <stdio.h>

int somaDigitos(int n);

int main() {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    printf("Soma dos digitos: %d\n", somaDigitos(numero));

    return 0;
}

int somaDigitos(int n) {
    if (n == 0) {
        return 0; // Caso base
    }

    return (n % 10) + somaDigitos(n / 10); // Passo recursivo
}