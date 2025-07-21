#include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[50];

    printf("\nDigite sua idade: ");
    scanf("%d", &idade);
    

    printf("\nDigite sua altura: ");
    scanf("%f", &altura);
    

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    

    printf("\nDigite sua matricula: ");
    scanf("%d", &matricula);

    printf("\nSua idade é: %d", idade);
    printf("\nA altura é: %.2f", altura);
    printf("\nO nome é: %s", nome);
    printf("\nSua matrícula é: %d", matricula);

    return 0;



}
