Questão 01:
a. if (x = 0) --> a variável 'x' está atribuindo (armazenando) o valor zero, sendo sendo executado pois result em erro lógico (sempre será falso) ; if (x == 0) --> a variável 'x' está sendo comparada (comparação de igualdade) ao valor zero, será executado se a condição for verdadeira.

b. Interpreta como verdadeiro (qualquer outro valor diferente de zero) e falso (zero), mesmo não comparando explicitamente.

c. if (x = -5) --> o comando será executado, pois 'x' está sendo atribuído a um valor diferente de zero, e uqnado isso ocorre, o bloco de comando é executado e não ignorado.



Questão 02:
a. Opção B é exibida. Ela é exibida porque 'y' está atribuído ao valor 5, mas o if em que essa variável aparece está sendo comparado if (y > 10) o que é falso, pulando direto para o else que contém a opção B.

b. Em C, o else sempre se associa ao if mais próximo que ainda não tenha um else, independentemente da indentação do código.



Questão 03:
a. O operador ternário executa uma opção caso a condição seja verdadeira e outra caso seja falsa. Nesse caso, ao compararmos 6.8 >= 7.0 notamos que essa comparação é falsa, portanto será executada a opção 'R' (falsa), e nao 'A' (verdadeira).

c. Não, pois o operador ternário possui limitações em relação à execução de múltiplos comandos. O operador ternário é utilizado principalmente para decisões simples, nas quais escolhemos entre dois valores ou expressões, dependendo de uma condição.



Questão 04:
a. Saída do terminal: Prata, Ouro. Como o case 2 não possui o 'break', o bloco de comando continua até passar por uma condição que contenha o break (nesse caso, o case 3 possui o break).

b. Parar o programa quando uma condição é atendida. Fall-through (execução contínua).

c. O comando switch aceita tipos inteiros, como int e char, mas não aceita float ou double diretamente, pois sua expressão deve ser de tipo inteiro, conforme o padrão ANSI C.



Questão 05:
a. Saída do terminal: a = 0, b = 5, c = 8. O incremento nao é executado porque como 'a = 0' e existe a condição 'a != 0', está condição torna todo o if falso por conta do uso do '&&', não analisando o restante da condição do if.

b. No curto-circuito, a segunda condição é ignorada quando o resultado da expressão lógica já pode ser determinado pela primeira condição. Isso evita avaliações desnecessárias e pode impedir a execução de operações como incrementos (++) e chamadas de funções.

c. O incremento de b não acontece devido ao curto-circuito do operador ||. Como a primeira condição é verdadeira, o if é executado e c passa de 10 para 20. Saída do terminal: a = 0, b = 5 e c = 20.



Questão 06:
a. Saída do termial: Idoso, Adulto, Jovem. O programa possui três comandos if independentes e um else associado ao terceiro if, então o programa não interrompe a verificação após encontrar uma condição verdadeira.

b. 'if' independentes são avaliados separadamente, permitindo que várias condições verdadeiras sejam executadas, enquanto uma cadeia else-if verifica as condições em sequência e executa apenas o primeiro bloco em que a condição seja verdadeira.



