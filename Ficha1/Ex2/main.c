#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 
{
     int num1, num2, sub, mult;
     
     printf("Introduza o primeiro Nº:");
     scanf("%d", &num1);
     
     printf("Itroduza o segundo Nº :");
     scanf("%d", &num2);
     
     sub = num1 - num2;
     
     mult = num1 * sub;
     
     printf("Resultado da subtração = %d\n", sub);
     
     printf("Resultado da  multiplicação= %d\n", mult);
     
     return 0;
  }   

