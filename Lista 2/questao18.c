#include <stdio.h>

int main() {

    float raio;
    float area, volume;
    float pi = 3.141592;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    area = 4 * pi * raio * raio;
    volume = (4.0 / 3.0) * pi * raio * raio * raio;

    printf("Area da superficie: %.2f\n", area);
    printf("Volume da esfera: %.2f\n", volume);

    return 0;
}
