Questão 01:
a. O While é pode ser executado zero vezes, pois a condição é verificada antes do bloco ser executado. O Do-While é executado no mínimo 1 vez, pois o bloco é primeiro executado depois a condição é verificada.

b. O For é mais indicado quando se sabe a quantidade exata de vezes que você quer que o programa seja executado. O While é mais utilizado quando não se sabe a qauntidade exata de repetições do programa. Já o Do-While é mais indicado quando é necessário que o código seja executado pelo menos uma vez, mesmo que a condição não seja atendida.

c. Erro de lógica. Vai ocorrer um laço infinito.


Questão 02:

a. A variável 'soma' foi declarada dentro do laço for. Se for retornar essa mesma variável FORA do laço, é como se ela não existisse.

b. a soma não é acumulada porque a variável e sempre reinicializada com o valor '0' a cada loop.

c. o código ta nos arquivos.
- Escopo de bloco: uma variável declarada dentro de { } só pode ser utilizada dentro daquele bloco.
- Visibilidade: é o local do código onde a variável pode ser acessada. soma, na versão original, não é visível fora do for.
- Tempo de vida: uma variável local como soma existe enquanto a execução está dentro do bloco onde ela foi declarada. Ao sair do bloco, sua existência termina.

Questão 03:
a. 1: 36, 2: 18, 3: 9, 4: 4, 5: 2 e 6: 1

b. O Trecho B lê uma tecla a cada repetição e continua até o usuário pressionar X. A expressão 'ch + 1' imprime o caractere seguinte na tabela ASCII. Os parênteses em (ch = getch()) são necessários para que a atribuição seja feita primeiro e seu resultado seja comparado com 'X'

c. Usando um 'break'


Questão 04:
a. O 'break' interrompe imediatamente o laço em que está e a execução continua na primeira instrução depois desse laço.

b. O continue ignora o restante do bloco da iteração atual e passa para a próxima iteração. No For, após o continue, é executada imediatamente a expressão de incremento.

c. O break interrompe somente o laço mais interno, ou seja, aquele em que o break está localizado. O laço externo continua normalmente.


Questão 05:
a. 5

b. 
i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10

c. ta nos arquivos.


Questão 06:
a. x = 6

b. O código primeiro compara o valor atual e depois incrementa x:
0	0 < 5 → verdadeiro	1
1	1 < 5 → verdadeiro	2
2	2 < 5 → verdadeiro	3
3	3 < 5 → verdadeiro	4
4	4 < 5 → verdadeiro	5
5	5 < 5 → falso	    6

c. ta nos arquivos