#include <stdio.h>
#include <string.h>
#include "utils.h"

void limparBufferEntrada(){
    char ch;
    while((ch = getchar()) != '\n' && ch !=EOF);
}