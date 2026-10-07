#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char letra, secreta;
    int tentativas = 0;

    srand(time(NULL));  //faz o sorteio mudar a cada execução.
    secreta = rand() % 26 + 'a';

    printf("Adivinhe a letra secreta entre 'a' e 'z':\n");

    do {
        printf("Digite uma letra: ");
        scanf(" %c", &letra);

        tentativas++;

        if (letra < secreta) {
            printf("A letra secreta vem depois no alfabeto.\n");
        } else if (letra > secreta) {
            printf("A letra secreta vem antes no alfabeto.\n");
        } else {
            printf("Parabéns! Você acertou!\n");
            printf("Total de tentativas: %d\n", tentativas);
        }

    } while (letra != secreta);

    return 0;
}