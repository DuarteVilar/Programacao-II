#include<stdio.h>
#include<math.h>

int main ()

{
 
    float centigrados,Fahrenheit;
            
    printf("Introduza a temperatura em graus Fahrenheit:");
    scanf("%f",&Fahrenheit);
 
    centigrados=(Fahrenheit - 32) * 5/9;

 
    printf("Temperatura em graus Centígrados = %.2f\n",centigrados);
    
    return 0;
}