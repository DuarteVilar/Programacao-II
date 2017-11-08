#include <stdio.h>
#include <stdlib.h>

int valorinteiro(int min, int max)
{
    int valor;
    while(1){
        printf("Escreve o valor: ");
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
void escrever(int valor) {
    int x;
    for (x=0; x<valor; ++x) {
        printf("*");
    }
}
int main(int argc, char** argv) {
    int valor;
    int min = 1;
    int max = 100;
    
    valor = valorinteiro(min, max);
    escrever(valor);

    return (0);
}