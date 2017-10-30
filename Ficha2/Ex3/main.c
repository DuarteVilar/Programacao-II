#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)

{
    int nota1, nota2, nota3 ,n1 ,n2 ,n3 ,mediap;

    printf("Escreva a primeira nota:");
    scanf("%d", &nota1);

    printf("Escreva a segunda nota:");
    scanf("%d", &nota2);

    printf("Escreva a terceira nota:");
    scanf("%d", &nota3);

    n1 = nota1 * 0.25;
    
    n2 = nota2 * 0.35;
    
    n3 = nota3 * 0.45;
    
    mediap = n1 + n2 + n3;

    printf("A media ponderada das notas e: %d\n ",  mediap);

    return (0);

}

