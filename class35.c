#include <stdio.h>
#define LINHA 2
#define COLUNA 5


int main(){

    int matriz[LINHA][COLUNA];
    int i = 0, j = 0, soma = 0;

    for (i = 0; i < LINHA; i++){
        for (j = 0; j < COLUNA; j++){
            soma ++;
            matriz[i][j] = soma;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}