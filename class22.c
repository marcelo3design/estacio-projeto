#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numjogador, numpc, resultado;
    char tipoComparacao;

    //Gerar número aleatório.
    srand(time(0));
    //número entre 1 e 100.
    numpc = rand() % 100 + 1;



    //Início do jogo:
    printf("\nBem vindo ao jogo Maior, Menor ou Igual!\n");
    printf("\nVocê deve escolher um número e o tipo de comparação.");
    printf("\nM. Maior");
    printf("\nN. Menor");
    printf("\nI. Igual");

    printf("\n\nEscolha a comparação: ");
    scanf("%c", &tipoComparacao);

    //Exibir número do jogador.
    printf("\nJogador, digite o número que deseja (entre 1 a 100): ");
    scanf("%d", &numjogador);

    switch(tipoComparacao)
    {
        case 'M':
        case 'm':
            printf("\n\nVocê escolheu a opção Maior!");
            resultado = numjogador > numpc ? 1 : 0;
            printf("\nO número do Computador é %d e o do Jogador é: %d\n", numpc, numjogador);
        break;
        case 'N':
        case 'n':
            printf("\n\nVocê escolheu a opção Menor!\n");
            resultado = numjogador < numpc ? 1 : 0;
            printf("\nO número do Computador é %d e o do Jogador é: %d\n", numpc, numjogador);
        break;
        case 'I':
        case 'i':
            printf("\n\nVocê escolheu a opção Igual!\n");
            resultado = numjogador == numpc ? 1 : 0;
            printf("\nO número do Computador é %d e o do Jogador é: %d\n", numpc, numjogador);
        break;
        default:
            printf("\n\nOpção inválida");
        break;
    }
    
        if (resultado == 1)
        {
            printf("\nVOCÊ VENDEU!");
        }        
        else
        {
            printf("\nVOCÊ PERDEU!");
        }
         
        
}