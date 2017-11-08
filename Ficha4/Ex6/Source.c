#include <stdio.h>
#include "Header.h"

void limparBufferEntrada(){
    char w;
    while((w = getchar()) != '\n' && w !=EOF);
}

void dfigura(char letra, int coluna, int linha) {
    int x, y;
    
    for (x = 1; x <= coluna; ++x) {
        for(y = 1; y <= linha; ++y) {
            if (x > 1 & x < coluna & y > 1 & y < linha) {
                printf(" ");
                continue;
            }
            else {
                printf("%c", letra);
            }
        }
    }
}