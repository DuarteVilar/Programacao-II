#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define MAX 50

int main(int argc, char** argv) {
    char frase_1[MAX];
    int x = 0, nome, semapelido;

    printf("Escreva o seu nome: ");
    lerString(frase_1, MAX);

    nome = lastIndex(' ', frase_1, MAX);
    semapelido = strlen(frase_1);
    
    printf("O seu nome no formato (apelido, nome sem apelido):\n");
    for (x = nome; x < (semapelido); ++x) {
        printf("%c", frase_1[x]);
    }
    printf(" ");
    for (x = 0; x < nome; ++x) {
        printf("%c", frase_1[x]);
    }

    return (0);
}