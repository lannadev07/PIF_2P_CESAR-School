#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c;
    float p, area;

    printf("Digite o lado A: ");
    scanf("%f", &a);

    printf("Digite o lado B: ");
    scanf("%f", &b);

    printf("Digite o lado C: ");
    scanf("%f", &c);

    p = (a + b + c) / 2;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("A area do triangulo e: %.2f\n", area);

    return 0;
}
