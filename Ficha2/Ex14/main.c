#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 

{
    double montante, saldo, valor;
    
    printf("Escreve o teu saldo bancario: ");
    scanf("%lf", &saldo);
    
    printf("Escreve o montante positivo para depositar ou o montante negativo para debitar: ");
    scanf("%lf", &montante);
    
    if (montante > 0 )
    {
        valor = saldo + montante;
        if(valor > saldo)
        {
          printf ("Essa operacao pode-se realizar.\n");  
        }
        else 
        {
          printf ("Essa operacao e impossivel de realizar.\n");  
        }
        printf ("O seu saldo apos o credito e : %.2lf€.", valor);
    }
    
    if (montante < 0 )
    {
        valor = saldo + montante;
        if(valor > saldo)
        {
          printf ("Operacao realizada.\n");  
        }
        else 
        {
          printf ("Essa operacao e impossivel de realizar.\n");  
        }
        printf ("O seu saldo apos o debito e : %.2lf€.", valor);
    }
    
    if (montante == 0)
        
    {
        printf("O seu saldo nao se altera...O seu saldo e : %.2lf€", saldo);
    }

    return (0);
}