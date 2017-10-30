#include <stdio.h>
#include <stdlib.h>
#define distancia 130
#define litros 4

int main(int argc, char** argv) {

    int viagem;
    float media, autonomia, combustivel;
    
    puts ("Pretende fazer a viagem em quanto tempo ?");
    scanf("%d", &viagem);
    
    media = distancia / (viagem / 60.0);
    
    if (media <= 60){
        combustivel = 5; 
        }else if (media > 60 && media <= 120){
        combustivel = 6;      
        }else if (media > 120){
        combustivel = 7;  
        }

        autonomia = (litros * 100) / combustivel;
        if (autonomia >= 79 && autonomia < 130){
            printf ("Tem que parar para abastecer na terceira bomba aos km 79.\n");
        }else if (autonomia >= 60 && autonomia < 70){
            printf ("Tem que parar para abastecer na primeira bomba aos km 60.\n");
        }else if (autonomia >= 70 && autonomia < 79){
            printf ("Tem que parar para abastecer na segunda bomba aos km 70.\n");
        }
        printf("O seu combustivel atual faz apenas %.2fkm.\n", autonomia);
        printf("A velocidade media da viagem e %.2fkm/h", media);
 
        return (0);
}