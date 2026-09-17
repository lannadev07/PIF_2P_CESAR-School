#include <stdio.h>
#include <math.h>

int main() {

    float a, b, hipotenusa;

    printf("Digite o valor do lado A: ");
    scanf("%f", &a);

    printf("Digite o valor do lado B: ");
    scanf("%f", &b);

    hipotenusa = sqrt(a * a + b * b);
    printf("A hipotenusa e: %.2f\n", hipotenusa);

    return 0;
}
