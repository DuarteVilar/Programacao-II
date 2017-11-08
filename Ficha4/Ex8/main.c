#include <stdio.h>
#include <stdlib.h>
#define alunos 10

int lerinteiro(int min, int max){
    int valor;
    while(1){
        printf("Escreve um valor: ");
        scanf("%d", &valor);
        if ( valor>= min & valor<=max ) {
            break;
        }
        else {
            printf("Valor Invalido.");
        }
    }
    return valor;
}

int main(int argc, char** argv) {
    int nota[alunos];
    int min = 0;
    int max = 20;
    int x;
    
    for (x=0; x<alunos; ++x){
        nota[x] = lerinteiro(min, max);
    }
    
    return (0);
}