#include<stdio.h>

int main(){
    
    int num;
    print("Digite um número inteiro: ");
    scanf("%d", &num);
    
    print("Decimal: %d | Hexadecimal: %x | Octadecimal: %o | Caractere: %c", num, num, num, num);

    return 0;
}