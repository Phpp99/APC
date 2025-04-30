#include <stdio.h>
#include <math.h>

int main(){
    int a;
    int b;
    int c;

    printf("Escreva o valor das variaveis: ");
    scanf("%i, %i, %i", &a , &b, &c);
    
    float delta = b*b - 4*a*c;

    if(delta < 0){
        printf("Nao tem raizes reais");
    }else{
        float x1 = (-b + sqrt(delta)) / 2*a;
        float x2 =  (-b - sqrt(delta)) / 2*a;
    
        printf("%f, %f", x1, x2);

    }

    return 0;
}