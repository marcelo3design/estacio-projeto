#include <stdio.h>

int main(){
    
    char estado1[50];
    char codigo_da_carta1[50];
    char nome_da_cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int numero_de_pontos_turisticos1;
    float densidade_pop1;
    float pib_per_capita1;
    float super_poder1;

    char estado2[50];
    char codigo_da_carta2[50];
    char nome_da_cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numero_de_pontos_turisticos2;
    float densidade_pop2;
    float pib_per_capita2;
    float super_poder2;

    int resultado_populacao, resultado_area, resultado_pib, resultado_turisticos, resultado_densidade_pop, resultado_capita, resultado_poder;

    printf("SEGUNDO DESAFIO DO SUPER TRUNFO\n");
    
    //CARTA 1
    printf("\n\nCARTA 1");
    printf("\nEstado: ");
    scanf("%s", &estado1);
    printf("\nCódigo: ");
    scanf("%s", &codigo_da_carta1);
    printf("\nNome da Cidade: ");
    scanf("%s", &nome_da_cidade1);
    printf("\nPopulação: ");
    scanf("%lu", &populacao1);
    printf("\nÁrea: ");
    scanf("%f", &area1);
    printf("\nPIB: ");
    scanf("%f", &pib1);
    printf("\nNúmero de Pontos Turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos1);

    densidade_pop1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    super_poder1 = (float) populacao1 + area1 + pib1 + numero_de_pontos_turisticos1 + pib_per_capita1 + (1 / densidade_pop1);

    printf("\nCARTA 1");
    printf("\nEstado: %s", estado1);
    printf("\nCodigo da carta: %s", codigo_da_carta1);
    printf("\nCidade: %s", nome_da_cidade1);
    printf("\nPopulação: %lu", populacao1);
    printf("\nÁrea em km²: %.2f km²", area1);
    printf("\nPIB: %.2f bilhões de reais", pib1);
    printf("\nQuantidade de pontos turísticos: %d", numero_de_pontos_turisticos1);
    printf("\nDensidade populacional: %.2f hab/km²", densidade_pop1);
    printf("\nPIB per Capita: %.2f reais", pib_per_capita1);
    printf("\nO valor do SUPER PODER: %.2f", (float) super_poder1);


    //CARTA 2
    printf("\n\nCARTA 2");
    printf("\nEstado: ");
    scanf("%s", &estado2);
    printf("\nCódigo: ");
    scanf("%s", &codigo_da_carta2);
    printf("\nNome da Cidade: ");
    scanf("%s", &nome_da_cidade2);
    printf("\nPopulação: ");
    scanf("%lu", &populacao2);
    printf("\nÁrea: ");
    scanf("%f", &area2);
    printf("\nPIB: ");
    scanf("%f", &pib2);
    printf("\nNúmero de Pontos Turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos2);

    densidade_pop2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    super_poder2 = (float) populacao2 + area2 + pib2 + numero_de_pontos_turisticos2 + pib_per_capita2 + (1 / densidade_pop2);

    printf("\n\nCARTA 2");
    printf("\nEstado: %s", estado2);
    printf("\nCodigo da carta: %s", codigo_da_carta2);
    printf("\nCidade: %s", nome_da_cidade2);
    printf("\nPopulação: %lu", populacao2);
    printf("\nÁrea em km²: %.2f km²", area2);
    printf("\nPIB: %.2f bilhões de reais", pib2);
    printf("\nQuantidade de pontos turísticos: %d", numero_de_pontos_turisticos2);
    printf("\nDensidade populacional: %.2f hab/km²", densidade_pop2);
    printf("\nPIB per Capita: %.2f reais", pib_per_capita2);
    printf("\nO valor do SUPER PODER: %.2f", (float) super_poder2);
    
    printf("\n\nRESULTADO DA BATALHA\n");

    resultado_populacao =       populacao1 > populacao2;
    resultado_area =            area1 > area2;
    resultado_pib =             pib1 > pib2;
    resultado_turisticos =      numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2;
    resultado_densidade_pop =   densidade_pop1 < densidade_pop2;
    resultado_capita =          pib_per_capita1 > pib_per_capita2;
    resultado_poder =           super_poder1 > super_poder2;

    printf("População: Carta %d venceu (%d).\n",                2 - resultado_populacao, resultado_populacao);
    printf("Area: Carta %d venceu (%d).\n",                     2 - resultado_area, resultado_area);
    printf("Pib: Carta %d venceu (%d).\n",                      2 - resultado_pib, resultado_pib);
    printf("Pontos turísticos: Carta %d venceu (%d).\n",        2 - resultado_turisticos, resultado_turisticos);
    printf("Densidade Populacional: Carta %d venceu (%d).\n",   2 - resultado_densidade_pop, resultado_densidade_pop);
    printf("Pib per capita: Carta %d venceu (%d).\n",           2 - resultado_capita, resultado_capita);
    printf("Super Poder: Carta %d venceu (%d).\n",              2 - resultado_poder, resultado_poder);



    
}


