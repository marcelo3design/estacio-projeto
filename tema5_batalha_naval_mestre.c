#include <stdio.h>
#define LINHA 10
#define COLUNA 10

void imprimirTabuleiro(int matriz[LINHA][COLUNA]) {
    char letras[10] = {'A','B','C','D','E','F','G','H','I','J'};

    printf("     ");
    for (int i = 0; i < COLUNA; i++) {
        printf("%c ", letras[i]);
    }
    printf("\n");

    for (int i = 0; i < LINHA; i++) {
        if (i < 9) printf(" ");
        printf("%d > ", i + 1);
        for (int j = 0; j < COLUNA; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void aplicarHabilidade(int matriz[LINHA][COLUNA], int habilidade[5][5], int linha, int coluna) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int x = linha + i;
            int y = coluna + j;

            if (x >= 0 && x < LINHA && y >= 0 && y < COLUNA) {
                if (habilidade[i][j] == 1) {
                    matriz[x][y] = 5;
                }
            }
        }
    }
}

void gerarCone(int hab[5][5]) {
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 0 && j == 2) hab[i][j] = 1;
            else if (i == 1 && (j == 1 || j == 2 || j == 3)) hab[i][j] = 1;
            else if (i == 2) hab[i][j] = 1;
            else hab[i][j] = 0;
        }
    }
}

void gerarCruz(int hab[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 2 || j == 2) hab[i][j] = 1;
            else hab[i][j] = 0;
        }
    }
}

void gerarOctogono(int hab[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i == 0 || i == 4) && (j >= 1 && j <= 3)) hab[i][j] = 1;
            else if ((i == 1 || i == 3) && (j == 0 || j == 4)) hab[i][j] = 1;
            else if (i == 2) hab[i][j] = 1;
            else hab[i][j] = 0;
        }
    }
}

int main() {
    int tabuleiro[LINHA][COLUNA];
    int habilidade[5][5];
    int escolha;

    
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    printf("--- BATALHA NAVAL COM HABILIDADES ---\n");
    printf("Escolha uma habilidade para aplicar:\n");
    printf("1 - Cone\n");
    printf("2 - Cruz\n");
    printf("3 - Octógono\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    
    if (escolha == 1) gerarCone(habilidade);
    else if (escolha == 2) gerarCruz(habilidade);
    else gerarOctogono(habilidade);

    
    aplicarHabilidade(tabuleiro, habilidade, 3, 3);

    printf("\nTabuleiro após aplicar habilidade:\n\n");
    imprimirTabuleiro(tabuleiro);

    return 0;
}
