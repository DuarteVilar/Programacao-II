#include <stdio.h>
#include <stdlib.h>

#define salario_nacional 557

void LimparBufferEntrada() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int main(int argc, char** argv) {
    int idade, contador = 1, contador_F, contador_M, contadorM_casado = 0;
    int contador_salario = 0, salario_F = 0;
    int idade_min = 150, idade_max = 0;
    char sexo, estado_civil;
    double salario, soma_salario;

    while (1) {
        printf("Questionario nº %d \n", contador);
        puts("Escreva a sua idade");
        scanf("%d", &idade);

        if (idade >= 16 && idade <= 150) {
            if (idade < idade_min) {
                idade_min = idade;
            } else if (idade > idade_max) {
                idade_max = idade;
            }
        } else if (idade < 0) {
            puts("Escreva uma idade negativa e o programa termina");
            break;
        } else
            puts("Idade Invalida.");

        LimparBufferEntrada();

        printf("Escreva o seu sexo M-Masculino ou F-Feminino:");
        scanf("%c", &sexo);


        if (sexo == 'M') {
            ++contador_M;
        } else if (sexo == 'F') {
            ++contador_F;
        } else {
            puts("Sexo Invalido.");
        }

        LimparBufferEntrada();

        puts("Diga o seu estado civil 1-Solteiro | 2-Casado | 3-Divorciado | 4-Viuvo");
        scanf("%c", &estado_civil);

        if (estado_civil == '1') {
 
        } else if (estado_civil == '2') {
  
        } else if (estado_civil == '3') {

        } else if (estado_civil == '4') {
    
        } else {
            puts("Estado Civil Invalido.");
        }

        LimparBufferEntrada();
        
        puts("Escreva o seu salario: ");
        scanf("%lf", &salario);

        if (salario > salario_nacional) {
            ++contador_salario;
            soma_salario += salario;
        }
        if (sexo == 'F' && salario <= 1500) {
            salario_F++;
        }
        if (sexo == 'M' && estado_civil == '2' && idade >= 18 && idade <= 35) {
            contadorM_casado++;
        }
        
        LimparBufferEntrada();
        
        ++contador;
    }
    printf("Idade menor: %d\n", idade_min);
    printf("Idade maior: %d\n", idade_max);
    printf("Homens casados com idades entre 18 e 35 anos: %d\n", contadorM_casado);
    printf("Existem %d pessoas do sexo feminino com salarios ate 1500 euros\n", salario_F);
    printf("A media dos salarios e: %.1lf Euros\n", soma_salario / contador_salario);

    return (0);
}