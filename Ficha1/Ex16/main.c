#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)

{
    float deposito, taxa, juros;
    
    printf("Introduza o valor a depositar:");
    scanf("%f", &deposito);
    
    printf("Introduza a taxa:");
    scanf("%f", &taxa);
    
    taxa = taxa/100;
    
    juros = deposito * taxa;
    deposito += juros;
    printf("O lucro do primeiro trimestre foi de %.2f o seu saldo actual e de %2.f\n",juros,deposito);
    
    juros = deposito * taxa;
    deposito += juros;
    printf("O lucro do segundo trimestre foi de %.2f o seu saldo actual e de %2.f\n",juros,deposito);
    
    juros = deposito * taxa;
    deposito += juros;
    printf("O lucro do terceiro trimestre foi de %.2f o seu saldo actual e de %2.f\n",juros,deposito);

    return (EXIT_SUCCESS);
}

