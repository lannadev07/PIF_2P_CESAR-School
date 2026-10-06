#include <stdio.h>

int main() {
    int segundos;
    int horas, minutos, segundosRestantes;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundosRestantes = segundos % 3600;
    minutos = segundosRestantes / 60;
    segundosRestantes = segundosRestantes % 60;

    printf("%d horas, %d minutos e %d segundos\n",
           horas, minutos, segundosRestantes);

    return 0;
}