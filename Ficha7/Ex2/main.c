#include <stdio.h>
#include <stdlib.h>
#define TAM_LINHA 4
#define TAM_COLUNA 5

int main(){  
    int i, j, contar, verificar, matriz[TAM_LINHA][TAM_COLUNA];
    
    for (i = 0; i < TAM_LINHA; ++i) {
        for (j = 0; j < TAM_COLUNA; ++j) { 
        printf("Escreva os valores [%d] [%d] na matriz: ", i, j);
        scanf("%d", &matriz[i][j]);
    }
        }  
    for (i = 0; i < TAM_LINHA; ++i) {
        puts("");
        for (j = 0; j < TAM_COLUNA; ++j) {
        printf(" %d ", matriz[i][j]);
        }
}        
    printf("\nQual é o valor para verificar?");
    scanf("%d", &verificar);

    for (i = 0; i < TAM_LINHA; ++i) {
        for (j = 0; j < TAM_COLUNA; ++j) {
            if (matriz[i][j] == verificar) {
                ++contar;
            }
        }
    }
    printf("A matriz tem %d numero(s) %d na matriz.", contar, verificar);    
    return (0);
}

