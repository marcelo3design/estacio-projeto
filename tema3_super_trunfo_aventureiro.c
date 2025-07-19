#include <stdio.h>

int main(){
    
    char pais1[] = "Brasil";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int numero_de_pontos_turisticos1 = 50;
    float densidade_pop1;
    float pib_per_capita1;
    
    char pais2[] = "Estados Unidos";    
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int numero_de_pontos_turisticos2 = 30;
    float densidade_pop2;
    float pib_per_capita2;

    densidade_pop1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    densidade_pop2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;


    int menuJogador1;
    int menuJogador2;
    int atributo;

    printf("\nSUPER TRUNFO - AVENTUREIRO\n");
    printf("\nQual atributo será utilizado para comparar as cartas?\n");
    printf("[1] População\n");
    printf("[2] Área\n");
    printf("[3] PIB\n");
    printf("[4] Número de pontos turísticos\n");
    printf("[5] Densidade demográfica\n");
    printf("\n-> ");
    scanf("%d", &atributo);

    switch(atributo)
    {
        case 1:
            if (populacao1 > populacao2)
            {
                printf("\nJogador 1: %s\n", pais1);
                printf("População: %d\n", populacao1);
                printf("\nJogador 2: %s\n", pais2);
                printf("População: %d\n", populacao2);
                printf("\n\n----JOGADOR 1 (Carta: %s) VENCEU!----\n\n", pais1);
            }
            else if (populacao1 < populacao2)
            {
                printf("\nJogador 1: %s\n", pais1);
                printf("População: %d\n", populacao1);
                printf("\nJogador 2: %s\n", pais2);
                printf("População: %d\n", populacao2);
                printf("\n\n----JOGADOR 2 (Carta: %s) VENCEU!----\n\n", pais2);
            }
            else
            {
                printf("\nJogador 1: %s\n", pais1);
                printf("População: %d\n", populacao1);
                printf("\nJogador 2: %s\n", pais2);
                printf("População: %d\n", populacao2);
                printf("\n\n----EMPATE!----\n\n");
            }
        break;
        case 2:
            if (area1 > area2)
            {
                printf("\nJogador 1: %s\n", pais1);
                printf("Área: %.2f\n", area1);
                printf("\nJogador 2: %s\n", pais2);
                printf("Área: %.2f\n", area2);
                printf("\n\n----JOGADOR 1 (Carta: %s) VENCEU!----\n\n", pais1);
            }
            else if (area1 < area2)
            {
                printf("\nJogador 1: %s\n", pais1);
                printf("Área: %.2f\n", area1);
                printf("\nJogador 2: %s\n", pais2);
                printf("Área: %.2f\n", area2);
                printf("\n\n----JOGADOR 2 (Carta: %s) VENCEU!----\n\n", pais2);
            }
            else
            {
                printf("\nJogador 1: %s\n", pais1);
                printf("Área: %.2f\n", area1);
                printf("\nJogador 2: %s\n", pais2);
                printf("Área: %.2f\n", area2);
                printf("\n\n----EMPATE!----\n\n");
            }
        break;
        case 3:
            if (pib1 > pib2)
            {
                printf("\nJogador 1: %s\n", pais1);
                printf("PIB: %.2f\n", pib1);
                printf("\nJogador 2: %s\n", pais2);
                printf("PIB: %.2f\n", pib2);
                printf("\n\n----JOGADOR 1 (Carta: %s) VENCEU!----\n\n", pais1);
            }
            else if (pib1 < pib2)
            {
                printf("\nJogador 1: %s\n", pais1);
                printf("PIB: %.2f\n", pib1);
                printf("\nJogador 2: %s\n", pais2);
                printf("PIB: %.2f\n", pib2);
                printf("\n\n----JOGADOR 2 (Carta: %s) VENCEU!----\n\n", pais2);
            }
            else
            {
                printf("\nJogador 1: %s\n", pais1);
                printf("PIB: %.2f\n", pib1);
                printf("\nJogador 2: %s\n", pais2);
                printf("PIB: %.2f\n", pib2);
                printf("\n\n----EMPATE!----\n\n");
            }
        break;
        case 4:
            if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2)
            {
                printf("\nJogador 1: %s\n", pais1);
                printf("Pontos Turísticos: %d\n", numero_de_pontos_turisticos1);
                printf("\nJogador 2: %s\n", pais2);
                printf("Pontos Turísticos: %d\n", numero_de_pontos_turisticos2);
                printf("\n\n----JOGADOR 1 (Carta: %s) VENCEU!----\n\n", pais1);
            }
            else if (numero_de_pontos_turisticos1 < numero_de_pontos_turisticos2)
            {
                printf("\nJogador 1: %s\n", pais1);
                printf("Pontos Turísticos: %d\n", numero_de_pontos_turisticos1);
                printf("\nJogador 2: %s\n", pais2);
                printf("Pontos Turísticos: %d\n", numero_de_pontos_turisticos2);
                printf("\n\n----JOGADOR 2 (Carta: %s) VENCEU!----\n\n", pais2);
            }
            else
            {
                printf("\nJogador 1: %s\n", pais1);
                printf("Pontos Turísticos: %d\n", numero_de_pontos_turisticos1);
                printf("\nJogador 2: %s\n", pais2);
                printf("Pontos Turísticos: %d\n", numero_de_pontos_turisticos2);
                printf("\n\n----EMPATE!----\n\n");
            }
        break;        
      default:
            if (densidade_pop1 < densidade_pop2)
            {
                printf("\nJogador 1: %s\n", pais1);
                printf("Densidade Demográfica: %.2f\n", densidade_pop1);
                printf("\nJogador 2: %s\n", pais2);
                printf("Densidade Demográfica: %.2f\n", densidade_pop2);
                printf("\n\n----JOGADOR 1 (Carta: %s) VENCEU!----\n\n", pais1);
            }
            else if (densidade_pop1 > densidade_pop2)
            {
                printf("\nJogador 1: %s\n", pais1);
                printf("Densidade Demográfica: %.2f\n", densidade_pop1);
                printf("\nJogador 2: %s\n", pais2);
                printf("Densidade Demográfica: %.2f\n", densidade_pop2);
                printf("\n\n----JOGADOR 2 (Carta: %s) VENCEU!----\n\n", pais2);
            }
            else
            {
                printf("\nJogador 1: %s\n", pais1);
                printf("Densidade Demográfica: %.2f\n", densidade_pop1);
                printf("\nJogador 2: %s\n", pais2);
                printf("Densidade Demográfica: %.2f\n", densidade_pop2);
                printf("\n\n----EMPATE!----\n\n");
            }
        break;        
        
    }
}
