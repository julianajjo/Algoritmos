/******************************************************************************

5-faça um programa que colete a nota de 20 alunos e armazene em um vetor, 
calcule a média da sala depois da coleta do vetor, em um novo laço mostre se o 
aluno esta aprovado ou reprovado "media acima de 6" e se a média dele é maior 
que a média da sala (1,5)

*******************************************************************************/
#include <stdio.h>

int main()
{
    float notas[20];
    float mediaSala = 0;
    int x;

    for(x=0; x<20; x++){
        printf("Informe a nota dos alunos: ");
        scanf("%f", &notas[x]);
        mediaSala = mediaSala + notas[x];
    }
    
    mediaSala = mediaSala / 20;
    printf("\n Média da Sala = %f", mediaSala);
    
    for(x=0; x<20; x++){
        if(notas[x]>6){
            printf("\nO aluno [%i] está Aprovado!", x);
            if(notas[x]>mediaSala){
                printf(" A média do aluno é maior que a média da sala!");
            }else{
                printf(" A média do aluno é menor que a média da sala!");
            }
        }else{
            printf("\nO aluno [%i] está Reprovado!!!", x);
        }
    }
    return 0;
}

