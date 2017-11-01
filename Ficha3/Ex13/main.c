#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)

{
    int nota;
    
    while(1)
    {
    
        puts("Qual foi a nota do aluno (0 a 20):");
        scanf ("%d", &nota);

        if(nota >= 0 && nota <= 20)
        {
            if(nota > 9.5)
            {
                printf("O aluno com a nota %d, obtem aprovacao.", nota);    
            }
            else
            {
                printf("O aluno com a nota %d, nao obtem aprovacao.", nota);
            }
            break;
        }
        else
        {
            puts ("A nota que inserio nao e valida!!");
        }
    }

    return (0);
}