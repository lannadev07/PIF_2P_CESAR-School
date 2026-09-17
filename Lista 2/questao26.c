#include <stdio.h>

int main() {

    float comprimento, largura;
    float perimetro;
    float metrosArame;
    float precoMetro;
    float custoTotal;

    printf("Digite o comprimento do terreno: ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno: ");
    scanf("%f", &largura);

    printf("Digite o preco do metro do arame: R$ ");
    scanf("%f", &precoMetro);

    perimetro = 2 * (comprimento + largura);
    metrosArame = perimetro * 3;
    custoTotal = metrosArame * precoMetro;

    printf("\nPerimetro: %.2f metros\n", perimetro);
    printf("Quantidade de arame: %.2f metros\n", metrosArame);
    printf("Custo total: R$ %.2f\n", custoTotal);

    return 0;
}
