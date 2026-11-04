#include <stdio.h>

int main() {
    float valor;
    int estado;
    float precoFinal;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    printf("Estado (1=MG, 2=SP, 3=RJ, 4=MS): ");
    scanf("%d", &estado);

    switch (estado) {
        case 1:
            precoFinal = valor + valor * 0.07;
            printf("Preco final (MG): R$ %.2f\n", precoFinal);
            break;
        case 2:
            precoFinal = valor + valor * 0.12;
            printf("Preco final (SP): R$ %.2f\n", precoFinal);
            break;
        case 3:
            precoFinal = valor + valor * 0.15;
            printf("Preco final (RJ): R$ %.2f\n", precoFinal);
            break;
        case 4:
            precoFinal = valor + valor * 0.08;
            printf("Preco final (MS): R$ %.2f\n", precoFinal);
            break;
        default:
            printf("Erro: codigo de estado invalido!\n");
    }

    return 0;
}