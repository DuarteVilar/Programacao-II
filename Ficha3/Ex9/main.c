#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 

{
       
    int x,num;
    
    printf("Escreve a tabuada que pretende: ");
    scanf("%d", &num);
    
    for (x=1; x<=10; x++){
       printf("%d x %d = %d\n", num, x, num * x);
   }
    
    return (0);
}
