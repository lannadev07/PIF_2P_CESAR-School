#include <stdio.h>

int main() {
    int L;

    printf("Digite o tamanho do lado (3 a 20): ");
    scanf("%d", &L);

    if (L < 3 || L > 20) {
        printf("Valor invalido!\n");
        return 0;
    }

    for (int linha = 1; linha <= L; linha++) {
        for (int coluna = 1; coluna <= L; coluna++) {

            if (linha == 1 || linha == L ||
                coluna == 1 || coluna == L) {
                printf("X");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}