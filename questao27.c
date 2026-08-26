#include <stdio.h>
#include <stdlib.h>
int main(){
    int temposegundos, horas, min, seg;
    printf("Digite o tempo total em segundos: ");
    scanf("%d", &temposegundos);

    horas = temposegundos/3600;
    min = (temposegundos % 3600) / 60;
    seg = temposegundos % 60;

    printf("O tempo %d segundos, corresponde a:\n %d horas, %d minutos, %d segundos\n", temposegundos, horas, min, seg);

    return 0;
}