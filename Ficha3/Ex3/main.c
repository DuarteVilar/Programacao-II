#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)

{
    int n1,n2, x;
    
    printf("Escreve o 1º numero: ");
    scanf("%d", &n1);
    
    printf("Escreve o 2º numero: ");
    scanf("%d", &n2);
    
    for(x = n1 + 1; x <= n2 - 1; ++x){
    printf("%d",x);
    }

    return (0);
}

