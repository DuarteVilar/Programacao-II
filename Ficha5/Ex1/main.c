#include <stdio.h>
#include <stdlib.h>
#define TAM 20

int main(int argc, char** argv) {
    int numero[20];
    int x;
    
    for (x=0; x < TAM; ++x){
        numero[x]=x;
    }
    
    for (x=0; x < TAM; ++x){
        printf("%d ",numero[x]);
    }
    
    return (0);
}