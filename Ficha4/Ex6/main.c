#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    char letra;
    int coluna, linha;
    
    printf("Escreve o caracter que pretende desenhar ");
    scanf("%c", &letra);
    
    limparBufferEntrada();
    printf("Escreve o numero de linhas que pretende imprimir: ");
    scanf("%d", &linha);
    
    printf("Escreve o numero de colunas que pretende imprimir: ");
    scanf("%d", &coluna);
    
    dfigura(letra, linha, coluna);
    
    return (0);
}