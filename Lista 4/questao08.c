#include <stdio.h>

int main(){

    int num;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    while(num <= 0){
        printf("Número menor ou igual a zero. Digite novamente!\n");

        printf("O número tem que ser inteiro positivo: ");
        scanf("%d", &num);

    }

    if (num % 400 == 0 || (num % 4 == 0 && num % 100 != 0)){
        printf("O ano %d é bissexto.", num);
    }else{
        printf("O ano %d não é bissexto.", num);
    }

    return 0;
}