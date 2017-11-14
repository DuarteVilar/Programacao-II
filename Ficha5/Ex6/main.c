#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void limparBufferEntrada() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void par(int numero[]) {
    int x;

    printf("\nNumeros pares: ");
    for (x = 0; x < MAX; ++x) {
        if (numero[x] % 2 == 0) {
            printf(" %d ", numero[x]);
        }
    }
}

void impar(int numero[]) {
    int x;

    printf("\nNumeros impares: ");
    for (x = 0; x < MAX; ++x) {
        if (numero[x] % 2 != 0) {
            printf(" %d ", numero[x]);
        }
    }
}

int main(int argc, char** argv) {
    int x, numero[MAX];
    char op;

    for (x = 0; x < MAX; ++x) {
        printf("Escreve o numero: ");
        scanf("%d", &numero[x]);
    }
    
    do {
    limparBufferEntrada();
    printf("\nPretende ver os pares (P/p) ou os impares (I/i)");
    scanf("%c", &op);

    
        if (op == 'P' || op == 'p') {
            par(numero);
        } else if (op == 'I' || op == 'i') {
            impar(numero);
        } else {
            printf("Opcao Incorreta.");
        }
    } while (!(op == 'P' || op == 'p' || op == 'I' || op == 'i'));
    
    return (0);
}