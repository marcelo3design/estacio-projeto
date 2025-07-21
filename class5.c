#include <stdio.h>

int main (){
    float n1;
    float n2;
    float media;

    printf("\nDigite a primeira nota do aluno: ");
    scanf("%f", &n1);
    printf("\nDigite a segunda nota do aluno: ");
    scanf("%f", &n2);

    media = (n1+n2) / 2;
    printf("\nA média das notas %.2f e %.2f é %.2f!\n", n1,n2,media);


    
    return 0;  
}