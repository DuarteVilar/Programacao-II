#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int valor;
    const  int inical=0; 

    printf("Escreve o valor: ");
    scanf("%d", &valor);

    const  int final=valor;

    for (inical; (valor-final)<=final; ++valor){
        printf("%d", valor-final);
        puts("");
    }

    return (0);
}