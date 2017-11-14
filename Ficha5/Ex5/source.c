#include <stdio.h>
#include "header.h"

void limparBufferEntrada() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void conteudo(double numero[]){
    int x;
    
    printf("Conteudo: ");
    
    for (x = 0; x < MAX; ++x){
        printf("%.lf ", numero[x]);
    }   
}

void dobro(double numero[]){
    int x;
    
    printf("\nDobro: ");
    
    for (x = 0; x < MAX; ++x){
        printf("%.lf ", numero[x] * 2);
    }   
}

void somatorio(double numero[]){
    int x, soma = 0;
    
    printf("\nSomatorio: ");
    
    for (x = 0; x < MAX; ++x){
        soma += numero[x];
    }   
    printf("%d", soma);

    printf("\nMédia: ");
    printf("%.2f ", (float)(soma / MAX));
}

void maior(double numero[]){
    int x, num = numero[0];
    
    printf("\nMaior: ");
    
    for (x = 0; x < MAX; ++x){
        if(num < numero[x]){
            num = numero[x];
        }
    }   
    printf("%d", num);
}

void menor(double numero[]){
    int x, num = numero[0];
    
    printf("\nMenor: ");
    
    for (x = 0; x < MAX; ++x){
        if(num > numero[x]){
            num = numero[x];
        }
    }   
    printf("%d", num);
}