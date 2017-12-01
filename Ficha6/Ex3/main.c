#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define MAX_NOME 30

int main(int argc, char** argv) {

    char nome_1[MAX_NOME], nome_2[MAX_NOME];
    int ordem_alfabetica;

    printf("Escreve um nome: ");
    lerString(nome_1, MAX_NOME);

    printf("Escreve outro nome: ");
    lerString(nome_2, MAX_NOME);

    ordem_alfabetica = strcmp(nome_1, nome_2);

    printf("\nOrdem Alfabetica: ");
    if (ordem_alfabetica < 0) {
        printf("%s\n", nome_1);
        printf("%s\n", nome_2);
    }
    else {
        printf("%s\n", nome_2);
        printf("%s\n", nome_1);
    }

    return (0);
}