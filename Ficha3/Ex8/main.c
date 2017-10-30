#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)

{
    int num, x, par;
    
    printf("Escreve os pares que pretende: ");
    scanf("%d", &num);
    
    while (par <= num - 1){

        if(x % 2 == 0){
                printf("%d ", x);
                par += 1;
            } 
       ++x;
    }
    
    return (0);
}
