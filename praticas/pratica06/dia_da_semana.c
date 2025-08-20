#include <stdio.h>

int main(){
    int dia;
    printf("Digite um dia: ");
    scanf("%i", &dia);

    switch(dia){
        case 1: printf("Eh Domingo");break;
        case 2: printf("Eh Segunda");break;
        case 3: printf("Eh Terca");break;
        case 4: printf("Eh Quarta");break;
        case 5: printf("Eh Quinta");break;
        case 6: printf("Eh Sexta");break;
        case 7: printf("Eh Sabado");break;
        default: printf("Dia informativo invalido");
    }



    return 0;
}