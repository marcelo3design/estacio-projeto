#include <stdio.h>

int main(){

    int n1;
    int n2;

    n1 = 20;
    n2 = 5;



    if (n1>n2){
        printf("\nSe o número 1 for maior que o número 2, o IF vai funcionar.\n");
        printf("Caso contrário, vai aparecer apenas os códigos que estão fora desse IF\n");
    }
    
    if (n1 % 2 == 0){
        printf("\nSe o número 1 dividído por 2 for igual a 0, essa mensagem será apresentada!");        
    }



    printf("\nFora do IF\n");
    printf("Número 1: %d\n", n1);
    printf("Número 2: %d\n", n2);






}