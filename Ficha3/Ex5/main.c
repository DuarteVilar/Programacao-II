#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)

{
    
    int num, x = 0;
    
    printf("Numero Inteiro : ");
    scanf("%d", &num);
    
    for (x = num - 1; x >= num - 5; --x){
        printf("%d ", x);
    }
    
    for (x = num + 1; x <= num + 5; ++x){
        printf("%d ", x);
    }
    
    return (0);
}

