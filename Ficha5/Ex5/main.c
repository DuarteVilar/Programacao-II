#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main(int argc, char** argv) {

    int x;
    double numero[MAX];

    for (x = 0; x < MAX; ++x) {
        printf("Escreve o valor: ");
        scanf("%lf", &numero[x]);
        limparBufferEntrada();
    }
    
    conteudo(numero);
    dobro(numero);
    somatorio(numero);
    maior(numero);
    menor(numero);
    
    return (0);
}