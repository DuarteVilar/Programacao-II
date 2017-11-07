#include <stdio.h>
#include <stdlib.h>

int valorInteiro(){
    int numero;
    scanf("%d", &numero);
    return numero;
}
void escrever(int numero) {
    int x;
    for (x=0; x<numero; ++x) {
        printf("*");
    }
}
int main(int argc, char** argv) {
    int numero;
    
    printf("Escreve um numero: ");
    numero = valorInteiro();
    escrever(numero);
    return (0);
}

