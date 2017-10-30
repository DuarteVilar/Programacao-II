#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)

{
    int x, y, maior;
    
    printf("Escreva o 1º numero : ");
    scanf("%d", &x);

    printf("Escreva o 2º numero : ");
    scanf("%d", &y);

    if(x > y)
        maior = x;
    else
        maior = y;

    printf("O maior numero e : %d", maior);
  
}

