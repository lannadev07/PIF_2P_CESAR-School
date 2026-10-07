#include <stdio.h>

int main() {

    //for
    printf("FOR:\n");

    for (int i = 0; i <= 100; i++) {
        printf("%d\n", i);
    }


    //while
    printf("\nWHILE:\n");

    int j = 0;

    while (j <= 100) {
        printf("%d\n", j);
        j++;
    }


    //do-while
    printf("\nDO-WHILE:\n");

    int k = 0;

    do {
        printf("%d\n", k);
        k++;
    } while (k <= 100);

    return 0;
}

/*
Resposta:
A estrutura mais adequada é o for, pois sabemos exatamente a quantidade e o intervalo
de valores que serão percorridos. O for reúne a inicialização, a condição e o incremento em uma única estrutura, tornando o código mais simples e legível.
*/