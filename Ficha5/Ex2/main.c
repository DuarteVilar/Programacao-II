#include <stdio.h>
#include <stdlib.h>
#define TAM 26

int main(int argc, char** argv) {
    int numero[26];
    int x;
    
    for (x=5; x < TAM; ++x){
        numero[x]=x;
    }
    
    for (x=5; x < TAM; ++x){
        printf("%d ",numero[x]);
    }
    
    return (0);
}