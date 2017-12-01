#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define MAX 35

int main(int argc, char** argv) {
    
    char frase[MAX];
    int caracteres;
    
    printf("Escreva uma frase: ");
    lerString(frase, MAX);
    
    caracteres = strlen(frase);
    
    printf("Numero de caracteres: %d ", caracteres);
    
    return (0);
}