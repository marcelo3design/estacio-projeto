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

void aplicarHabilidade(int matriz[LINHA][COLUNA], int habilidade[5][5], int linha, int coluna, int valor) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int x = linha + i;
            int y = coluna + j;

            if (x >= 0 && x < LINHA && y >= 0 && y < COLUNA) {
                if (habilidade[i][j] == 1) {
                    matriz[x][y] = valor;
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
    int tabuleiro[LINHA][COLUNA] = {0};

    int cone[5][5];
    int cruz[5][5];
    int oct[5][5];

    gerarCone(cone);
    gerarCruz(cruz);
    gerarOctogono(oct);

 
    aplicarHabilidade(tabuleiro, cone, 0, 0, 1);      
    aplicarHabilidade(tabuleiro, cruz, 2, 4, 2);      
    aplicarHabilidade(tabuleiro, oct, 5, 2, 3);       

    printf("--- TABULEIRO FINAL COM TODAS AS HABILIDADES ---\n\n");
    imprimirTabuleiro(tabuleiro);

    return 0;
}