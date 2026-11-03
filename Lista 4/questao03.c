/* media = (nota1 + nota2) / 2.0;
situacao = (media >= 7.0) ? 'A' : 'R'; */


#include <stdio.h>

int main(){
    int nota1, nota2;
    float media;
    char situacao[1];

    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);

    media = (nota1 + nota2) / 2.0;

    if (media >= 7.0){
        printf('A');
    }else{
        printf('R');
    }


    return 0;
}