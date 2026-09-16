

#include <stdio.h>

int main() {

    float horasNormais, horasExtras;
    float salarioBruto;
    float salarioAnual;
    float valorExcedente;
    float imposto;
    float salarioLiquido;

    printf("Digite a quantidade de horas normais: ");
    scanf("%f", &horasNormais);

    printf("Digite a quantidade de horas extras: ");
    scanf("%f", &horasExtras);

    salarioBruto = horasNormais * 10.0 + horasExtras * 15.0;
    salarioAnual = salarioBruto * 12;

    if (salarioAnual > 12000) {

        valorExcedente = salarioAnual - 12000;

        imposto = valorExcedente * 10.0 / 100.0;

    } else {

        imposto = 0;
    }
    salarioLiquido = salarioAnual - imposto;

    printf("\nSalario mensal bruto: R$ %.2f\n", salarioBruto);
    printf("Salario anual: R$ %.2f\n", salarioAnual);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salario liquido anual: R$ %.2f\n", salarioLiquido);

    return 0;
}
