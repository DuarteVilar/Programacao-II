#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 

{
    
   int tempo, horas, horas_seg, minutos, segundos;
   
   horas_seg=3600;
   
   printf("Número de segundos: ");
   scanf("%d", &tempo);
   
   horas = (tempo/horas_seg);
   
   minutos = (tempo - (horas_seg*horas)) / 60;
   
   segundos = (tempo - (horas_seg*horas) - (minutos*60));
   
   printf("%dh : %dm :%ds \n",horas,minutos,segundos);
   
   return 0;
   
}
  
    


