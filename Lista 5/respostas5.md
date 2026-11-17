Questão 01:
a. Protótipo: float celsius(float); — declara a função e informa seus parâmetros e retorno; Chamada: c = celsius(f); — executa a função, enviando f como argumento; Definição: float celsius(float fahr) { ... } — contém as instruções da função.

b. O protótipo informa ao compilador o nome, os parâmetros e o tipo de retorno da função, permitindo verificar se a chamada está correta. Sem ele, uma chamada anterior à definição gera erro em C moderno.

c. O tipo é float, pois esse é o tipo do valor retornado. O tipo da função é determinado pelo retorno, não pelos parâmetros recebidos.


Questão 02:
a. Uma função retorna apenas um valor por meio de return. O programador pretendia retornar a soma e a média, mas o operador vírgula faz com que apenas o último valor (media) seja retornado.

b. return; encerra imediatamente uma função void. Não é obrigatório no final, pois a função pode terminar naturalmente.

c. 
int calcularMedia(int a, int b, int c) {
    int soma = a + b + c;
    return soma / 3;
}

int calcularSoma(int a, int b, int c) {
    return a + b + c;
}

Questão 03:
a. - void exibe_mensagem(char* msg): recebe um parâmetro (msg) e
não retorna valor. - int obter_codigo(void): não recebe parâmetros e
retorna um inteiro. - void limpar_tela(void): não recebe parâmetros e
não retorna valor.

b. Uma função com retorno devolve um valor que pode ser usado em uma
expressão ou atribuição, como o resultado de uma soma. Uma função void
executa uma ação sem devolver um valor, como exibir uma mensagem ou
limpar a tela.

c. Não. limpar_tela() é uma função void, portanto não retorna um
valor que possa ser atribuído à variável x.


Questão 04:
a. O caso base é n == 0, que retorna 1. O passo recursivo é
n * fatorial(n - 1). Sem o caso base, as chamadas continuariam sem uma
condição de parada, podendo causar estouro da pilha.

b. Empilhamento:
fatorial(4)
4 * fatorial(3)
3 * fatorial(2)
2 * fatorial(1)
1 * fatorial(0)

Desempilhamento:
fatorial(0) = 1
fatorial(1) = 1 * 1 = 1
fatorial(2) = 2 * 1 = 2
fatorial(3) = 3 * 2 = 6
fatorial(4) = 4 * 6 = 24

c. Cada chamada recursiva ocupa espaço na pilha de execução,
armazenando seus parâmetros e informações necessárias para continuar o
processamento. Sem um caso base, a função pode continuar chamando a si
mesma até esgotar o espaço disponível na pilha.

Questão 05:
a. 25 e 8. SQR(2+3) é expandida como ((2+3)*(2+3)), resultando em 25.
DOBRO(2+3) é expandida como 2+3*2, resultando em 8, pois a
multiplicação tem prioridade sobre a adição. Os parênteses protegem a
expressão recebida pela macro.

b. #define é uma diretiva do pré-processador, não uma instrução
comum de C; por isso, não termina com ponto e vírgula. Por convenção, os
identificadores de macros e constantes são escritos em maiúsculas para
diferenciá-los de variáveis e funções.

c. A forma #define PRN (n) printf("%d", n) está incorreta porque o
espaço entre o nome e o parêntese faz com que (n) não seja reconhecido
como lista de parâmetros da macro. A forma correta é: #define PRN(n) printf("%d", (n)). Uma macro é substituída pelo pré-processador antes da compilação; umafunção é chamada durante a execução do programa.

Questão 06:
a. #include <stdio.h> é usado normalmente para incluir bibliotecas
padrão. #include "areas.h" é usado normalmente para incluir arquivos
de cabeçalho criados pelo programador.

b. #undef SOMA cancela a definição anterior da macro SOMA. A
forma #undef SOMA(x,y) está incorreta porque #undef recebe apenas o
nome da macro, sem seus parâmetros.

c. "Modo normal". Essa decisão é tomada durante o pré-processamento, antes da compilação.
As diretivas são processadas nessa etapa e não são executadas como instruções do programa.

