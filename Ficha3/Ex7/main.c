#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 

{
    int num, x;
    
    printf("Escreve um valor : ");
    scanf("%d", &num);
    
    if (num <= 0){
        printf("Escreveu um numero invalido");
    }else {
        for (x = num; x >= 0; --x){
            if(x % 2 != 0){
                printf("%d ", x);
            }    
        }
    }
    return (0);
}

