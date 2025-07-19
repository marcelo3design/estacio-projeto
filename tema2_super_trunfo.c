#include <stdio.h>

int main(){
    
    char estado[50];
    char codigo_da_carta[50];
    char nome_da_cidade[50];
    float populacao;
    float area;
    float pib;
    int numero_de_pontos_turisticos;


    printf("PRIMEIRO DESAFIO DO SUPER TRUNFO\n");

    printf("\nEscolha uma letra de A a H, representando um dos oito estados disponíveis: ");
    scanf("%s", &estado);
    
    printf("\nDigite o código da carta, sendo uma letra seguido de um número: ");
    scanf("%s", &codigo_da_carta);
    
    printf("\nDigite o nome da Cidade: ");
    scanf("%s", &nome_da_cidade);

    printf("\nDigite o número de habitantes da cidade: ");
    scanf("%f", &populacao);
    
    printf("\nDigite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area);

    printf("\nDigite o valor do produto interno bruto da cidade: ");
    scanf("%f", &pib);

    printf("\nDigite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &numero_de_pontos_turisticos);


    printf("\nEstado: %s", estado);
    printf("\nCodigo da carta: %s", codigo_da_carta);
    printf("\nCidade: %s", nome_da_cidade);
    printf("\nPopulação: %.2f", populacao);
    printf("\nÁrea em km²: %.2f", area);
    printf("\nPIB: %.2f", pib);
    printf("\nQuantida de pontos turísticos: %d", numero_de_pontos_turisticos);












}


