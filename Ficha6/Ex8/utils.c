#include <stdio.h>
#include <string.h>
#include "utils.h"
#define MAX 50

void clean_buffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int lerString(char *string, int max) {
    if (fgets(string, max, stdin) != NULL) {
        int tamanho = strlen(string) - 1;
        if (string[tamanho] == '\n') {
            string[tamanho] = '\0';
        } else {
            clean_buffer();
        }
        return 1;
    }
    return 0;
}

int lastIndex(char caracter, char nome_p[], int semapelido[]) {
    int x, arraynome = -1;

    for (x = 0; x < semapelido; ++x) {
        if (nome_p[x] == caracter) {
            arraynome = x;
        }
    }
    return arraynome;
}