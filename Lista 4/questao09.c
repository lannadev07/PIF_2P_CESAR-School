#include <stdio.h>

int main(){

    //TL(2), AS(3), EF(5)
    float TL, AS, EF, mediaPonderada;

    printf("Digite a primeira nota: ");
    scanf("%f", &TL);

    printf("Digite a segunda nota: ");
    scanf("%f", &AS);

    printf("Digite a terceira nota: ");
    scanf("%f", &EF);

    mediaPonderada = ((TL * 2) + (AS * 3) + (EF * 5)) / 10;

    if (mediaPonderada >= 0.0 && mediaPonderada <= 2.9){
        printf("Reprovado.");
    }else if (mediaPonderada >= 3.0 && mediaPonderada <= 4.9){
        printf("Em Recuperação");
    }else{
        printf("Aprovado");
    }

    return 0;
}