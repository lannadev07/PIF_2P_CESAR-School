#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite o primeiro angulo: ");
    scanf("%d", &a);
    printf("Digite o segundo angulo: ");
    scanf("%d", &b);
    printf("Digite o terceiro angulo: ");
    scanf("%d", &c);

    if (a + b + c != 180) {
        printf("Nao e um triangulo valido (a soma deve ser 180).\n");
    } else if (a == 90 || b == 90 || c == 90) {
        printf("Triangulo Retangulo\n");
    } else if (a > 90 || b > 90 || c > 90) {
        printf("Triangulo Obtusangulo\n");
    } else {
        printf("Triangulo Acutangulo\n");
    }

    return 0;
}