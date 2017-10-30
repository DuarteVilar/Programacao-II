#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 

{
    int x, soma;
    
    for(x = 1; x <= 100; ++x){
        printf("%d ", x);
        soma += x;
    }
    printf("\nA soma e %d.", soma);
    
    return (0);
}
