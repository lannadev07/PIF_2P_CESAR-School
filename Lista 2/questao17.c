#include <stdio.h>

int main() {

    float raio;
    float area, circunf;
    float pi = 3.141592;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = pi * raio * raio;
    circunf = 2 * pi * raio;

    printf("Area do circulo: %.2f\n", area);
    printf("Circunferencia do circulo: %.2f\n", circunf);

    return 0;
}
