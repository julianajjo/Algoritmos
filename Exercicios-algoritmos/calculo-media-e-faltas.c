/******************************************************************************

Informe as duas notas de um aluno (P1 e P2) e a quantidade de faltas no semestre, 
calcule a média das notas e o percentual de faltas sobre 20 aulas.  
Caso o percentual de faltas for maior que 30% o aluno está automaticamente 
reprovado, caso contrário, verifique se a média é maior ou igual a 6,  
se afirmativo o aluno está aprovado, senão informe uma nota P3 para recalcular 
a média, se a nova média for maior igual a 6. Escreva aprovado no exame, 
caso negativo exiba reprovado por nota.


*******************************************************************************/

#include <stdio.h>

int main()
{
    float notap1, notap2, notap3, media, novaMedia, faltas;

        printf("Digite a nota da P1: "); 
        scanf("%f",&notap1); 

        printf("Digite a nota da P2: "); 
        scanf("%f",&notap2); 

        printf("Digite a quantidade de faltas do aluno: "); 
        scanf("%f",&faltas); 
        
        media = (notap1 + notap2)/2;
        faltas = (faltas/20) * 100;
        
        if (media >= 6 && faltas <= 30){
            printf("Aluno Aprovado!"); 
            
        }if (media < 6 && faltas <=30){
            printf("Digite a nota da P3: "); 
            scanf("%f",&notap3); 
            novaMedia = (notap1 + notap2 + notap3) / 3;
            if(novaMedia >= 6){
                printf("Aluno Aprovado!"); 
            }else {
                printf("Aluno Está reprovado por nota!");
            }
    
        }if(faltas > 31){
            printf("Aluno reprovado, devido a porcentagem de faltas: %.0f%%!", faltas);
            
        }
    return 0;
}


