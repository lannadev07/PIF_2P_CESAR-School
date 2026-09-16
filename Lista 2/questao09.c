#include<stdio.h>

int main(){
    int num1, num2;
    int soma, multiplicacao, sub;
    float div;

    print("Digite o 1° número: ");
    scanf("%d", &num1);
    print("Digite o 2° número: ");
    scanf("%d", &num2);

    div = (float)num1 / num2;
    multiplicacao = num1 * num2;
    soma = num1 + num2;
    sub = num1 - num2;
    
    //para corrigir a divisão por zero, eu faria um 'if' com uma condição para num2 != 0.
    printf("Divisão: %f | Multiplicação: %d | Soma: %d | Subtração: %d", div, multiplicacao, soma, sub)

    return 0;
}