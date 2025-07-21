#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int opcao;
    int regras;
    int numeroSecreto;
    int palpite;



    printf("Menu Principal:\n");
    printf("\n1. Iniciar jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("\nEscolha uma opção: ");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
            srand(time(0));
            numeroSecreto = rand() % 10;

            printf("\nDigite um número de 0 a 9: ");
            scanf("%d", &palpite);

            if(numeroSecreto == palpite)
            {
                printf("\nVocê acertou!\n");
            }
            else
            {
                printf("\nVocê errou!\n");
            }
             
            printf("\nNúmero secreto: %d \n", numeroSecreto);                       
        break;

        case 2:
            printf("\nEscolha qual Regra você quer entender: ");
            printf("[1] [2] [3]\n");
            scanf("%d", &regras);

            switch (regras)
            {
                case 1:
                    printf("\nRegra 1");
                break;
                case 2:
                    printf("\nRegra 2");
                break;
                case 3:
                    printf("\nRegra 3"); 
            }
        case 3:
            printf("\nSaíndo do programa!");
        break;
    }
}