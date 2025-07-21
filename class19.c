#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int escolhaJogador, escolhaComputador;
    srand(time(0));

    printf("Jogo de jokenpô\n");
    printf("\nEscolha uma opção:\n");
    printf("\n1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");

    printf("\nEscolha: ");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 + 1;

    switch(escolhaJogador)
    {
        case 1:
            printf("\nJogador: Pedra");
        break;
        case 2:
            printf("\nJogador: Papel");
        break;
        case 3:
            printf("\nJogador: Tesoura");
        break;
        default:
            printf("\nOpção inválida");
        break;        
    }

    switch(escolhaComputador)
    {
        case 1:
            printf("\nComputador: Pedra\n");
        break;
        case 2:
            printf("\nComputador: Papel\n");
        break;
        case 3:
            printf("\nComputador: Tesoura\n");
        break;
        default:
            printf("\nOpção inválida\n");
        break;         
    }


    if (escolhaJogador == escolhaComputador)
    {
        printf("Você EMPATOU");
    }

    else if ((escolhaJogador == 1 && escolhaComputador == 3) ||
             (escolhaJogador == 2 && escolhaComputador == 1) ||
             (escolhaJogador == 3 && escolhaComputador == 2))
    {
        printf("Você VENCEU!");
    }

    else 
    {
        printf("Você PERDEU");
    }
    
}