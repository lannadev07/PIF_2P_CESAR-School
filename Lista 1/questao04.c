
#include <stdio.h>
#include <stdlib.h>;  //Não é utilizado ";" ao declarar uma biblioteca

int Main{}  /Função main está escrita com "M" maiúsculo e com chaves fechadas
(  //O inicio e o final da função main não utilizam colchetes
printf( Existem %d semanas no ano.,52); /*A string não está entre aspas e 
                não foi definida nenhuma variável,apenas foi atribuído o valor 52*/
cout << endl;
system("PAUSE");
return 0;
)

/*Correção:*/

#include <stdio.h>
#include <stdlib.h>  

int main() {  
    int var = 52;
    printf("Existem %d semanas no ano.\n", var); 

    system("PAUSE");
    return 0;
}   