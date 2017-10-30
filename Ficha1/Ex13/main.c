#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 

{
    float minut1, minut2, minut3, minut4, minut5, second1, second2, second3, second4, second5;
    float x, segundo_tota1, y, segundo_total2, z, segundo_total3, w, segundo_total4, k, segundo_total5;
    int segundos_horas, segundos_totais, horas, segundos, minutos;

    segundos_horas = 3600;

    puts("Duração da primeira música:");
    printf("Minutos: ");
    scanf("%f", &minut1);
    printf("Segundos: ");
    scanf("%f", &second1);

    x = minut1 * 60;
    segundo_tota1 = x + second1;
    
    puts("Duração da segunda música");
    printf("Minutos: ");
    scanf("%f", &minut2);
    printf("Segundos: ");
    scanf("%f", &second2);

    y = minut2 * 60;
    segundo_total2 = y + second2;
    
    puts("Duração da terceira música:");
    printf("Minutos: ");
    scanf("%f", &minut3);
    printf("Segundos: ");
    scanf("%f", &second3);

    z = minut3 * 60;
    segundo_total3 = z + second3;

    puts("Duração da quarta música:");
    printf("Minutos: ");
    scanf("%f", &minut4);
    printf("Segundos: ");
    scanf("%f", &second4);

    w = minut4 * 60;
    segundo_total4 = w + second4;

    puts("Duração da quinta música");
    printf("Minutos: ");
    scanf("%f", &minut5);
    printf("Segundos: ");
    scanf("%f", &second5);

    k = minut5 * 60;
    segundo_total5 = k + second5;

    segundos_totais = segundo_tota1 + segundo_total2 + segundo_total3 + segundo_total4 + segundo_total5;

    horas = segundos_totais / segundos_horas;
    minutos = (segundos_totais - (segundos_horas * horas)) / 60;
    segundos = segundos_totais - (segundos_horas * horas) - (minutos * 60);

    printf("O albúm tem a duração de %dH : %dM : %dS", horas, minutos, segundos);

    return (EXIT_SUCCESS);
}

