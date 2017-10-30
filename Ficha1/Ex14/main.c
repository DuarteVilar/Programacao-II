#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)

{
    float vt1, vt2, vt3, vt4, vt5;
    float tt_vts, perc1, perc2, perc3, perc4, perc5;
    
    printf("Escreve o numero de votos obtidos no primeiro candidato: ");
    scanf("%f", &vt1);
    
    printf("Escreve o numero de votos obtidos no segundo candidato: ");
    scanf("%f", &vt2);
    
    printf("Escreve o numero de votos obtidos no terceiro candidato: ");
    scanf("%f", &vt3);
    
    printf("Escreve o numero de votos obtidos no quarto candidato: ");
    scanf("%f", &vt4);
    
    printf("Escreve o numero de votos obtidos no quinto candidato: ");
    scanf("%f", &vt5);
    
    tt_vts = vt1 + vt2 + vt3 + vt4 + vt5;
    perc1 = (vt1 / tt_vts) * 100;
    perc2 = (vt2 / tt_vts) * 100;
    perc3 = (vt3 / tt_vts) * 100;
    perc4 = (vt4 / tt_vts) * 100;
    perc5 = (vt5 / tt_vts) * 100;
    
    printf("O total dos votos são: %0.1f\n", tt_vts);
    printf("O primeiro candidato teve %0.1f dos votos \n", perc1);
    printf("O segundo candidato teve %0.1f dos votos \n", perc2);
    printf("O terceiro candidato teve %0.1f dos votos \n", perc3);
    printf("O quarto candidato teve %0.1f dos votos \n", perc4);
    printf("O quinto candidato teve %0.1f dos votos \n", perc5);
    
    return (0);
}

