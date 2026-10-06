Questão 01.
c. Todos os pares de nomes ('valor'/'VALOR', 'peso'/'Peso', 'taxa'/'TAXA') representam identificadores
totalmente distintos para o compilador.


Questão 03:
int a = 2, b = 4, c = 5, d = 10;

a += b + c;          //Valor final de a: 9 + 2 = 11 
b *= c = d - 2;      //Valor final de b e c: c = 8, b = 8 * 4 = 32
d %= a + 3;          //Valor final de d: d = 5 % 5 = 0
a += b += c += 5;    //Valores finais de a, b e c: c = 10, b = 14, a = 16


Questão 04:
inteiras i = 2, j = 3, k = 0;
ponto flutuante x = 2.5, y = 5.0;

a. i < j + 2                    => Resultado: 2 < 3 + 2 = 2 < 5; R: 1
b. 2 * i - 5 <= j - 4           => Resultado: 2 * 2 - 5 <= 3 - 4; R: 1
c. !k && (x + y >= 7.5)         => Resultado: ~0 and (2.5 + 5.0 >= 7.5) R: 1
d. !(i == j) || (y / x == 2.0)  => Resultado: ~(2 == 3) ou (5.0 / 2.5 == 2.0) R: 1
e. i == 2 && j == 4 || k == 0   => Resultado: 2 == 2 and 3 == 4 ou 0 == 0 R: 1


Questão 05:
a. Qual é a diferença essencial entre while e do-while em relação ao número mínimo de execuções do
bloco de código e ao momento do teste condicional?
R: while testa a condição antes de executar o bloco, então pode executar 0 vezes. Já do-while executa o bloco pelo menos 1 vez, pois testa a condição depois.

b. Em que cenários o laço for se apresenta como a escolha mais elegante e legível frente ao laço while?
R: O for é mais adequado quando sabemos ou controlamos claramente quantas vezes o laço deve ser executado, como percorrer uma sequência ou repetir algo com um contador.

c. O trecho de código 'while (condicao);' (com ponto-e-vírgula ao final do cabeçalho) constitui um erro de compilação ou de lógica? O que acontece se condicao for verdadeira?
R: while (condicao); é válido em C, portanto não é erro de compilação. Porém, geralmente é um erro de lógica. O ';' faz com que o while tenha um bloco vazio.


Questão 06:
a. Por que o compilador emitirá um erro de compilação na instrução printf final?
R: Por que a variável 'soma' foi declarada dentro do bloco for, sendo assim, ela so existe dentro daquele espaço e não pode ser usada fora dele.

b. Quais iterações do laço serão efetivamente executadas e qual o impacto dos comandos continue e
break no fluxo?
R: os valores 1, 2, 3, 4, 6 e 7 serão executados. por conta do 'continue' o 5 é pulado e por conta do 'break' o laço for é encerrado sem executar os valores 9 e 10.

c. Reescreva o código corrigindo o escopo de 'soma' e apresente o resultado que será impresso no
console.
R: