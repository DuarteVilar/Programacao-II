#include <stdio.h>
#include <stdlib.h>

double multiplicar(int n1, int n2){
    return n1 * n2;
}
long soma(int n1, int n2){
    return n1 + n2;
}
double dividir(int n1, int n2){
    return (float)n1 / n2;
}
long subtrair(int n1, int n2){
    return n1 - n2;
}


int main(int argc, char** argv) {
    int operacao, n1=10, n2=3;
    double resultado;
    
    printf("Escreve o primeiro numero: ");
    scanf("%d", &n1);

    printf("Escreve o segundo numero: ");
    scanf("%d", &n2);
    
    printf("1-Somar\n");
    printf("2-Subtrair\n");
    printf("3-Mutiplicar\n");
    printf("4-Dividir\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &operacao);

    switch (operacao){
        case 1:
            resultado=soma(n1, n2);
            break;
        case 2:
            resultado=subtrair(n1, n2);
            break;
        case 3:
            resultado=multiplicar(n1, n2);
            break;
        case 4:
            resultado=dividir(n1, n2);
            break;
        default:
            printf("Operacao Invalida.");      
    }
    printf("Resultado: %.2lf", resultado);
    return (0);
}
