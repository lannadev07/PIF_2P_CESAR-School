/*Esse programa mostra o uso de comentários em várias linhas
* e mostra também o uso de comentários em uma única linha*/

//Primeiro programa
#include <stdio.h>  //Para printf()
#include <stdlib.h>  //Para system(), (vê a saída e depois fecha o programa)

int main() //Função main 
{   //início do corpo da função main
    int var = 2007;
    printf("O meu ano de nascimento foi %d", var);  //Chamada à função printf
    system("PAUSE");  //Chamada à função system
    
    return 0; //Retorna o valor 0 se o programa for executado corretamente
}//Fim do corpo da função main