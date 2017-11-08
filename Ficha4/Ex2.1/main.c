#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

int n1, n2, op;
double resultado;

int main(int argc, char** argv) {
    
    puts("Escreve o primeiro numero: ");
    scanf("%d", &n1);
    puts("Escreve o segundo numero: ");
    scanf("%d", &n2);
    
    limparBufferEntrada();
    
    puts("Escolha a operacao que pretende efetuar? (x, -, +, /) ");
    scanf("%c", &op);
    
    switch (op) {
        case '+': resultado = soma();
            break;
        case '-': resultado = subtracao();
            break;
        case '*': resultado = multiplicacao();
            break;
        case '/': resultado = divisao();
            break;
        default: puts("Operacao invalida!! ");
    }
    
    printf("O resultado da operacao e: %.1lf\n ", resultado);
    
    return (0);
}