#include <stdio.h>

int main() {

    char letra;

    printf("Digite uma letra maiuscula: ");
    scanf("%c", &letra);

    letra = letra + 32;
    printf("A letra minuscula e: %c\n", letra);

    return 0;
}
