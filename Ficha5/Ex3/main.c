#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void LimparBufferEntrada() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int main(int argc, char** argv) {

    int x;
    int contador = 0;
    char simbolo, array[MAX];

    for (x = 0; x <= MAX; ++x) {
        printf("Escreve o caracter: ");
        scanf("%c", &array[x]);
        LimparBufferEntrada();
    }

    printf("Indica o caracter que pretende procurar: ");
    scanf("%c", &simbolo);
    LimparBufferEntrada();

    for (x = 0; x < MAX; ++x) {
        if (simbolo == array[x]) {
            ++contador;
        }
    }

    for (x = 0; x < MAX; ++x) {
        if (simbolo == array[x]) {
            printf("Encontra-se nas posicoes: %d\n", x);
        }
    }

    printf("O caracter visualiza-se %d vezes\n", contador);
    
    return (0);
}