#include <stdio.h>

int main (){
    float temperatura, umidade;
    unsigned int estoque, estoque_minimo = 1000;

    printf("\nTemperatura: ");
    scanf("%f", &temperatura);

    printf("\nUmidade: ");
    scanf("%f", &umidade);

    printf("\nEstoque: ");
    scanf("%u", &estoque);

    //temperatura
    if(temperatura < 30)
    {
        printf("\nA Temperatura %.0f dentro dos parâmetros\n", temperatura);
    }
    else
    {
        printf("\nA Temperatura %.0f está alta\n", temperatura);
    }

    //umidade
    if(umidade > 50)
    {
        printf("\nUmidade %.0f elevada!\n", umidade);
    }
    else
    {
        printf("Umidade está dentro dos parâmetros");
    }

    //estoque
    if(estoque < estoque_minimo)
    {
        printf("\nO estoque está incompleto, é necessário repor %u para completar\n", (estoque_minimo - estoque));
    }
    else
    {
        printf("\nO estoque está completo %u\n", estoque);
    }

}