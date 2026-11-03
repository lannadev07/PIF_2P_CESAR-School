/* int x = 15, y = 5;
if (x > 10)
    if (y > 10)
        printf("Opção A\n");
else
    printf("Opção B\n"); */



#include <stdio.h>

int main(){
        
    int x = 15, y = 5;

    if (x > 10){
        if (y > 10){
            printf("Opção A\n");
        }
    }else{
        printf("Opção B\n");
    }   

    return 0;
}