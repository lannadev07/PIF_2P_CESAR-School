//c.

#include<stdio.h>

int main(){
    int comando = getchar();

    while (comando == '\n')
        comando = getchar();
    printf("%c", comando);
    return 0;
}