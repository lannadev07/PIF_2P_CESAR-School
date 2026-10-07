#include <stdio.h>

int main() {
    float nota;
    float maior, menor, soma = 0, media;
    int quantidade = 0;

    printf("Digite as notas dos alunos (-1 para encerrar):\n");

    while (1) {
        scanf("%f", &nota);

        if (nota == -1.0) {
            break;
        }

        if (quantidade == 0) {
            maior = nota;
            menor = nota;
        } else {
            if (nota > maior) {
                maior = nota;
            }

            if (nota < menor) {
                menor = nota;
            }
        }

        soma += nota;
        quantidade++;
    }

    if (quantidade > 0) {
        media = soma / quantidade;

        printf("\nTotal de alunos avaliados: %d\n", quantidade);
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Media geral: %.2f\n", media);
    } else {
        printf("\nNenhuma nota foi informada.\n");
    }

    return 0;
}