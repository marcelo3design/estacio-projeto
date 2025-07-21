#include <stdio.h>

int main(){
    int valor;

    printf("Digite um valor qualquer: ");
    scanf("%d", &valor);

    if(valor>0 && valor % 2 == 0)
    {
        printf("Positivo.");
        printf(" é PAR");
    }
    else if(valor>0 && valor %2 != 0)
    {
        printf("O valor é impar");
    }
    else if(valor==0)
    {
        printf("Zero.");
    }
    else
    {
        printf("Negativo.");
    }


    


}

