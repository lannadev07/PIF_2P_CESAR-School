#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;
    for (i = 1; i <= 10; i++) {
    if (i == 5) //as chaves so sao obrigatorias caso seja necessario executar mais de uma ação
        continue;
    if (i == 8) 
        break;
    soma += i * i;
    }

    printf("Soma final = %d\n", soma);
    system("PAUSE");

    return 0;
}
// R: 115