Questão 01:
a. '2'
b. Por quê "2.97" é um valor do tipo 'float' que foi erroneamente declarado como inteiro 'int'. Além disso, também foi utilizado o '%d' que serve para armezenar valores do tipo int, sendo assim, a saída não poderia ser o valor original float, mas sim sua parte inteira. Nome do fenômeno: conversão IMPLÍCITA com truncamento.
c. Pode ser controlado através da conversão EXPLÍCITA e evitando a tipagem incorreta de variáveis.

Questão 02:
a. suas funções não são portáveis e também não fazem parte do padrão de linguagem C, fazendo com que elas não funcionem em determinados sistemas maodernos.
b. funções: getchar() {lê um caractere.}, putchar() {escreve um caractere.}, fgetc() {lê um caractere de um fluxo.} e fputc() {escreve um caractere em um fluxo.}
c. (a resposta está em outra pasta!)

Questão 04:
int a = 1, b = 2, c = 3, d = 4;

a += b + c; // Valor final de a: 3 + 2 = 5, 1 (a) + 5 = 6 -> a = 6
b *= c = d + 2; // Valores finais de b e c: 4 + 2 = 6, c = 6, b = 2 (b) * 6 = 12 -> c = 6, b = 12
d %= a + a + a; // Valor final de d: 3 * 1 = 3, d = 4 % 3 = 0.3 -> d = 0.3
d -= c -= b -= a; // Valor final de d, c e b: b = 2 - 1 = 1, c = 3 - 1 = 2, d = 4 - 2 = 2 -> b = 1, c = 2, d = 2
a += b += c += 7; // Valor final de a, b e c: c = 3 + 7 = 10, b = 2 + 10 = 12, a = 1 + 12 = 13 -> a = 12, b = 12, c = 10

Questão 05:
int i = 1
j = 2
k = 3
n = 2;
float x = 3.3
y= 4.4;

a) i < j + 3                    => Resultado: 1
b) 2 * i - 7 <= j - 8           => Resultado: 0
c) -x + y >= 2.0 * y            => Resultado: 0
d) x == y                       => Resultado: 0
e) !(n - j)                     => Resultado: 1
f) !n - j                       => Resultado: 1
g) i && j && k                  => Resultado: 1
h) i || j - 3 && k              => Resultado: 1
i) i < j && 2 >= k              => Resultado: 0
j) i == 2 || j == 4 || k == 5   => Resultado: 0

Questão 06:
a. prefixado: primeiro faz a operação e depois atribui o valor.
   posfixado: primeiro atribui e depois faz a operação.
Trecho A: n = 5, x = 6
Trecho B: m = 6, y = 6
b. n++ modifica n enquanto os outros argumentos o acessam, e C não define a ordem dessas operações.
