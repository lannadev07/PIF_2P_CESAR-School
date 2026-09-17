#include<stdio.h>

int main(){

    int num, quadrado;
    float decParte;

    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    quadrado = num * num;
    decParte = (float)num / 10; //é preciso colocar o '(float)', além de declarar a variável como 'float', para nao causar truncamento

    printf("Quadrado de %d: %d | Décima parte de %d: %.2f", num, quadrado, num, decParte);

    return 0;
}