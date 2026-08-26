#include <stdio.h>
#include <stdlib.h>
int main(){
    int num1, num2, num3;
    double media;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    media = (num1 + num2 + num3) / 3;

    printf(" A media aritmética de %d, %d e %d é igual a %.2f", num1, num2, num3, media);
    
    return 0;
}