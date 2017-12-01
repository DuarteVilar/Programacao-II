#include <stdio.h>
#include <string.h>
#include "utils.h"

void clean_buffer(){
    char ch;
    while((ch = getchar()) != '\n' && ch !=EOF);
}
