#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 

{
    int limite, salto, x = 0;
    
    printf("Diz o limite : ");
    scanf("%d", &limite);
    
    printf("Diz o salto : ");
    scanf("%d", &salto);
    
    for (x = 0; x <= limite; ++x){
        if(x % salto == 0){
            printf("%d ",x);
        }
    }
    return (0);
}

