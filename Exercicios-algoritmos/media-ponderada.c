/******************************************************************************

Faça um algoritmo que calcule a média ponderada das notas de 3 provas. 
A primeira e a segunda prova tem peso 1 e a terceira tem peso 2. Ao final, 
mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. 
A nota para aprovação deve ser igual ou superior a 60 pontos.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //declaração de variáveis
    float prova1, prova2, prova3, media;
    
    //entrada de dados
    printf("Informe um valor para a prova 1:");
    scanf("%f", &prova1);
    printf("Informe um valor para a prova 2:");
    scanf("%f", &prova2);
    printf("Informe um valor para a prova 3:");
    scanf("%f", &prova3);  
    
    //processamento
    media = ((prova1*1)+(prova2*1)+(prova3*2))/100;
    
    //seleção
    if(media>=60) 	
	{
		printf("O aluno está aprovado!");	
	}
	else 
	{
		printf("O aluno está reprovado!");	
	}



    return 0;
}

