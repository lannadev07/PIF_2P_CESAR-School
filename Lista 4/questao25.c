#include <stdio.h>

int main() {
    int total, entregue, troco;
    int n100, n50, n20, n10, n5, n2;

    printf("Digite o valor total a pagar: ");
    scanf("%d", &total);
    printf("Digite o valor entregue pelo cliente: ");
    scanf("%d", &entregue);

    if (entregue < total) {
        printf("Erro: valor entregue insuficiente!\n");
        return 0;
    }

    troco = entregue - total;
    printf("Troco: R$ %d\n", troco);

    // "/" dá quantas cedulas cabem; "%" dá o que sobra
    n100 = troco / 100;
    troco = troco % 100;

    n50 = troco / 50;
    troco = troco % 50;

    n20 = troco / 20;
    troco = troco % 20;

    n10 = troco / 10;
    troco = troco % 10;

    n5 = troco / 5;
    troco = troco % 5;

    n2 = troco / 2;
    troco = troco % 2;

    printf("Cedulas de R$ 100: %d\n", n100);
    printf("Cedulas de R$ 50: %d\n", n50);
    printf("Cedulas de R$ 20: %d\n", n20);
    printf("Cedulas de R$ 10: %d\n", n10);
    printf("Cedulas de R$ 5: %d\n", n5);
    printf("Cedulas de R$ 2: %d\n", n2);

    if (troco > 0) {
        printf("Sobraram R$ %d que nao podem ser pagos com essas cedulas.\n", troco);
    }

    return 0;
}