#include <stdio.h>

int main() 
{
    int opcao;
    float saldo = 1000;
    float deposito;
    float saque;

    printf("\nEscolha uma opção:\n");
    printf("\n1. Verificar saldo.");
    printf("\n2. Fazer depósito.");
    printf("\n3. Fazer saque.\n");
    printf("\n?: ");
    scanf("%d", &opcao);
    
    switch (opcao)
    {
    case 1:
        printf("\nO seu saldo é: R$ %.2f", saldo);
    break;

    case 2:
        printf("\nDigite o banco que você deseja depositar: ");
        printf("\nDigite a agência que você deseja depositar: ");
        printf("\nDigite a conta que você deseja depositar: ");
    break;

    case 3:
        printf("\nDigite o valor a sacar: ");
    break;
    
    default:
        printf("Opção inválida!");
    }   
}   