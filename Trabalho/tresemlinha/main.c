#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define NUM 9
#define TOKEN 2

void printMatriz(int matriz[][NUM],char tokens[]){
    int i,j;
    int x =65;
    
    printf(" ");
    printf("|");
    for(i=0; i<NUM; ++i){
        printf("%c", x);
        printf("|");
        ++x;
    }
    
    puts(" ");
    for(i=0; i< NUM; ++i){                   
        printf("%d", i+1);   
        printf("|");
        for(j=0; j< NUM; ++j){
            if(matriz[i][j]== -1){
                printf("-");
            }
            else if(matriz[i][j]==0){
                printf("%c", tokens[0]);
            }
            else if(matriz[i][j]==1){
                printf("%c", tokens[1]);
            }
            printf("|");
        }
        puts(" ");
    }
    
}

void criarMatriz(int matriz[][NUM]){
    int i, j;

    for(i=0; i< NUM; ++i){
        for(j=0; j< NUM; ++j){
            matriz[i][j]= -1;
        }
    }
    
}

void selecionarTokens(char tokens[]){
    int i;
    
    for(i=0; i<TOKEN; ++i){
        printf("Jogador %d diga o seu token: ", i+1);
        scanf("%c", &tokens[i]);
        if(tokens[1]==tokens[0]){
            puts("Os tokens nao podem ser iguais.");
            clean_buffer();
            --i;
            continue;
        }
        clean_buffer();
    }
    puts("");
    
}

int main(int argc, char** argv) {
    char tokens[TOKEN];
    int matriz[NUM][NUM];
    
    selecionarTokens(tokens);
    criarMatriz(matriz);
    printMatriz(matriz,tokens);
    
    return (0);
}