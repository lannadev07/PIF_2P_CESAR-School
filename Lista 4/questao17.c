#include <stdio.h>

int main() {
    float valor;
    int opcao;
    float valorFinal;
    float parcela;
    float comissao;

    printf("Digite o valor total da compra: ");
    scanf("%f", &valor);
    printf("Forma de pagamento (1 = A vista, 2 = Parcelado em 3x): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        valorFinal = valor * 0.90;    
        comissao = valorFinal * 0.05;   
        printf("Valor final a pagar: R$ %.2f\n", valorFinal);
        printf("Comissao do vendedor: R$ %.2f\n", comissao);
    } else if (opcao == 2) {
        parcela = valor / 3;
        comissao = valor * 0.05;        // 5% sobre o valor total
        printf("Valor de cada parcela (3x): R$ %.2f\n", parcela);
        printf("Comissao do vendedor: R$ %.2f\n", comissao);
    } else {
        printf("Opcao invalida!\n");
    }

    return 0;
}