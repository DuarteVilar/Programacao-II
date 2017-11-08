#include <stdio.h>
#include "Header.h"

void limparBufferEntrada(){
    char c;
    while((c = getchar()) != '\n' && c !=EOF);
}