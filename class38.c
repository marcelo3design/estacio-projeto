#include <stdio.h>
#define LINHA 3
#define COLUNA 3

int main()
{
    int matriz [LINHA][COLUNA];
    int target = 5;
    int found = 0;
    int soma = 0;

for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            soma++;
            matriz[i][j] = soma;
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            if (matriz [i][j] == target)
            {
                printf("\n\nO valor %d foi encontrado na posição (%d, %d)\n", target, i, j);
                found = 1;
                break;

            }
        }

        if (found) break;
        
    }
}