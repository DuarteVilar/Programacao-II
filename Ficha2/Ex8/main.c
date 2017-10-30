#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 

{
    int horario, entrada, saida, horaentrada, minentrada,  horasaida, minsaida;
    
    printf("Hora de entrada:");
    scanf("%d", &horaentrada);
    printf("Minutos de entrada:");
    scanf("%d", &minentrada);
    printf("Hora de saida:");
    scanf("%d", &horasaida);
    printf("Minutos de saida:");
    scanf("%d", &minsaida);
    
    entrada = (horaentrada * 3600) + minentrada;
    saida = (horasaida * 3600) + minsaida;
    horario = saida - entrada;
    
    if (horario < 0)
        
    {
        horario = (24 * 3600) + horario;
    }
    
    printf("O funcionario trabalhou: %dH:%dMin", horario / 3600, horario % (3600 / 60));
    return (0);
}

