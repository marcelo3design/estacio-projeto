#include <stdio.h>

int main(){

    int torre = 0, bispo = 0, rainha = 0;

    printf("\n----XADREZ----\n");

    
    printf("\n-A torre deve mover-se 5 casas para a direita!\n");    
    while (torre != 5)
    {
        printf("Direita\n");
        torre++;
    }

    printf("\n-O bispo deve mover-se 5 casas na diagonal para cima e à direita!");    
    do
    {
        printf("\nCima");
        printf("\nDireita");
        bispo++;
    }while(bispo != 5);
    

    printf("\n\n-A rainha deve mover-se 8 casas para a esquerda!\n");
    for (rainha = 0; rainha != 8; rainha++)
    {
        printf("Esquerda\n");
    }    
}