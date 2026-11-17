#include <stdio.h>

#define DOBRO(x) x*2
#define DOBRO_CORRIGIDO(x) ((x) * 2)

int dobro(int x);

int main() {
    printf("Macro incorreta: %d\n", DOBRO(2+3));
    printf("Funcao: %d\n", dobro(2+3));
    printf("Macro corrigida: %d\n", DOBRO_CORRIGIDO(2+3));

    /*
       A macro incorreta e expandida como 2+3*2,
       resultando em 8 por causa da prioridade da multiplicacao.
       A funcao recebe o resultado de 2+3, ou seja, 5,
       e retorna 10.
       A macro corrigida usa parenteses para preservar a expressao.
    */

    return 0;
}

int dobro(int x) {
    return x * 2;
}