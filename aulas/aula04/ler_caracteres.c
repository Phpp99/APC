#include <stdio.h>

int main(){
    char tecla;

    printf("Precione uma tecla e depois ENTER: ");
    scanf("%c", &tecla); // tecla = 'a';
    getchar(); // ler o \n de leitura anterior

    printf("Voce pressionou a tecla '%c'\n", tecla);

    printf("Precione uma tecla e depois ENTER: ");
    scanf("%c", &tecla); // tecla = 'a';

    printf("Voce pressionou a tecla '%c'\n", tecla);
    
    
    return 0;
}