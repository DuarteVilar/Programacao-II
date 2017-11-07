#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

int main(int argc, char** argv)

{
    int x;
    
    printf("Escreve o fatorial que pretende calcular? ");
    scanf("%d", &x);

    fator(x);
    
    return (0);
}