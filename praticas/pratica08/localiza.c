#include <stdio.h>

int main(){
    int numeros[10];
    int numero;

    for(int i=0; i<10; i++) {
        printf("Digite 10 numeros: ");
        scanf("%i", &numeros[i]);
    }
    
    printf("Digite um numero: ");
    
    scanf("%i", &numero);

    int achou = -1;

    for (int i=0; i<10; i++){
        if (numeros[i] == numero) {
            achou = i;
        break;
        }          
    }
    if (achou < 0){
        printf("O numero nao foi encontrado!\n");
    }else {
        printf("O numero foi encontrado na posição %i\n", achou);
    }

   

    return 0;
}