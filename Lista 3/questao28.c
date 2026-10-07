#include <stdio.h>

int main() {
    int opcao;
    float salario, novoSalario, imposto;

    do {
        printf("\n===== FOLHA DE PAGAMENTO =====\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retenção de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                printf("Digite o salário: R$ ");
                scanf("%f", &salario);

                if (salario <= 2000) {
                    novoSalario = salario * 1.15;
                } else {
                    novoSalario = salario * 1.10;
                }

                printf("Novo salário: R$ %.2f\n", novoSalario);
                break;

            case 2:
                printf("Digite o salario: R$ ");
                scanf("%f", &salario);

                if (salario <= 3000) {
                    imposto = salario * 0.08;
                } else {
                    imposto = salario * 0.15;
                }

                printf("Valor do Imposto de Renda: R$ %.2f\n", imposto);
                break;

            case 3:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opção inválida! Escolha uma opção de 1 a 3.\n");
        }

    } while (opcao != 3);

    return 0;
}