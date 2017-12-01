#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define MAX_NOME 30

int main(int argc, char** argv) {

    char nome_1[MAX_NOME], nome_2[MAX_NOME];
    char virgula[1] = ",";
    
    printf("Escreve um nome: ");
    lerString(nome_1, MAX_NOME);
    
    printf("Escreve outro nome: ");
    lerString(nome_2, MAX_NOME);

    strcat(nome_1, virgula);

    printf("Os dois nomes que escreveu sao %s.", nome_1);

    return (0);
}