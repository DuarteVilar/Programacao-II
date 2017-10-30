#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 

{
     int x, y;
    
    printf("Qual e o valor de x : ");
    scanf("%d", &x);
    
    printf("Qual e o valor de y : ");
    scanf("%d", &y);
    
    if (x == 0 && y == 0)
        {
            printf("Esta na origem ");
            printf("Coordenadas: (%d,%d)", x ,y);
        }
    if (x == 0 && y > 0)
        {
            printf("Esta sobre o eixo x.");
            printf("Coordenadas: (%d,%d)", x ,y);
        }
    if (x > 0 && y == 0)
        {
            printf("Esta sobre o eixo y. ");
            printf("Coordenadas: (%d,%d)", x ,y);
        }
    
    if (x > 0 && y > 0)
    {
        printf ("Pertence ao 1ºQuandrante"); 
        printf("Coordenadas: (%d,%d)", x ,y);
    }
    else if (x < 0 && y > 0)
    {
        printf ("Pertence ao 2ºQuandrante");
        printf("Coordenadas: (%d,%d)", x ,y);
    }
    else if (x < 0 && y < 0){
        printf ("Pertence ao 3ºQuandrante");
        printf("Coordenadas: (%d,%d)", x ,y);
    }
    else if (x > 0 && y < 0)
    {
        printf ("Pertence ao 4ºQuandrante");
        printf("Coordenadas: (%d,%d)", x ,y);
    }
    return (0);
}

