#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)

{
    int x, num, dive; 

    printf("Insira um numero: ");
    scanf("%d", &num);
   
    for (x = 1; x <= num; x++) {
        if (num % x == 0){ 
        dive++;
        }
    }
    
     if (dive == 2){
        printf("%d e primo.", num);
    }else{
        printf("%d nao e primo.", num);
    }
    
    return (0);
}
