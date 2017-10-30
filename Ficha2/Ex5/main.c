#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 

{
    {
        int num1, num2;
        char opcao;
    {
        printf("\t\t\nEscolhe a opca0o:\n");
        printf("+. Somar\n");
        printf("-. Subtrair\n");
        printf("*. Multiplicar\n");
        printf("/. Dividir\n");

        printf("Opção: ");
        scanf("%c", &opcao);

        printf("Escreve um numero: \n");
        scanf("%d", &num1);

        printf("Escreve outro numero: \n");
        scanf("%d", &num2);

        switch( opcao )
    {

        case '+':
        printf("%d + %d = %d \n", num1, num2, num1 + num2);
        break;
        
        case '-':
        printf("%d - %d = %d \n", num1, num2, num1 - num2);
        break;
        
        case '*':
        printf("%d * %d = %d", num1, num2, num1 * num2);
        break;
        
        case '/':
        printf("%d / %d = %d", num1, num2, num1 / num2);
        break;

    }   
    } while(opcao);
    }
}