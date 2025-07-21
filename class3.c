#include <stdio.h>

int main(){

    int n1 = 10, resultado = 5;





    printf("\nIniciado o incremento com o valor 10, o resultado fica: ");

    n1++;
    printf("%d", n1);

    printf("\nO resultado do incremento, agora com um decremento será: ");

    n1--;
    printf("%d", n1);

    resultado = ++ n1;
    printf("\nO resultado será o n1 + resultado, a variavel n1 receberá um PRÉ incremento nessa situação.");
    printf("\nResultado ficará: %d", resultado);
    printf("\nO n1 ficará %d", n1);


    resultado = n1 ++;
    printf("\nO resultado será o n1 + resultado, a variavel n1 receberá um PÓS incremento nessa situação.");
    printf("\nResultado ficará: %d", resultado);
    printf("\nO n1 ficará %d", n1);
    printf("\n");



    
}