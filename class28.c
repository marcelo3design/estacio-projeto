#include <stdio.h>

int main(){

    int numero;

    do
    {
        printf("Digite um número par para saír do programa: ");
        scanf("%d", &numero);

        numero % 2 == 0 ? printf("O número é par\n") : printf("O número é ímpar\n");
        
            
        
    } while (numero % 2 != 0);
    
    printf("Você digitou um número par, saíndo do programa");



}