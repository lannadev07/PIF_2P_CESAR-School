#include <stdio.h>

int main() {

    float lado, base, altura;
    float areaQuadrado, areaRetangulo, areaTriangulo;

    //Quadrado
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    areaQuadrado = lado * lado;

    //Retangulo
    printf("Digite a base do retangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    areaRetangulo = base * altura;

    //Triangulo
    printf("Digite a base do triangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);

    areaTriangulo = (base * altura) / 2;

    printf("\nResultados:\n");
    printf("Area do quadrado: %.2f\n", areaQuadrado);
    printf("Area do retangulo: %.2f\n", areaRetangulo);
    printf("Area do triangulo: %.2f\n", areaTriangulo);

    return 0;
}
