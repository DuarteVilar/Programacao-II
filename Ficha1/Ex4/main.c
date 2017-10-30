#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    float area, perimetro, raio, PI;
        PI = 3.14;
     
    printf("Introduza o valor do raio:");
    scanf("%f",raio);
    
    perimetro = (2 * PI) * raio;
    
    area = PI * (raio * raio);
    
    printf ("(2 * PI) * %f = %f\n",raio,perimetro);
    
    printf("PI * (%f * %f) = %f\n",raio,raio,area);
    
    printf("O valor do perimetro e: %f\n",perimetro);
    
    printf("O valor da area e: %f\n", area);
    
      return (0);
    
}

