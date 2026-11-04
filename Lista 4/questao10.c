#include <stdio.h>

int main(){

    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num == 0){
        printf("ZERO");
    }else if (num > 0){
        printf("POSITIVO\n");
        if (num % 2 == 0){
            printf("PAR");
        }else{
            printf("ÍMPAR");
        }
    }else{
        printf("NEGATIVO\n");
        if (num % 2 == 0){
            printf("PAR");
        }else{
            printf("ÍMPAR");
        }
    }

    return 0;
}