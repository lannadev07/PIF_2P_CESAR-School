#include <stdio.h>

int main() {

    float velKm;
    float velMs;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &velKm);

    velocidadeMs = velKm / 3.6;
    printf("Velocidade em m/s: %.2f\n", velMs);

    return 0;
}
