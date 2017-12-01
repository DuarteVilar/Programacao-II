#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define MAX_IDADE 3

int main(int argc, char** argv) {

    char idade[MAX_IDADE];

    printf("Escreva a sua idade: ");

    lerString(idade, MAX_IDADE);

    printf("A sua idade e : %s\n", idade);

    return (0);
}