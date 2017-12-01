#include <stdio.h>
#include <stdlib.h>
#define TAM_LINHA 3
#define TAM_COLUNA 3

int main(){  
    int i, j, matriz[TAM_LINHA][TAM_COLUNA], maior, menor;
    
    for (i = 0; i < TAM_LINHA; ++i) {
        for (j = 0; j < TAM_COLUNA; ++j) { 
        printf("Escreva os valores [%d] [%d] na matriz: ", i, j);
        scanf("%d", &matriz[i][j]);
    }
        }
    maior = matriz[0][0];
    for (i = 0; i < TAM_LINHA; ++i) {
        for (j = 0; j < TAM_COLUNA; ++j) { 
        if(maior > matriz[i][j]){
           maior = matriz[i][j]; 
        }
    }
}
    menor = matriz[0][0];
    for (i = 0; i < TAM_LINHA; ++i) {
        for (j = 0; j < TAM_COLUNA; ++j) { 
        if(maior < matriz[i][j]){
           maior = matriz[i][j]; 
        }
    }
}   
    for (i = 0; i < TAM_LINHA; ++i) {
        puts("");
        for (j = 0; j < TAM_COLUNA; ++j) {
        printf(" %d ", matriz[i][j]);
        }
}        
printf("\nO maior é %d.", maior);
printf("\nO menor é %d.", menor);
return (0);
}