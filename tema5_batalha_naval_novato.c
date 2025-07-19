#include <stdio.h>
#define LINHA 10
#define COLUNA 10

int main(){
    int i = 0, j = 0, c = 0, tabela = 0;
    int var = 0;
    int matriz[LINHA][COLUNA];
    char abc[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    



    printf("---BATALHA NAVAL---\n\n\n");


    printf("     ");
    for (i = 0; i <= 9; i++){
        printf("%c ", abc[i]);
    }
    printf("\n");

    for (i = 0; i <= 9; i++){
        if (i <= 8)
        {
            printf(" ");
        }
        printf("%d > ", (i + 1));
        
        for (j = 0; j <= 9; j++){
            if (i == 1 && j == 1 || i == 2 && j == 2 || i == 3 && j == 3)
            {
                var = 3;
            }
            else if (i == 1  && j == 8 || i == 2 && j == 7 || i == 3 && j == 6)
            {
                var = 3;
            } 
            else if (i == 5 && j == 4 || i == 5 && j == 5 || i == 5 && j == 6)
            {
                var = 3;
            } 
            else if (i == 5 && j == 8 || i == 6 && j == 8 || i == 7 && j == 8)
            {
                var = 3;
            } 
            else 
            {
                var = 0;
            }
            matriz[i][j] = var;
            printf("%d ", matriz[i][j]);
            
        }
        printf("\n");
    }






}
