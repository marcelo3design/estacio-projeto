#include <stdio.h>

int main (){
    int a = 5;
    int b = 10;

    if (a < b && b > a)
    {
        printf("\nAs váriaveis A e B são iguais");
    }
    else
    {
        printf("\nAs váriaveis A e B são diferentes");
    }



    int c = -5;
    int d = -10;

    if (c > 1 || d > 1)
    {
        printf("\nUma das variáveis são positivas");
    }
    else
    {
        printf("\nNenhuma das variáveis são positivas");
    }


    int e = 10;

    if (!(e > 0))
    {
        printf("\nSe E não for maior que zero, essa mensagem aparece");
    }
    else
    {
        printf("\nSe E for maior que zero, essa mensagem aparece");
    }

}