#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"
#define MAX 35

int main(int argc, char** argv) {
    char nome[MAX];
    int x, cont = 0, total=0;
    
    printf("Escreva o seu nome: ");
    lerString(nome, MAX);
    
    total=strlen(nome);
    
    for (x = 0; x < total; ++x) {
        if (nome[x] == ' '){
            cont += 1;
        }
    }
    
    printf("Numero de caracteres do seu nome sem os espacos: %d\n", total - cont);
    
    return (0);
}