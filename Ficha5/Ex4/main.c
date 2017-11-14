#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main(int argc, char** argv) {
    double array[TAM], num, soma = 0;
    int x = 0, cont = 0;

    for (x = x; x < TAM; ++x) {
        printf("Escreve o valor: ");
        scanf("%lf", &num);
        if (num == -1) {
            break;
        } else {
            array[x] = num;
            cont += 1;
        }
    }
    printf("Escreveu o numero -1. ");

    for (x = 0; x < TAM; ++x) {
        soma += array[x];
    }
    printf("A media dos numeros e: %.1lf\n ", soma / cont);

    return (0);
}