#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)

{
	int horas,minutos;

	printf("Escreve as horas: \n");
	scanf("%d",&horas);
        
        printf("Escreve os minutos:\n");
        scanf("%d",&minutos);

	if(horas <= 12)
	{
		if(horas == 12)
		{
			printf("%d:%d pm.\n",horas,minutos);
		}
		else
		{
			printf("%d:%d am.\n",horas,minutos);
		}
	}
	else
	{
		if(horas == 24)
		{
			horas = 0;
			printf("%d:%d am.\n",horas,minutos);
		}
		else
		{
			horas -= 12;
			printf("%d:%d pm.\n",horas,minutos);
		}
	}
}

