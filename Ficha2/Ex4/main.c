#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)

{
    int num, maior, menor;
  
    printf("Escreve um numero:");
    scanf("%d",&num);
    
    menor = num;
    maior = num;
    
    printf("Escreve um numero:");
    scanf("%d",&num);
    
    menor = num;
    maior = num;
    
    printf("Escreve um numero:");
    scanf("%d",&num);
  
    if(num > maior) maior = num;
    if(num < menor) menor = num;
   
    printf ("O numero menor e :%d",menor);
 
    return 0;
}

