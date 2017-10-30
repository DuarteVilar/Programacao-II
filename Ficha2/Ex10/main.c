#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)

{
    int num;
    
    printf("Escreve um número");
    scanf("%d", &num);
    
    if(num % 5 == 0 && num % 3 == 0){
        printf("O numero %d pode-se dividir por 3 e 5!", num);
    }else{
        printf("O numero %d nao se pode dividir por 3 e 5!", num);
    }
    return (0);
}
