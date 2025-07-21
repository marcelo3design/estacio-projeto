#include <stdio.h>


int main (){
    int idade;
    int resultado;


    printf("\nDigite a idade: ");
    scanf("%d", &idade);


    idade >= 18 ? printf("Maior de idade\n") : printf("Menor de idade\n");

    


}