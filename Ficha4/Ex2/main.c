#include <stdio.h>
#include <stdlib.h>

int n1, n2, operacao;
double resultado;

long soma(){
    return n1 + n2;
}
double multiplicar(){
    return n1 * n2;
}
long subtrair(){
    return n1 - n2;
}
double dividir(){
    return (float)n1 / n2;
}

int main(int argc, char** argv) {

    printf("Escreve o primeiro numero: ");
    scanf("%d", &n1);

    printf("Escreve o segundo numero: ");
    scanf("%d", &n2);
    
    printf("1-Somar\n");
    printf("2-Subtrair\n");
    printf("3-Mutiplicar\n");
    printf("4-Dividir\n");
    printf("Escolhe uma opcao: ");
    scanf("%d", &operacao);
     
    
    switch (operacao){
        case 1:
            resultado=soma();
            break;
        case 2:
            resultado=subtrair();
            break;
        case 3:
            resultado=multiplicar();
            break;
        case 4:
            resultado=dividir();
            break;
        default:
            printf("Operacao Invalida.");      
    }
    printf("Resultado: %.2lf", resultado);
    return (0);
}