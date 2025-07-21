#include <stdio.h>

int main(){
    int valor;

    printf("Digite um valor qualquer: ");
    scanf("%d", &valor);

    if(valor > 0)
        if(valor % 2 == 0)
        {
            printf("É par");
        }
        else
        {
            printf("É impar");
        }
}
