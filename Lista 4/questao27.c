#include <stdio.h>

int main() {
    int horas;
    float total;

    printf("Digite o numero de horas: ");
    scanf("%d", &horas);

    if (horas <= 0) {
        printf("Horas invalidas!\n");
        return 0;
    }

    if (horas <= 2) {
        total = horas * 2.00;
    } else if (horas <= 4) {
        //2 primeiras horas = 4.00, o resto a 2.50
        total = 4.00 + (horas - 2) * 2.50;
    } else {
        //2 primeiras = 4.00, 3a e 4a = 5.00, o resto a 3.00
        total = 4.00 + 5.00 + (horas - 4) * 3.00;
    }

    printf("Tempo total: %d hora(s)\n", horas);
    printf("Valor cobrado: R$ %.2f\n", total);

    return 0;
}