#include <stdio.h>

int main() {
    int C;
    double F, K;

    printf("C\tF\tK\n");

    for (C = 0; C <= 100; C += 5) {
        F = (9.0 * C) / 5.0 + 32;
        K = C + 273.15;

        printf("%.2d\t%.2f\t\t%.2f\n",
               C, F, K);
    }

    return 0;
}