#include <stdio.h>

int main(){
    int n1, n2;
    int soma, subtracao, multiplicacao, divisao;

    printf("\nDigite o valor do primeiro número: ");
    scanf("%d", &n1);
    
    printf("\nDigite o valor do segundo número: ");
    scanf("%d", &n2);

    soma = n1 + n2;
    subtracao = n1 - n2;
    multiplicacao = n1 * n2;
    divisao = n1 / n2;

    printf("\nA soma é: %d", soma);
    printf("\nA subtração é: %d", subtracao);
    printf("\nA multiplicação é: %d", multiplicacao);
    printf("\nA divisão é: %d", divisao);
    


}