#include <stdio.h>

int main() {
    int senha;
    int senhaCorreta = 2026;
    int tentativas = 0;

    while (tentativas < 3) {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha == senhaCorreta) {
            printf("Acesso Concedido!\n");
            return 0;
        }

        printf("Senha incorreta!\n");

        tentativas++;
    }

    printf("Conta Bloqueada por Segurança!\n");

    return 0;
}