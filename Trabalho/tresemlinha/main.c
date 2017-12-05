#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define NUM 9
#define TOKEN 2

void criarMatriz(int matriz[][NUM]) {
    int i, j;

    for (i = 0; i < NUM; ++i) {
        for (j = 0; j < NUM; ++j) {
            matriz[i][j] = -1;
        }
    }
}

void desenharMatriz(int matriz[][NUM], char tokens[]) {
    int i, j;
    int x = 65;

    printf(" ");
    printf("|");
    for (i = 0; i < NUM; ++i) {
        printf("%c", x);
        printf("|");
        ++x;
    }
    puts(" ");
    for (i = 0; i < NUM; ++i) {
        printf("%d", i + 1);
        printf("|");
        for (j = 0; j < NUM; ++j) {
            if (matriz[i][j] == -1) {
                printf("-");
            } else if (matriz[i][j] == 0) {
                printf("%c", tokens[0]);
            } else if (matriz[i][j] == 1) {
                printf("%c", tokens[1]);
            }
            printf("|");
        }
        puts(" ");
    }
}

void selecionarTokens(char tokens[]) {
    int i;

    for (i = 0; i < TOKEN; ++i) {
        printf("Jogador %d diga o seu token: ", i + 1);
        scanf("%c", &tokens[i]);
        if (tokens[1] == tokens[0]) {
            puts("Os tokens nao podem ser iguais.");
            limparBufferEntrada();
            --i;
            continue;
        }
        limparBufferEntrada();
    }
    puts("");
}

void jogadas(int matriz[][NUM], char tokens[]) {
    char coluna;
    int linha, i;

    i = 0;

    while (i < TOKEN) {
        puts("");
        printf("Jogador %d diga a coluna: ", i + 1);
        scanf("%c", &coluna);
        limparBufferEntrada();
        printf("Jogador %d diga a linha: ", i + 1);
        scanf("%d", &linha);

        matriz[(linha - 1)][(coluna - 65)] = i;

        limparBufferEntrada();

        desenharMatriz(matriz, tokens);

        if (i == 1) { //CICLO PARA MUDAR DE JOGADOR
            i = 0;
        } else {
            ++i;
        }
    }
}

int verificaJogada(int matriz[][NUM], int linha, int coluna, int i, char tokens[]) {

    if (matriz[linha][coluna] == i) {
        printf("Posição ocupada, volte a inserir a posição!");
        return 1;
    }
    else if (linha < 1 || linha > 9 || coluna < 1 || coluna > 9) {
        printf("A posição ja existe, escolhe outra posição.");
    } else if (coluna == 'Z' && linha == 0) {
        printf("O jogador %d desistiu.", i + 1);
        if (i == 0) {
            printf("O jogador %d ganhou.", i + 2);
        } else {
            printf("O jogador %d ganhou o jogo.", i);
        }
    }
}

/*int verificaVitoria(int matriz[][NUM], char tokens[]) {
    int i, j;

    //verifica as colunas para ver se o jogador ganhou
    for (i = 0; i < NUM; ++i) {
        for (j = 0; j < (NUM - 2); ++j) {
            if (matriz[i][j] == tokens && matriz[i][j] == matriz[i][j + 1] && matriz[i][j] == matriz[i][j + 2]) {
                return 1;
            }
        }
    }

    //verifica as linhas para ver se o jogador ganhou
    for (i = 0; i < (NUM - 2); ++i) {
        for (j = 0; j < NUM; ++j) {
            if (matriz[i][j] == tokens && matriz[i][j] == matriz[i + 1][j] && matriz[i][j] == matriz[i + 2][j]) {
                return 1;
            }
        }
    }

    //verifica as diagonais da esquerda para a direita
    for (i = 0; i < (NUM - 2); ++i) {
        for (j = 0; j < (NUM - 2); ++j) {
            if (matriz[i][j] == tokens && matriz[i][j] == matriz[i + 1][j + 1] && matriz[i][j] == matriz[i + 2][j + 2]) {
                return 1;
            }
        }
    }

    //verifica as diagonais da direita para a esquerda
    for (i = 0; i < (NUM - 2); i++) {
        for (j = 0; j < (NUM - 2); j++) {
            if (matriz[i][j + 2] == tokens && matriz[i][j + 2] == matriz[i + 1][j + 1] && matriz[i][j + 2] == matriz[i + 2][j]) {
                return 1;
            }
        }
    }
}*/

int main(int argc, char** argv) {
    char tokens[TOKEN];
    int matriz[NUM][NUM];

    selecionarTokens(tokens);
    criarMatriz(matriz);
    desenharMatriz(matriz, tokens);
    jogadas(matriz, tokens);

    return (0);
}