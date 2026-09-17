#include <stdio.h>

int main() {

    float nota1, nota2, nota3, nota4;
    float mediaArit, mediaPond;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    printf("Digite a nota 4: ");
    scanf("%f", &nota4);

    //Media aritmetica
    mediaArit = (nota1 + nota2 + nota3 + nota4) / 4;

    //Media ponderada
    mediaPonda = (nota1 * 1 + nota2 * 2 + nota3 * 3 + nota4 * 4) / 10;

    printf("\nResultados:\n");
    printf("Media aritmetica: %.2f\n", mediaArit);
    printf("Media ponderada: %.2f\n", mediaPond);

    return 0;
}
