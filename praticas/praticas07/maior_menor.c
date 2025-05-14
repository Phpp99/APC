#include <stdio.h>


int main() {
    int numero;
    int maior;
    int menor;
    
    printf("Digite um numero (0 para encerrar): ");
    scanf("%d", &numero);

    maior = numero;
    menor = numero;

    while (numero != 0) {
        
        if (numero > maior) {
            maior = numero;
        }

        
        if (numero < menor) {
            menor = numero;
        }

       
        printf("Digite um numero (0 para encerrar): ");
        scanf("%d", &numero);
    }

    
    printf("O maior numero digitado foi: %d\n", maior);
    printf("O menor numero digitado foi: %d\n", menor);

    return 0;
}