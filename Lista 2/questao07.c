#include<stdio.h>

int main(){

    int a, b, c;
    printf("Digite uma data no formato 'aa/bb/cccc' abaixo:\n");
    scanf("%d/%d/%d", &a, &b, &c);

    printf("Aqui está a sua data invertida:\n%d/%02d/%02d", c, b, a); //serve para preencher com zero
    return 0;
}