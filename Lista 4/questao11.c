#include <stdio.h>

int main(){

    int num1, num2, num3;

    printf("Digite um número inteiro: \n");
    scanf("%d", &num1);

    printf("Digite outro número inteiro: \n");
    scanf("%d", &num2);

    printf("Digite mais um número inteiro: \n");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3){
        if (num2 > num3){
            printf("Em ordem crescente: %d < %d < %d", num3, num2, num1);
        }else{
            printf("Em ordem crescente: %d < %d < %d", num2, num3, num1);
        }
    }else if (num2 > num1 && num2 > num3){
        if (num1 > num3){
            printf("Em ordem crescente: %d < %d < %d", num3, num1, num2);
        }else{
            printf("Em ordem crescente: %d < %d < %d", num1, num3, num2);
        }
    }else{
        if (num1 > num2){
            printf("Em ordem crescente: %d < %d < %d", num2, num1, num3);
        }else{
            printf("Em ordem crescente: %d < %d < %d", num1, num2, num3);
        }
    }
    
    return 0;
}