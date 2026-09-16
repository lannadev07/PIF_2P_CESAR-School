#include<stdio.h>

int main(){
    float graus;
    double rad, pi = 3.141593;

    printf("Digite o valor em graus: ");
    scanf("%f", &graus);
    rad = graus * (pi / 180.0);

    printf("O valor de %.2f em radianos é o equivalente a %.2f", graus, rad);

    return 0;
}