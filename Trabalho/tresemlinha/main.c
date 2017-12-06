#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define NUM 9
#define TOKEN 2

void criarMatriz(int matriz[][NUM]) {
    int i, j;

    for (i = 0; i < NUM; ++i) {
        for (j = 0; j < NUM; ++j) {  //Criar a Matriz
            matriz[i][j] = -1;
        }
    }
}

void desenharMatriz(int matriz[][NUM], char tokens[]) {
    int i, j;
    int x = 65;

    printf(" "); // Mostra as letras da matriz
    printf("|");
    for (i = 0; i < NUM; ++i) {
        printf("%c", x);
        printf("|");
        ++x;
    }
    puts(" ");
    for (i = 0; i < NUM; ++i) {     //Mostra os numeros
        printf("%d", i + 1);
        printf("|");
        for (j = 0; j < NUM; ++j) { // Desenha a matriz
            if (matriz[i][j] == -1) { // Escreve o '-' nas posições vazias
                printf("-");
            } else if (matriz[i][j] == 0) { // Posições do 1º jogador
                printf("%c", tokens[0]);
            } else if (matriz[i][j] == 1) { // Posições do 2º jogador
                printf("%c", tokens[1]);
            }
            printf("|");
        }
        puts(" ");
    }
}

void selecionarTokens(char tokens[]) {
    int i;

    for (i = 0; i < TOKEN; ++i) { // Escolhe os tokens e grava no array "tokens"
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
    int linha, contador = 0, i, posicao, coluna_num, vitoria;

    i = 0;

    while (i < TOKEN) {
        contador++; // contador de jogadas
        puts("");
        printf("Jogador %d diga a coluna: ", i + 1);
        scanf("%c", &coluna);
        limparBufferEntrada();
        printf("Jogador %d diga a linha: ", i + 1);
        scanf("%d", &linha);
        
        if (coluna > 64) {
            coluna_num = coluna - 64;
        }

        posicao = verificaJogada(matriz, linha, coluna, coluna_num, i, tokens);

        if (posicao == 1) {
            i -= 1;
        } else if (posicao == 2) {
            break;
        } else if (posicao == 3) {
            matriz[(linha - 1)][(coluna - 65)] = i;
        }

        limparBufferEntrada();

        vitoria = verificaVitoria(matriz, tokens, i); // chamar o verifica vitoria pra saber qual o jogador que ganhou

        desenharMatriz(matriz, tokens); //chamar o desenhar matriz

        if (vitoria == 1) { //Verifica se o jogador ganhou e o numero de jogadas totais efetuadas
            printf("O jogador %d ganhou o jogo! Numero de jogadas totais %d.\n", i + 1, contador);
            break;
        }

        if (i == 1) { //CICLO PARA MUDAR DE JOGADOR
            i = 0;
        } else {
            ++i;
        }
    }
}

int verificaJogada(int matriz[][NUM], int linha, int coluna, int coluna_num, int i, char tokens[]) {

    if (coluna == 'Z' && linha == 0) {   // Posicao para o jogador desistir
        printf("O jogador %d desistiu.\n", i + 1);
        if (i == 0) {
            printf("O jogador %d ganhou.\n", i + 2);
        } else {
            printf("O jogador %d ganhou o jogo.\n", i);
        }
        return 2;
    } else if (matriz[linha - 1][coluna_num - 1] == -1) {  //Verifica se tem a posicao ocupada na matriz
        return 3;
    } else {
        puts("Posição ocupada, volte a inserir a posição.\n");
        return 1;
    }

    if (linha < 1 || linha > 9) {  //Verifica se as linhas e colunas introduzidas esistem na matriz
        printf("Posição não existe, volte a inserir a posição.\n");
        return 1;
    } else if (coluna_num < 1 || coluna_num > 9) {
        printf("Posição não existe, volte a inserir a posição.\n");
        return 1;
    } else {
        return 3;
    }
}

int verificaVitoria(int matriz[][NUM], char tokens[], int i) {
    int j, k;

    //verifica as colunas
    for (j = 0; j < NUM; ++j) {
        for (k = 0; k < NUM; ++k) {
            if (matriz[j][k] != -1 && matriz[j][k] == matriz[j][k + 1] && matriz[j][k] == matriz[j][k + 2]) {
                return 1;
            }
        }
    }
    //verifica as linhas
    for (j = 0; j < NUM; ++j) {
        for (k = 0; k < NUM; ++k) {
            if (matriz[j][k] != -1 && matriz[j][k] == matriz[j + 1][k] && matriz[j][k] == matriz[j + 2][k]) {
                return 1;
            }
        }
    }
    //verifica as diagonais da esquerda para a direita
    for (j = 0; j < NUM; ++j) {
        for (k = 0; k < NUM; ++k) {
            if (matriz[j][k] != -1 && matriz[j][k] == matriz[j + 1][k + 1] && matriz[j][k] == matriz[j + 2][k + 2]) {
                return 1;
            }
        }
    }
    //verifica as diagonais da direita para a esquerda
    for (j = 0; j < NUM; ++j) {
        for (k = 0; k < NUM; ++k) {
            if (matriz[j][k + 2] != -1 && matriz[j][k + 2] == matriz[j + 1][k + 1] && matriz[j][k + 2] == matriz[j + 2][k]) {
                return 1;
            }
        }
    }
}

int main(int argc, char** argv) {
    char tokens[TOKEN];
    int matriz[NUM][NUM];

    selecionarTokens(tokens);
    criarMatriz(matriz);
    desenharMatriz(matriz, tokens);
    jogadas(matriz, tokens);

    return (0);
}