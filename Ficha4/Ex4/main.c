#include <stdio.h>
#include <stdlib.h>

double notas(int w){
    int x;
    double notas; 
    double soma;
    for(x=0; x<w; ++x){
        printf("Escreva a nota %d: ", x+1);
        scanf("%lf", &notas);
        soma = soma + notas;
    }
    return soma/w;
}
int main(int argc, char** argv) {
    int y;
    double media;
    printf("Escreve o valor: ");
    scanf("%d", &y);
    media=notas(y);
    printf("A Media e: %.2lf", media);
    return (0);
}