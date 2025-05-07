#include <stdio.h>

int main(){
    int numero;
    int fatorial;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    for(int i=numero; i>0; i--) {
        fatorial = fatorial * i;
    }
    
    printf("Digite um %i e %i")
    
    return 0;
}