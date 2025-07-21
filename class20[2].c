#include <stdio.h>


int main (){
    int idade;
    int resultado;


    printf("\nDigite a idade: ");
    scanf("%d", &idade);


    resultado = idade >= 18 ? 1 : 0;

    if (resultado == 1){
        printf("Maior de idade");
    }
    else
    {
        printf("Menor de idade");
    }
    


}