#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 
{
     int altura, base, area, perimetro;
     
     printf("Introduza a base:");
     scanf("%d", &base);
     
     printf("Itroduza a altura :");
     scanf("%d", &altura);
     
     area = base * altura;
     
     printf("%d * %d = %d\n", base,altura,area);
     
     perimetro = base + altura + base + altura; 
     
     printf("%d + %d + %d + %d = %d\n ", base,altura,base,altura,perimetro);
     
     printf("A area do retangulo e: %d\n",area);
     
     printf("O perimetro do retangulo e: %d\n", perimetro);
     
     return 0;
}

