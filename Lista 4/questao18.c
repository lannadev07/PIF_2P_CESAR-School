#include <stdio.h>

int main() {
    int opcao;
    float entrada;
    float resultado;

    printf("1. Celsius para Fahrenheit\n");
    printf("2. Celsius para Kelvin\n");
    printf("3. Fahrenheit para Celsius\n");
    printf("4. Kelvin para Celsius\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("Opcao invalida!\n");
        return 0;
    }

    printf("Digite a temperatura: ");
    scanf("%f", &entrada);

    switch (opcao) {
        case 1:
            resultado = entrada * 1.8 + 32;
            break;
        case 2:
            resultado = entrada + 273.15;
            break;
        case 3:
            resultado = (entrada - 32) / 1.8;
            break;
        case 4:
            resultado = entrada - 273.15;
            break;
    }

    printf("Temperatura convertida: %.2f\n", resultado);

    return 0;
}