#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define MAX_NOME 35

int main(int argc, char** argv) {
    
    char nome_1[MAX_NOME];
    char nome_2[MAX_NOME];
    
    printf("Introduza o nome a copiar: ");
    lerString(nome_1, MAX_NOME);
    
    strcpy(nome_2, nome_1);
    
    printf("Nome copiada: %s\n ", nome_2);
    
    return (0);
}