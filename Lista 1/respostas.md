Questão 07:
a. printf("\n\tBom dia! Shirley."); 
--> 
    Bom dia! Shirley.
b. printf("Você já tomou café? \n"); -->Você já tomou café? 
c. printf("\n\nA solução não existe!\nNão insista."); 
-->

A solução não existe!
Não insista.
d. printf("Duas\tlinhas\tde\tsaída\nou\tuma?"); -->
Duas    linhas    de    saída
ou      uma?
e. printf("%s\n%s\n%s\n", "um", "dois", "três"); 
-->
um
dois
três


Questão 08:
- As bibliotecas servem para trazer algumas funções, como a "printf()" e a "system("PAUSE")".
- A função "int main()" abre o bloco de comando principal.
- "printf()" serve para mostrar uma mensagem no terminal.
- "\n" pula uma linha
- "\t" aplica um tab à mensagem.
- '\""\' serve para imprimir aspas dentro da string.
- "system("PAUSE")" pausa o programa até que uma tecla seja pressionada.
- "return 0;" fecha o programa.
- SAÍDA: 

    "Primeiro programa"


Questão 09:
- SAÍDA: 
        "Primeiro programa"
- %c: armazena um caractere tipo char.
- '\n': pula uma linha 2.
- '\t': insere uma tabulação (tab).
- '"': imprime aspas


Questão 10:
b) Verdadeiro (a linguagem C diferencia rigorosamente letras maiúsculas de minúsculas).


Questão 11:

| Constante | Classificação (Tipo de Constante) | Tipo Base em C |
|---|---|---|
| '\r' | Sequência de escape | 'char' |
| '2130' | Constante inteira decimal | 'int' |
| '-123' | Constante inteira decimal | 'int' |
| '33.28' | Constante de ponto flutuante | 'double' |
| '0XFA' | Constante inteira hexadecimal | 'int' |
| '0101' | Constante inteira octal | 'int' |
| '2.0e30' | Constante de ponto flutuante | 'double' |
| '\xDC' | Sequência de escape hexadecimal | 'char' |
| ''"' | Constante de caractere | 'int' |
| ''\\' | Constante de caractere | 'int' |
| '"F"' | Constante string | 'char' |
| '0' | Constante inteira decimal | 'int' |
| '"0"' | Constante string | 'char' |
| '"F"' | Constante string | 'char' |
| '-4567.89' | Constante de ponto flutuante | 'double' |


Questão 12:

| Instrução | Status | Justificativa Teórica |
|---|---|---|
| 'int a;' | Correto | Declara uma variável 'a' do tipo 'int'. |
| 'float b;' | Correto | Declara uma variável 'b' do tipo 'float'. |
| 'double float c;' | Incorreto | Não é permitido declarar 'double' e 'float' juntos como tipos diferentes na mesma declaração. Deve ser 'double c;' ou 'float c;'. |
| 'unsigned char d;' | Correto | Declara uma variável 'd' do tipo 'unsigned char', que armazena valores inteiros sem sinal. |
| 'unsigned e;' | Correto | Em C, 'unsigned' sem outro especificador de tipo equivale a 'unsigned int'. |
| 'long float f;' | Incorreto | 'long float' não é um tipo válido em C. Para números reais, pode-se usar 'float', 'double' ou 'long double'. |
| 'long g;' | Correto | Declara uma variável 'g' do tipo 'long int'. O 'int' pode ser omitido. |
| 'long double h;' | Correto | Declara uma variável 'h' do tipo 'long double', usado para números de ponto flutuante com maior precisão. |


Questão 13:
c) São arquivos de texto ASCII padrão contendo protótipos de funções, definições de constantes, macros e tipos.

Questão 14:
a) Instruir o compilador a carregar as definições das funções da biblioteca padrão antes de compilar o código-fonte.

Questão 15:
c) Uma diretiva especial para o pré-processador C, executada antes da compilação.

Questão 16:
c) Pré-processador (fase do compilador que altera o programa-fonte antes da compilação propriamente dita).

Questão 17:
d) printf "Primeiro programa" ;  Essa alternativa não possui parênteses, algo que é essencial para o 'printf()'