#include <stdio.h>

int main() {
    int opcao;

    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferencia\n");
    printf("4 - Falar com Atendente\n");
    printf("Digite a opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Direcionando para consulta de saldo...\n");
            break;
        case 2:
            printf("Direcionando para extrato...\n");
            break;
        case 3:
            printf("Direcionando para transferencia...\n");
            break;
        case 4:
            printf("Aguarde, voce sera atendido por um atendente...\n");
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}