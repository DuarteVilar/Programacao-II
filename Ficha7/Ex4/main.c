#include <stdio.h>
#include <stdlib.h>
#define TAM_LINHA 3
#define TAM_COLUNA 3

int main(int argc, char** argv) {
    int i, j, MA[TAM_LINHA][TAM_COLUNA], MB[TAM_LINHA][TAM_COLUNA];

    for (i = 0; i < TAM_LINHA; ++i) {
        for (j = 0; j < TAM_COLUNA; ++j) {
            printf("Escreva os valores [%d] [%d]:", i, j);
            scanf("%d", &MA[i][j]);
        }
    }
    
    printf("\nMatriz A");
    for (i = 0; i < TAM_LINHA; ++i) {
        puts("");
        for (j = 0; j < TAM_COLUNA; ++j) {
            printf("%d ", MA[i][j]);
        }
    }
    
    printf("\n\nMatriz B");
    for (i = 0; i < TAM_LINHA; ++i) {
        puts("");
        for (j = 0; j < TAM_COLUNA; ++j) {
            MB[i][j] = MA[j][i];
            printf("%d ", MB[i][j]);
            
        }
    }
    
    return (0);
}