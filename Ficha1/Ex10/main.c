#include <stdio.h>
#include <stdlib.h>

int main() 

{
    int n1, n2, n3, n4, n5, media;

    printf("Escreva o primeiro numero:");
    scanf("%d", &n1);

    printf("Escreva o segundo numero:");
    scanf("%d", &n2);

    printf("Escreva o terceiro numero:");
    scanf("%d", &n3);

    printf("Escreva o quarto numero:");
    scanf("%d", &n4);

    printf("Escreva o quinto numero:");
    scanf("%d", &n5);

    media = (n1 + n2 + n3 + n4 + n5) / 5;

     printf("A media dos numeros e: %d\n ",  media);

    return (0);
}