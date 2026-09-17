#include<stdio.h>

int main(){

    float tempC, tempF, tempK;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &tempC);

    tempF = (tempC * 9.0/5.0) + 32.0;
    tempK = tempC + 273.15;

    printf("Temperaturas: C° = %.2f | F = %.2f | K = %.2f", tempC, tempF, tempK);

    return 0;
}