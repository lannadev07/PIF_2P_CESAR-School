#include <stdio.h>

int main() {

    char caractere;
    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    printf("O caractere digitado foi: %c\n", caractere);
    printf("O codigo ASCII e: %d\n", caractere);

    return 0;
}
