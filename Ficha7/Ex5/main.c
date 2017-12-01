#include <stdio.h>
#include <stdlib.h>
#define TAM_LINHA 4
#define TAM_COLUNA 4

int main(int argc, char** argv) {
    int i, j, MA[TAM_LINHA][TAM_COLUNA];

    for (i = 0; i < TAM_LINHA; ++i) {
        for (j = 0; j < TAM_COLUNA; ++j) {
            printf("Escreva os valores [%d] [%d]:", i, j);
            scanf("%d", &MA[i][j]);
        }
    }
    
    printf("\nMatriz Inicial");
    for (i = 0; i < TAM_LINHA; ++i) {
        puts("");
        for (j = 0; j < TAM_COLUNA; ++j) {
            printf("%d ", MA[i][j]);
        }
    }
    
    printf("\n\nMatriz Final");
    for (i = 0; i < TAM_LINHA; ++i) {
        puts("");
        for (j = (TAM_COLUNA - 1); j >= 0; --j) {
            printf("%d ", MA[i][j]);
            
        }
    }
    
    return (0);
}