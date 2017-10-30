#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main() 

{
    float kmano, dist, result;
    
    kmano = 9460800000000.00;

    printf("Introduza a distancia em quilometros: ");
    scanf("%f", &dist);
    
    result = dist / kmano;
    
    printf("%.0f equivale a %.8f anos-luz", dist, result);
    
    return (0);
}
