#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)

{
    int tempo_ideal, tempo_atual;
    float tempo;
    
    printf("Escreve a temperatura atual?");
    scanf("%f", &tempo_atual);
    
    printf("Escreve a temperatura ideal?");
    scanf("%d", &tempo_ideal);
    
    if (tempo_ideal < tempo_atual)
        
        {
            tempo = (float)tempo_atual - tempo_ideal;   
            printf("Reduzir ate a temperatura ideal sao necessarios %.0fsegundos", tempo * 120);
        }
    
    if (tempo_ideal > tempo_atual)
        
        {
            tempo = (float)tempo_ideal - tempo_atual;   
            printf("Aumentar ate a temperatura ideal sao necessarios %.0fsegundos", tempo * 180);
        }
    
    return (0);
}

