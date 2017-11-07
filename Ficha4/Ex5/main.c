#include <stdio.h>
#include <stdlib.h>

void factor(int numero){
    int x;
    int resultado=1;
    for(x=1; x<= numero; ++x){
        resultado= resultado *x;
    }
    printf("Resultado: %d", resultado);
}
int main(int argc, char** argv) {
    int numero;
    printf("Escreve o numero: ");
    scanf("%d", &numero);
    factor(numero);
    return (0);
}