#include <stdio.h>



// cavalo> cima, cima, direita
// bispo> cima>direita 5x
void movebispo(int bispo)
{
    if (bispo > 0)
    {
        printf("Direita > Cima\n");
        movebispo(bispo -1);
    }
}
void movetorre(int torre)
{
    if (torre > 0)
    {
        printf("Direita\n");
        movetorre(torre -1);
    }
}
void moverainha(int rainha)
{
    if (rainha > 0)
    {
        printf("Esquerda\n");
        moverainha(rainha - 1);
    }
}
void movecavalo(int cavalo)
{
    if (cavalo > 0)
    {
        printf("Cima > Cima > Direita");
        movecavalo(cavalo - 1);
    }
}


int main()
{
    int bispo_qtd = 5, torre_qtd = 5, rainha_qtd = 8, cavalo_qtd = 1;

    printf("\n----XADREZ----\n");

    printf("\nA bispo percorre: \n");
    movebispo(bispo_qtd);
    
    printf("\nA torre percorre: \n");
    movetorre(torre_qtd);

    printf("\nA rainha percorre: \n");
    moverainha(rainha_qtd);

    printf("\nO Cavalo percorre: \n");
    movecavalo(cavalo_qtd);
}



