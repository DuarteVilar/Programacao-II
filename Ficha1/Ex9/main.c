#include<stdio.h>
#include<stdlib.h>
 
int main()

{
    float P, A, IMC;
    
    printf("Escreva o seu Peso:\n");
    scanf("%f", &P);
    
    printf("Escreva a sua altura:\n");
    scanf("%f", &A);
    
        IMC = P / (A*A);
        
            printf("O seu índice de massa corporal e: %.2f ", IMC);
                         
    }
