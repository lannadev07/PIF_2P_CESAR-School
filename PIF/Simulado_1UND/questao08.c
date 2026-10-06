// <math.h>
// sqrt(x): raiz quadrada
// pow(x,y): potência
// abs(x): valor absoluto
// round(x): arredonda para o inteiro mais proximo
// fmod(x,y): resto de divisão com números reais
// ceil(x): arredonda pra cima
// floor(x): arredonda pra baixo

#include <stdio.h>
#include <math.h>

int main(){
    float R, A, V;
    double PI = 3.14159265;
    
    printf("Informe o valor do raio R da esfera: ");
    scanf("%f", &R);

    A = 4 * PI * pow(R, 2);
    V = (4.0/3.0) * PI * pow(R, 3);

    printf("Raio: %f | Área: %f | Volume: %f", R, A, V);

    return 0;
}