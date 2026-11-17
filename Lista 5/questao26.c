#include <stdio.h>

long fibonacci(int n);

int main() {
    int quantidade, i;

    printf("Quantos termos deseja exibir? ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("Quantidade invalida.\n");
    } else {
        for (i = 0; i < quantidade; i++) {
            printf("%ld ", fibonacci(i));
        }

        printf("\n");
    }

    return 0;
}

long fibonacci(int n) {
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

/*
   A versao recursiva simples fica lenta para valores grandes
   porque recalcula varias vezes os mesmos termos da sequencia.
*/