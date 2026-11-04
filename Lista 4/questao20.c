#include <stdio.h>
#include <math.h>   // necessario para usar sqrt()

int main() {
    float a, b, c;
    float delta;
    float x, x1, x2;

    // repete ate o usuario digitar um "a" diferente de zero
    do {
        printf("Digite o coeficiente a (diferente de 0): ");
        scanf("%f", &a);
    } while (a == 0);

    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("A equacao nao possui raizes reais.\n");
    } else if (delta == 0) {
        x = -b / (2 * a);
        printf("Raiz unica: x = %.2f\n", x);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }

    return 0;
}