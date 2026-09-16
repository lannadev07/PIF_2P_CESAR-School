#include <stdio.h>

int main() {

    float salarioBase;
    float gratificacao;
    float imposto;
    float salarioLiquido;

    printf("Digite o salario-base: R$ ");
    scanf("%f", &salarioBase);

    gratificacao = salarioBase * 5.0 / 100.0;
    imposto = salarioBase * 7.0 / 100.0;
    salarioLiquido = salarioBase + gratificacao - imposto;

    printf("\nGratificacao: R$ %.2f\n", gratificacao);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}
