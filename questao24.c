#include <stdio.h>
int main() {
   float aline = 9.0;
   float mario = 10;
   float sergio = 4.5;
   float shirley = 7.0;

    printf("%-10s %-6s\n", "ALUNA(O)", "NOTA");
    printf("%-10s %-6s\n", "=======", "=====");
    printf("%-10s %4.2f\n", "ALine", aline);
    printf("%-10s %4.2f\n", "Mario", mario);
    printf("%-10s %4.2f\n", "Sergio", sergio);
    printf("%-10s %4.2f\n", "Shirley", shirley);


    return 0;
}