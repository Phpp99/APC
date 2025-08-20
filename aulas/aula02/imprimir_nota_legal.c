#include <stdio.h>

int main() {
    printf("--------------------------------------------\n");
    printf("               NOTA LEGAL                   \n");
    printf("--------------------------------------------\n");
    printf("Item                         Qde  Prc  Valor\n");
    printf("%s %19i %5.2f %5.2f\n", "Caneta Azul", 2, 2.00, 4.00);
    printf("%s %22i %5.2f %5.2f\n", "Borracha", 1, 5.00, 5.00);
    printf("%s %16i %6.2f %5.2f\n", "Resma de Papel", 1, 12.00, 12.00);
    printf("--------------------------------------------\n");
    printf("TOTAL................................R$%.2f\n",21.0);


    return 0;

}