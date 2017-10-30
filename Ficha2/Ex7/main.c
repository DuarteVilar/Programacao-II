#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 

{

    int num1, num2, num3;
    
    printf("Escreve o 1ºnumero: ");
    scanf("%d", &num1);
    
    printf("Escreve o 2ºnumero: ");
    scanf("%d", &num2);
    
    printf("Escreve o 3ºnumero: ");
    scanf("%d", &num3);
    
    if (num1 > num2 && num2 > num3)
    {
     printf("Em ordem crescente fica %d, %d, %d. ", num3, num2, num1);   
    }
    else if (num3 > num2 && num2 > num1)
    {
     printf("Em ordem crescente fica %d, %d, %d. ", num1, num2, num3);
    }
    else 
    {
     printf("Em ordem crescente fica %d, %d, %d. ", num1, num3, num2);
    } 
    return (0);
}


