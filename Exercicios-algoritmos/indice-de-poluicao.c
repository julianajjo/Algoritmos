/******************************************************************************

 A Secretaria de Meio Ambiente que controla o índice de poluição, mantém 3 grupos
 de indústrias que são altamente poluentes ao meio ambiente. 
 O índice de poluição aceitável varia de 0,05 até 0,25. Se o índice sobe para 
 0,3 as indústrias do 1º grupo são intimadas a suspenderem suas atividades, 
 se o índice crescer para 0,4 as indústrias do 1º e 2º grupo são intimadas a 
 suspenderem suas atividades, se o índice atingir 0,5 todos os grupos devem ser 
 notificados a paralisarem suas atividades. Faça um algoritmo em C que leia o 
 índice de poluição medido e emita a notificação adequada aos diferentes grupos 
 de empresas.


*******************************************************************************/
#include <stdio.h>

int main()
{
    float indice;
	
	printf("Informe o índice de poluição da indústria: ");
	scanf("%f",&indice);
	
	if (indice < 0.3){
		printf("Índice de poluição aceitável.");
		
	}else if (indice >= 0.3 && indice < 0.4){
		printf("Deve-se suspender as atividades do grupo 1!");
		
	}else if (indice >= 0.4 && indice < 0.5){
		printf("Deve-se suspender as atividades dos grupos 1 e 2!");
		
	}else if (indice >= 0.5){
		printf("Deve-se suspender as atividades de todos os grupos!");
		
	}
    return 0;
}

