#include <stdio.h>

int main(){
    char tecla;

    printf("Precione uma tecla e depois ENTER: ");
    scanf("%c", &tecla); // tecla = 'a';
    getchar(); // ler o \n de leitura anterior

    printf("Voce pressionou a tecla '%c'\n", tecla);

    printf("Precione uma tecla e depois ENTER: ");
    scanf("%c", &tecla); // tecla = 'a';
    getchar();
    
    printf("Voce pressionou a tecla '%c'\n", tecla);

    char nome [31];
    printf("Entre com seu nome:");
    scanf("%[^\n]s",nome);
    printf("Vc digitou %s\n", nome);
    return 0;
}