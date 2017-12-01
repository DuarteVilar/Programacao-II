#include <stdio.h>
#include <string.h>
#include "utils.h"
#define MAX 35

void clean_buffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int lerString(char *string, int max) {
    if (fgets(string, max, stdin) != NULL) {
        int tamanho = strlen(string) - 1;
        if (string[tamanho] == '\n') {
            string[tamanho] = '\0';
        }
        else {
            clean_buffer();
        }
        return 1;
    }
    return 0;
}

int lerChar(char caracter) {
    printf("Diga o caracter que pretende visualizar: ");
    scanf("%c", &caracter);
    clean_buffer();
    return caracter;
}

void countChar(char array[], char caracter) {
    int x, cont = 0;
    for (x = 0; x < MAX; ++x) {
        if (array[x] == caracter) {
            cont += 1;
        }
    }
    printf("Selecionou o caracter %c.", caracter);
    puts("");
    printf("O caracter aparece %d(vezes) na frase.", cont);
}