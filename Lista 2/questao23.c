#include <stdio.h>

int main() {

    int hora, minuto, segundo;
    int duracaoHora, duracaoMinuto, duracaoSegundo;
    int totalSegundos;
    int horaFinal, minutoFinal, segundoFinal;

    printf("Digite a hora de inicio: ");
    scanf("%d", &hora);

    printf("Digite os minutos de inicio: ");
    scanf("%d", &minuto);

    printf("Digite os segundos de inicio: ");
    scanf("%d", &segundo);

    printf("Digite a duracao em horas: ");
    scanf("%d", &duracaoHora);

    printf("Digite a duracao em minutos: ");
    scanf("%d", &duracaoMinuto);

    printf("Digite a duracao em segundos: ");
    scanf("%d", &duracaoSegundo);

    totalSegundos = hora * 3600;
    totalSegundos = totalSegundos + minuto * 60;
    totalSegundos = totalSegundos + segundo;

    totalSegundos = totalSegundos + duracaoHora * 3600;
    totalSegundos = totalSegundos + duracaoMinuto * 60;
    totalSegundos = totalSegundos + duracaoSegundo;

    horaFinal = totalSegundos / 3600;
    minutoFinal = (totalSegundos % 3600) / 60;
    segundoFinal = totalSegundos % 60;
    horaFinal = horaFinal % 24;

    printf("O experimento terminara as %02d:%02d:%02d\n",
           horaFinal, minutoFinal, segundoFinal);

    return 0;
}
