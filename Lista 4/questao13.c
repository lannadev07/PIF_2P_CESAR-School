#include <stdio.h>
#include <math.h>

int main(){

    float num1, num2;
    char simbolo;
    float soma, sub, multi, div, pot;

    printf("Escolha uma das opções do menu.");
    printf("====== MENU ======\n");
    printf("+ (Soma)\n");
    printf("- (Subtração)\n");
    printf("* (Multiplicação)\n");
    printf("/ (Divisão)\n");
    printf("^ (Potenciação)\n");

    scanf(" %c", &simbolo); //não lê os espaços

    printf("Digite o primeiro número: \n");
    scanf("%f", &num1);

    printf("Digite o segundo número: \n");
    scanf("%f", &num2);

    switch (simbolo){
    case '+':
        soma = num1 + num2;
        printf("A soma é igual a %f", soma);
        break;
    case '-':
        sub = num1 - num2;
        printf("A subtração é igual a %f", sub);
        break;
    case '*':
        multi = num1 * num2;
        printf("A multiplicação é igual a %f", multi);
        break;
    case '/':
        if (num2 == 0){
            printf("Não existe divisão por zero.");
        }else{
            div = num1 / num2;
            printf("A divisão é igual a %f", div);
        }
        break;
    case '^':
        pot = pow(num1, num2);
        printf("A potênciação é igual a %f", pot);
        break;
    }

    return 0;
}