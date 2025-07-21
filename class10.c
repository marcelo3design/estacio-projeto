#include <stdio.h>

int main(){
    int n1 = 15;
    int n2 = 20;


    printf("\nNúmero 1 = %d\n", n1);
    printf("Número 2 = %d\n", n2);

    if(n1>n2)
    {
        printf("\nNúmero 1: %d, maior que o Número 2: %d\n", n1,n2);
    }
    else
    {
        printf("\nNúmero 2: %d, maior que Número 1: %d\n", n2,n1);

    }

    if(n1 % 2 == 0)
    {
        printf("\nO número 1 (%d) é par!\n", n1);
    
    }
    else
    {
        printf("\nO número 1 (%d) ´é impar!\n", n1);

    }
}