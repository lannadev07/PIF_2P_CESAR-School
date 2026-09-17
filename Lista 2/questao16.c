#include <stdio.h>
#include <math.h>

int main() {

    float alturaDegrau;
    float alturaTotal;
    int quantidadeDegraus;

    printf("Digite a altura de cada degrau (em cm): ");
    scanf("%f", &alturaDegrau);

    printf("Digite a altura total que deseja alcancar (em metros): ");
    scanf("%f", &alturaTotal);

    alturaTotal = alturaTotal * 100;

    quantidadeDegraus = ceil(alturaTotal / alturaDegrau);

    printf("Numero minimo de degraus: %d\n", quantidadeDegraus);

    return 0;
}
