#include <stdio.h>

int main() {

    int dias;
    float salarioBruto, desconto, salarioLiquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    salarioBruto = dias * 30.0;
    desconto = salarioBruto * 8.0 / 100.0;
    salarioLiquido = salarioBruto - desconto;

    printf("\nSalario bruto: R$ %.2f\n", salarioBruto);
    printf("Desconto de imposto: R$ %.2f\n", desconto);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}
