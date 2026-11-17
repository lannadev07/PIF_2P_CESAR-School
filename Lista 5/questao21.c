#include <stdio.h>

#define SQR(x) ((x) * (x))
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))

int main() {
    int num1, num2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    printf("Quadrado do primeiro: %d\n", SQR(num1));
    printf("Quadrado do segundo: %d\n", SQR(num2));
    printf("Maior: %d\n", MAX(num1, num2));
    printf("Menor: %d\n", MIN(num1, num2));

    return 0;
}