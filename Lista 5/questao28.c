#include <stdio.h>

float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main() {
    float preco, subtotal, total, pago, troco;
    int quantidade, opcaoPagamento;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    subtotal = calculaSubtotal(preco, quantidade);

    printf("Forma de pagamento:\n");
    printf("1 - A vista (10%% de desconto)\n");
    printf("2 - Outra forma de pagamento\n");
    printf("Escolha: ");
    scanf("%d", &opcaoPagamento);

    if (opcaoPagamento != 1 && opcaoPagamento != 2) {
        printf("Opcao de pagamento invalida.\n");
    } else {
        total = aplicaDesconto(subtotal, opcaoPagamento);

        printf("Subtotal: R$ %.2f\n", subtotal);
        printf("Total a pagar: R$ %.2f\n", total);

        printf("Digite o valor pago: ");
        scanf("%f", &pago);

        if (pago < total) {
            printf("Valor insuficiente.\n");
        } else {
            troco = calculaTroco(total, pago);
            printf("Troco: R$ %.2f\n", troco);
        }
    }

    return 0;
}

float calculaSubtotal(float preco, int quantidade) {
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento) {
    if (opcaoPagamento == 1) {
        return valor * 0.90;
    }

    return valor;
}

float calculaTroco(float total, float pago) {
    return pago - total;
}