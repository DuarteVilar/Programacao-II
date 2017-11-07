#include <stdio.h>
#include "Header.h"

#define eurosparadolares 1.16
#define dolaresparaeuros 0.85

char moeda;
double valor;

void limparBufferEntrada() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

double conversao(double valor, char operacao) {
    return valor * (operacao == 'D' || operacao == 'd' ? dolaresparaeuros : eurosparadolares);
}

double lerDouble() {
    printf("Escreve o valor que pretende converter: ");
    scanf("%lf", &valor);
    return valor;
}

char lerChar() {
    printf("Qual a operacao que pretende fazer? (E = euros para dolares ou D = dolares para euros): ");
    
    limparBufferEntrada();
    scanf("%c", &moeda);
    
    return moeda;
}