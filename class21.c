#include <stdio.h>

int main(){
    
    int opcao;
    float nota1, nota2, media;


    printf("\n\nMenu de Gerenciamento de Estudantes\n");
    printf("1. Calcular Média\n");
    printf("2. Determinar Status\n");
    printf("3. Sair");
    printf("\n\nEscolha uma opção: ");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
            printf("\nCalcular a média!\n");
            printf("\nDigite a primeira nota: ");
            scanf("%f", &nota1);
            printf("\nDigite a segunda nota: ");
            scanf("%f", &nota2);
            media = (nota1 + nota2) / 2;         
            nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10 ? printf("\nA média é %.2f", media) : printf("\nAs notas estão erradas, devem estar dentro de 0 a 10");
            

        break;
        case 2:
            printf("\nDeterminar status!\n");
            printf("\nAdicione a média do aluno: ");
            scanf("%f", &media);
            media >= 5 ? printf("\nAPROVADO") : printf("\nREPROVADO");
        break;
        case 3:
            printf("Sair do programa");
        break;
        default:
            printf("Opção inválida");
        break;

    }










}