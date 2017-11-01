#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 

{
    int x, y, total;

    do{
        printf("Escreve um numero (-1 para calcular a media): ");
        scanf("%d", &y);
        
        if (y == -1){
            printf("A media dos numeros inseridos e %.2lf\n", (float)x / total);
        }else{
        x += y;
        total++;
        }
    }
    while (y != -1);

    return (0);
}