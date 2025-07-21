#include <stdio.h>

int main(){
    int numero, i;





    printf("\nDigite o valor que você gostaria de multiplicar: ");
    scanf("%d", &numero);
    

    for (i = 0; i <=10; i++)
    {
        printf("\n%d x %d = %d", i, numero, i * numero);
    }



}