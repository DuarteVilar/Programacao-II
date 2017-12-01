#include <stdio.h>
#include <stdlib.h>
#define TAM_LINHA 4
#define TAM_COLUNA 4

int main(int argc, char** argv) {
    int i, j;
    float matriz[TAM_LINHA][TAM_COLUNA];

    for (i = 0; i < TAM_LINHA; ++i) {
        for (j = 0; j < TAM_COLUNA; ++j) {
            if (j == 0) {
                printf("Codigo: ");
                scanf("%f", &matriz[i][j]);
            } else if (j == 1) {
                printf("Teste 1: ");
                scanf("%f", &matriz[i][j]);
            }else if (j == 2) {
                printf("Teste 2: ");
                scanf("%f", &matriz[i][j]);
            }
        }
    }
    puts("Codigo  Teste1  Teste2  Media");
    for (i = 0; i < TAM_LINHA; ++i) {
        matriz[i][3] = (matriz[i][1] + matriz[i][2]) / 2;
    }
    for (i = 0; i < TAM_LINHA; ++i) {
        puts(" ");
        for (j = 0; j < TAM_COLUNA; ++j) {
            printf("  %.0f ", matriz[i][j]);
        }
    }  
    return (0);
}