#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 

{

    int x, y;
    
    printf("Qual e o valor de x?");
    scanf("%d", &x);
    
    if (x < 1){
        y = x;
        printf ("O valor de y e %d.", y);
    }else if (x == 1){
        y = 0;
        printf ("O valor de y e %d.", y);
    }else{
        y = 2 * x;
        printf ("O valor de y e %d.", y);
    }
    return (0);
}

