#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

int main(int argc, char** argv) {
    double valor, print;
    char moeda;
    
    valor=lerDouble();
    moeda=lerChar();
    print = conversao(valor, moeda);
    
    printf("O valor da conversao e: %.1lf ", print);
    
    return (EXIT_SUCCESS);
}