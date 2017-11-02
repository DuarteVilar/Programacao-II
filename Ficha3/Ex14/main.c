#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)

{ 
    int voto, total, candidato1, candidato2, candidato3, candidato4, voto_nulo, voto_branco;
    
    while (1)
    {
        
        printf("Escolha o seu voto? (1 / 2 / 3 / 4 ), ( 0-branco / 9-nulo), ");
        printf("Escreva -1 para terminar:");
        scanf("%d", &voto);
        
        if (voto >= 1 && voto <= 4){    
            if (voto == 1){
                candidato1 += 1;
            }else if (voto == 2 ){
                candidato2 += 1;
            }else if (voto == 3 ){
                candidato3 += 1;
            }else if (voto == 4 ){
                candidato4 += 1;
            }
            ++total;
            
        }else if (voto == 0 || voto == 9)
        {
            if (voto == 0){
                voto_branco += 1;
            }else{
                voto_nulo += 1;
            }
        ++total;
        }
        else
        {
        printf("O voto que escreveu e invalido.");
        }
        
         if(voto == -1)
        {
         break;
        }
    }
    printf("O numero total dos votos foi de %d.\n", total);
    printf("O candidato 1 obteve %d votos.\n", candidato1);
    printf("O candidato 2 obteve %d votos.\n", candidato2);
    printf("O candidato 3 obteve %d votos.\n", candidato3);
    printf("O candidato 4 obteve %d votos.\n", candidato4);
    
    printf("Existiram %d votos nulos.\n", voto_nulo);
    printf("Existiram %d votos em branco.\n\n", voto_branco);
    
    printf("O candidato 1 obteve %.2f%% votos.\n", ((float)candidato1 / total)*100);
    printf("O candidato 2 obteve %.2f%% votos.\n", ((float)candidato2 / total)*100);
    printf("O candidato 3 obteve %.2f%% votos.\n", ((float)candidato3 / total)*100);
    printf("O candidato 4 obteve %.2f%% votos.\n", ((float)candidato4 / total)*100);
    
    printf("A percentagem dos votos nulos foi de %.2f%%\n", ((float)voto_nulo / total)*100);
    printf("A percentagem dos votos em branco foi de %.2f%%\n", ((float)voto_branco / total)*100);
      
    return(0);
}