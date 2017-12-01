#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define MAX 35

int main(int argc, char** argv) {
    
    char frase[MAX];
    char caracter;
    
    printf("Escreva uma frase: ");
    lerString(frase, MAX);
    
    caracter = lerChar(caracter);
 
    countChar(frase, caracter);
    
    return (0);
}