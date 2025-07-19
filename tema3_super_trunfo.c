#include <stdio.h>

int main(){
    
    char estado1[50];
    char codigo_da_carta1[50];
    char nome_da_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int numero_de_pontos_turisticos1;
    float densidade_pop1;
    float pib_per_capita1;
    
    char estado2[50];
    char codigo_da_carta2[50];
    char nome_da_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numero_de_pontos_turisticos2;
    float densidade_pop2;
    float pib_per_capita2;

    printf("SEGUNDO DESAFIO DO SUPER TRUNFO\n");
    
    printf("\n\nCARTA 1");
    printf("\nEstado: ");
    scanf("%s", &estado1);
    printf("\nCódigo: ");
    scanf("%s", &codigo_da_carta1);
    printf("\nNome da Cidade: ");
    scanf("%s", &nome_da_cidade1);
    printf("\nPopulação: ");
    scanf("%d", &populacao1);
    printf("\nÁrea: ");
    scanf("%f", &area1);
    printf("\nPIB: ");
    scanf("%f", &pib1);
    printf("\nNúmero de Pontos Turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos1);

    printf("\n\nCARTA 2");
    printf("\nEstado: ");
    scanf("%s", &estado2);
    printf("\nCódigo: ");
    scanf("%s", &codigo_da_carta2);
    printf("\nNome da Cidade: ");
    scanf("%s", &nome_da_cidade2);
    printf("\nPopulação: ");
    scanf("%d", &populacao2);
    printf("\nÁrea: ");
    scanf("%f", &area2);
    printf("\nPIB: ");
    scanf("%f", &pib2);
    printf("\nNúmero de Pontos Turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos2);

    //---------------------RESULTADO DAS CARTAS-----------------------

    //CARTA1
    densidade_pop1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    printf("\nCARTA 1");
    printf("\nEstado: %s", estado1);
    printf("\nCodigo da carta: %s", codigo_da_carta1);
    printf("\nCidade: %s", nome_da_cidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea em km²: %.2f km²", area1);
    printf("\nPIB: %.2f bilhões de reais", pib1);
    printf("\nQuantidade de pontos turísticos: %d", numero_de_pontos_turisticos1);
    printf("\nDensidade populacional: %.2f hab/km²", densidade_pop1);
    printf("\nPIB per Capita: %.2f reais", pib_per_capita1);
    //CARTA2
    densidade_pop2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    printf("\n\nCARTA 2");
    printf("\nEstado: %s", estado2);
    printf("\nCodigo da carta: %s", codigo_da_carta2);
    printf("\nCidade: %s", nome_da_cidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea em km²: %.2f km²", area2);
    printf("\nPIB: %.2f bilhões de reais", pib2);
    printf("\nQuantidade de pontos turísticos: %d", numero_de_pontos_turisticos2);
    printf("\nDensidade populacional: %.2f hab/km²", densidade_pop2);
    printf("\nPIB per Capita: %.2f reais", pib_per_capita2);

    //---------------------COMPARAÇÃO DAS CARTAS-----------------------
    

    if(populacao1>populacao2)
    {
        printf("\n\nA população (%d) da carta 1, venceu", pib1);
    }
    else
    {
        printf("\nA população (%d) da carta 2, venceu", pib2);
    }
    
    if(area1>area2)
    {
        printf("\nA area (%.2fm²) da carta 1, venceu", area1);
    }
    else
    {
        printf("\nA area (%.2fm²) da carta 2, venceu", area2);
    }

    if(pib1 > pib2)
    {
        printf("\nO PIB (%.2f) da carta 1, venceu", pib1);
    }
    else
    {
        printf("\nO PIB (%.2f) da carta 2, venceu", pib2);
    }

    if(numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2)
    {
        printf("\nOs (%d) Pontos Turísticos da carta 1, venceu", numero_de_pontos_turisticos1);
    }
    else
    {
        printf("\nOs (%d) Pontos Turísticos da carta 2, venceu", numero_de_pontos_turisticos2);
    }

    if(densidade_pop1<densidade_pop2)
    {
        printf("\nA Densidade Populacional (%.2f) da carta 1, venceu", densidade_pop1);
    }
    else
    {
        printf("\nA Densidade Populacional (%.2f) da carta 2, venceu", densidade_pop2);
    }

    if(pib1>pib2)
    {
        printf("\nO PIB per Capita (%.2f) da carta 1 venceu", pib1);
    }
    else
    {
        printf("\nO PIB per Capita (%.2f) da carta 2 venceu", pib2);
    }

}   