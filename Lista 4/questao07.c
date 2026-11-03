#include <stdio.h>
#include <math.h>
//pow(x, y) --> elevar um núemro ao quadrado
//sqrt(x)

int main(){

    float num, quadrado;
    float raiz;

    printf("Digite um número real: \n");
    scanf("%f", &num);

    if (num >= 0){
        raiz = sqrt(num);
        printf("A raiz de %f é %f.", num, raiz);
    }else{
        quadrado = pow(num, 2);
        printf("O quadrado de %f é %f.", num, quadrado);
    }

    return 0;
}