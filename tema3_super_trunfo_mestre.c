#include <stdio.h>

int main ()
{
    char pais1[] = "Brasil", pais2[] = "Estados Unidos";    

    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int numero_de_pontos_turisticos1 = 50;
    float densidade_pop1;
    float pib_per_capita1;
    
    
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int numero_de_pontos_turisticos2 = 30;
    float densidade_pop2;
    float pib_per_capita2;

    int jogador1, jogador2, opcao1, opcao2;


    printf("\nSUPER TRUNFO\n");

    printf("\nJogador1 e Jogador2, vocês escolheram suas cartas");
    printf("\ne então teram a opção de definir 2 atributos para");
    printf("\nDuelar!");
    printf("\n\n|||CARTAS DISPONÍVEIS:");
    printf("\n|||-Carta 1: %s", pais1);
    printf("\n|||-Carta 2: %s", pais2);

    printf("\n\nJogador 1, escolha a sua carta: ");
    scanf("%d", &jogador1);
    
    if (jogador1 == 1)
    {
        printf("----%s----", pais1);
        printf("\n\n|||CARTAS DISPONÍVEIS:");
        printf("\n|||-Carta 2: Estados Unidos");
        printf("\n\nJogador 2, escolha a sua carta: ");
        scanf("%d", &jogador2);
        printf("----%s----", pais2);        
    }
    else if (jogador1 == 2)
    {
        printf("----%s----", pais2);
        printf("\n\n|||CARTAS DISPONÍVEIS:");
        printf("\n|||-Carta 1: Brasil");
        printf("\n\nJogador 2, escolha a sua carta: ");
        scanf("%d", &jogador2);
        printf("----%s----\n", pais1);
    }
    else
    {
        printf("\nReinicie o jogo e selecione uma das Cartas existentes!");
    }

    printf("\n\n=-=-=-=-=-=-=-= Duelo =-=-=-=-=-=-=-=");
    printf("\n\n|||Agora o Jogador 1 deve escolher seu Atributo");

    printf("\nATRIBUTOS DISPONÍVEIS: ");
    printf("\n1-População");
    printf("\n2-Área");
    printf("\n3-PIB");
    printf("\n4-Número de Pontos Túristicos");
    printf("\n5-Densidade Per Capita");

    printf("\n\nJOGADOR 1, ESCOLHA SEU ATRIBUTO: ");
    scanf("%d", &opcao1);

    switch(opcao1)
    {
        case 1: //populacao

            printf("----População----\n");
            jogador1 == 1 || jogador2 == 1  ? printf("\n|%s: População = %d\n|%s: População = %d", pais1, populacao1, pais2, populacao2) : printf("\n|%s: População = %d\n|%s: População = %d", pais2, populacao2, pais1, populacao1);
            
            
            if (jogador1 == 1 || jogador2 == 1 && populacao1 > populacao2)
            {
                printf("\n\n%s ~~~ VENCEU!", pais1);

                printf("\n\n=-=-=-=-=-=-=-= Duelo =-=-=-=-=-=-=-=");
                printf("\n\n|||Agora o Jogador 2 deve escolher seu Atributo");

                printf("\nATRIBUTOS DISPONÍVEIS: ");
                
                printf("\n2-Área");
                printf("\n3-PIB");
                printf("\n4-Número de Pontos Túristicos");
                printf("\n5-Densidade Per Capita");

                printf("\n\nJOGADOR 2, ESCOLHA SEU ATRIBUTO: ");
                scanf("%d", &opcao2);
            }
            else if (jogador1 == 1 || jogador2 == 1 && populacao1 < populacao2)
            {
                printf("\n\n%s ~~~ VENCEU!", pais2);

                printf("\n\n=-=-=-=-=-=-=-= Duelo =-=-=-=-=-=-=-=");
                printf("\n\n|||Agora o Jogador 2 deve escolher seu Atributo");

                printf("\nATRIBUTOS DISPONÍVEIS: ");
                
                printf("\n2-Área");
                printf("\n3-PIB");
                printf("\n4-Número de Pontos Túristicos");
                printf("\n5-Densidade Per Capita");

                printf("\n\nJOGADOR 2, ESCOLHA SEU ATRIBUTO: ");
                scanf("%d", &opcao2);
            }      
            else
            {
                printf("\n\nEMPATE");
            }      
            

        break;
        case 2: //area

            printf("----Área----\n");
            jogador1 == 1 || jogador2 == 1  ? printf("\n|%s: Área = %.2f\n|%s: Área = %.2f", pais1, area1, pais2, area2) : printf("\n|%s: Área = %.2f\n|%s: Área = %.2f", pais2, area2, pais1, area1);
            
            
            if (jogador1 == 1 || jogador2 == 1  && area1 > area2)
            {
                printf("\n\n%s ~~~ VENCEU!", pais1);

                printf("\n\n=-=-=-=-=-=-=-= Duelo =-=-=-=-=-=-=-=");
                printf("\n\n|||Agora o Jogador 2 deve escolher seu Atributo");

                printf("\nATRIBUTOS DISPONÍVEIS: ");
                printf("\n1-População");
                
                printf("\n3-PIB");
                printf("\n4-Número de Pontos Túristicos");
                printf("\n5-Densidade Per Capita");

                printf("\n\nJOGADOR 2, ESCOLHA SEU ATRIBUTO: ");
                scanf("%d", &opcao2);                
            }
            else if (jogador1 == 1 || jogador2 == 1  && area1 < area2)
            {
                printf("\n\n%s ~~~ VENCEU!", pais2);

                printf("\n\n=-=-=-=-=-=-=-= Duelo =-=-=-=-=-=-=-=");
                printf("\n\n|||Agora o Jogador 2 deve escolher seu Atributo");

                printf("\nATRIBUTOS DISPONÍVEIS: ");
                printf("\n1-População");
                
                printf("\n3-PIB");
                printf("\n4-Número de Pontos Túristicos");
                printf("\n5-Densidade Per Capita");

                printf("\n\nJOGADOR 2, ESCOLHA SEU ATRIBUTO: ");
                scanf("%d", &opcao2);
            }    
            else
            {
                printf("\n\nEMPATE");
            }      
            
            

        break;
        case 3: //pib

            printf("----PIB----\n");
            jogador1 == 1 || jogador2 == 1  ? printf("\n|%s: PIB = %.2f\n|%s: PIB = %.2f", pais1, pib1, pais2, pib2) : printf("\n|%s: PIB = %.2f\n|%s: PIB = %.2f", pais2, pib2, pais1, pib1);
            
            
            if (jogador1 == 1 || jogador2 == 1  && pib1 > pib2)
            {
                printf("\n\n%s ~~~ VENCEU!", pais1);

                printf("\n\n=-=-=-=-=-=-=-= Duelo =-=-=-=-=-=-=-=");
                printf("\n\n|||Agora o Jogador 2 deve escolher seu Atributo");

                printf("\nATRIBUTOS DISPONÍVEIS: ");
                printf("\n1-População");
                printf("\n2-Área");
                
                printf("\n4-Número de Pontos Túristicos");
                printf("\n5-Densidade Per Capita");

                printf("\n\nJOGADOR 2, ESCOLHA SEU ATRIBUTO: ");
                scanf("%d", &opcao2);
            }
            else if (jogador1 == 1 || jogador2 == 1  && pib1 < pib2)
            {
                printf("\n\n%s ~~~ VENCEU!", pais2);

                                printf("\n\n=-=-=-=-=-=-=-= Duelo =-=-=-=-=-=-=-=");
                printf("\n\n|||Agora o Jogador 2 deve escolher seu Atributo");

                printf("\nATRIBUTOS DISPONÍVEIS: ");
                printf("\n1-População");
                printf("\n2-Área");
                
                printf("\n4-Número de Pontos Túristicos");
                printf("\n5-Densidade Per Capita");

                printf("\n\nJOGADOR 2, ESCOLHA SEU ATRIBUTO: ");
                scanf("%d", &opcao2);
            }    
            else
            {
                printf("\n\nEMPATE");
            }      
            


        break;
        case 4: //numero_de_pontos_turisticos

            printf("----Número de Pontos Túristicos----\n");
            jogador1 == 1 || jogador2 == 1  ? printf("\n|%s: Número de Pontos Túristicos = %d\n|%s: Número de Pontos Túristicos = %d", pais1, numero_de_pontos_turisticos1, pais2, numero_de_pontos_turisticos2) : printf("\n|%s: Número de Pontos Túristicos = %d\n|%s: Número de Pontos Túristicos = %d", pais2, numero_de_pontos_turisticos2, pais1, numero_de_pontos_turisticos1);
            
            
            if (jogador1 == 1 || jogador2 == 1 && numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2)
            {
                printf("\n\n%s ~~~ VENCEU!", pais1);

                                printf("\n\n=-=-=-=-=-=-=-= Duelo =-=-=-=-=-=-=-=");
                printf("\n\n|||Agora o Jogador 2 deve escolher seu Atributo");

                printf("\nATRIBUTOS DISPONÍVEIS: ");
                printf("\n1-População");
                printf("\n2-Área");
                printf("\n3-PIB");
                
                printf("\n5-Densidade Per Capita");

                printf("\n\nJOGADOR 2, ESCOLHA SEU ATRIBUTO: ");
                scanf("%d", &opcao2);
            }
            else if (jogador1 == 1 || jogador2 == 1 && numero_de_pontos_turisticos1 < numero_de_pontos_turisticos2)
            {
                printf("\n\n%s ~~~ VENCEU!", pais2);

                                printf("\n\n=-=-=-=-=-=-=-= Duelo =-=-=-=-=-=-=-=");
                printf("\n\n|||Agora o Jogador 2 deve escolher seu Atributo");

                printf("\nATRIBUTOS DISPONÍVEIS: ");
                printf("\n1-População");
                printf("\n2-Área");
                printf("\n3-PIB");
                
                printf("\n5-Densidade Per Capita");

                printf("\n\nJOGADOR 2, ESCOLHA SEU ATRIBUTO: ");
                scanf("%d", &opcao2);
            }      
            else
            {
                printf("\n\nEMPATE");
            }      


        break;
        case 5: //densidade_pop1

            printf("----Densidade Demográfica----\n");
            jogador1 == 1 || jogador2 == 1  ? printf("\n|%s: Densidade Demográfica = %.2f\n|%s: Densidade Demográfica = %.2f", pais1, densidade_pop1, pais2, densidade_pop2) : printf("\n|%s: Densidade Demográfica = %.2f\n|%s: Densidade Demográfica = %.2f", pais2, densidade_pop2, pais1, densidade_pop1);
            
            
            if (jogador1 == 1 || jogador2 == 1  && densidade_pop1 > densidade_pop2)
            {
                printf("\n\n%s ~~~ VENCEU!", pais1);

                printf("\n\n=-=-=-=-=-=-=-= Duelo =-=-=-=-=-=-=-=");
                printf("\n\n|||Agora o Jogador 2 deve escolher seu Atributo");

                printf("\nATRIBUTOS DISPONÍVEIS: ");
                printf("\n1-População");
                printf("\n2-Área");
                printf("\n3-PIB");
                printf("\n4-Número de Pontos Túristicos");
                

                printf("\n\nJOGADOR 2, ESCOLHA SEU ATRIBUTO: ");
                scanf("%d", &opcao2);
            }
            else if (jogador1 == 1 || jogador2 == 1  && densidade_pop1 < densidade_pop2)
            {
                printf("\n\n%s ~~~ VENCEU!", pais2);

                                printf("\n\n=-=-=-=-=-=-=-= Duelo =-=-=-=-=-=-=-=");
                printf("\n\n|||Agora o Jogador 2 deve escolher seu Atributo");

                printf("\nATRIBUTOS DISPONÍVEIS: ");
                printf("\n1-População");
                printf("\n2-Área");
                printf("\n3-PIB");
                printf("\n4-Número de Pontos Túristicos");
                

                printf("\n\nJOGADOR 2, ESCOLHA SEU ATRIBUTO: ");
                scanf("%d", &opcao2);
            }    
            else
            {
                printf("\n\nEMPATE");
            }      
            

        break;
        default:
            
            printf("\n\nOpção inválida, reinicie o jogo");
        break;      
    }
    
switch(opcao2)
    {
        case 1: //populacao

            printf("----População----\n");
            jogador1 == 1 || jogador2 == 1  ? printf("\n|%s: População = %d\n|%s: População = %d", pais1, populacao1, pais2, populacao2) : printf("\n|%s: População = %d\n|%s: População = %d", pais2, populacao2, pais1, populacao1);
            
            
            if (jogador1 == 1 || jogador2 == 1 && populacao1 > populacao2)
            {
                printf("\n\n%s ~~~ VENCEU!", pais1);

            }
            else if (jogador1 == 1 || jogador2 == 1 && populacao1 < populacao2)
            {
                printf("\n\n%s ~~~ VENCEU!", pais2);

            }      
            else
            {
                printf("\n\nEMPATE");
            }      
            

        break;
        case 2: //area

            printf("----Área----\n");
            jogador1 == 1 || jogador2 == 1  ? printf("\n|%s: Área = %.2f\n|%s: Área = %.2f", pais1, area1, pais2, area2) : printf("\n|%s: Área = %.2f\n|%s: Área = %.2f", pais2, area2, pais1, area1);
            
            
            if (jogador1 == 1 || jogador2 == 1  && area1 > area2)
            {
                printf("\n\n%s ~~~ VENCEU!", pais1);
             
            }
            else if (jogador1 == 1 || jogador2 == 1  && area1 < area2)
            {
                printf("\n\n%s ~~~ VENCEU!", pais2);

            }    
            else
            {
                printf("\n\nEMPATE");
            }      
            
            

        break;
        case 3: //pib

            printf("----PIB----\n");
            jogador1 == 1 || jogador2 == 1  ? printf("\n|%s: PIB = %.2f\n|%s: PIB = %.2f", pais1, pib1, pais2, pib2) : printf("\n|%s: PIB = %.2f\n|%s: PIB = %.2f", pais2, pib2, pais1, pib1);
            
            
            if (jogador1 == 1 || jogador2 == 1  && pib1 > pib2)
            {
                printf("\n\n%s ~~~ VENCEU!", pais1);

            }
            else if (jogador1 == 1 || jogador2 == 1  && pib1 < pib2)
            {
                printf("\n\n%s ~~~ VENCEU!", pais2);

            }    
            else
            {
                printf("\n\nEMPATE");
            }      
            


        break;
        case 4: //numero_de_pontos_turisticos

            printf("----Número de Pontos Túristicos----\n");
            jogador1 == 1 || jogador2 == 1  ? printf("\n|%s: Número de Pontos Túristicos = %d\n|%s: Número de Pontos Túristicos = %d", pais1, numero_de_pontos_turisticos1, pais2, numero_de_pontos_turisticos2) : printf("\n|%s: Número de Pontos Túristicos = %d\n|%s: Número de Pontos Túristicos = %d", pais2, numero_de_pontos_turisticos2, pais1, numero_de_pontos_turisticos1);
            
            
            if (jogador1 == 1 || jogador2 == 1 && numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2)
            {
                printf("\n\n%s ~~~ VENCEU!", pais1);

            }
            else if (jogador1 == 1 || jogador2 == 1 && numero_de_pontos_turisticos1 < numero_de_pontos_turisticos2)
            {
                printf("\n\n%s ~~~ VENCEU!", pais2);

            }      
            else
            {
                printf("\n\nEMPATE");
            }      


        break;
        case 5: //densidade_pop1

            printf("----Densidade Demográfica----\n");
            jogador1 == 1 || jogador2 == 1  ? printf("\n|%s: Densidade Demográfica = %.2f\n|%s: Densidade Demográfica = %.2f", pais1, densidade_pop1, pais2, densidade_pop2) : printf("\n|%s: Densidade Demográfica = %.2f\n|%s: Densidade Demográfica = %.2f", pais2, densidade_pop2, pais1, densidade_pop1);
            
            
            if (jogador1 == 1 || jogador2 == 1  && densidade_pop1 > densidade_pop2)
            {
                printf("\n\n%s ~~~ VENCEU!", pais1);

            }
            else if (jogador1 == 1 || jogador2 == 1  && densidade_pop1 < densidade_pop2)
            {
                printf("\n\n%s ~~~ VENCEU!", pais2);

            }    
            else
            {
                printf("\n\nEMPATE");
            }      
            

        break;
        default:
            
            printf("\n\nOpção inválida, reinicie o jogo");
        break;      
    }

    

}










