/******************************************************************************

Faça um programa em C que receba temperaturas e poossua as seguintes opções:
1-Temperatura mínima de todos os dias
2-Temperatura máxima de todos os dias
3-Maior variação de temperatura
4-Sair do programa

*******************************************************************************/

#include <stdio.h>

int main()
{
    float temps[10][3]; //x=>0...9 y=>0...2
    //10 dias - coluna 0 => tempMinima coluna 1 => tempMax coluna 2 => media
    float maiorVar=0.0, variacao=0.0; 
    int x, opcao; //contador
    
    for(x=0; x<10; x++){
        printf("Informe a temperatura mínima do dia [%i]: ", x);
        scanf("%f", &temps[x][0]);
        printf("Informe a temperatura máxima do dia [%i]: ", x);
        scanf("%f", &temps[x][1]);
        //Média
        temps[x][2] = (temps[x][0]+temps[x][1])/2;
    }
    
    for(x=0; x<10; x++){
        variacao = (temps[x][1]-temps[x][0]);
        if(variacao > maiorVar){
            maiorVar = variacao;
        }
    }
    
    do{
        printf("Escolha uma das opções:");
        printf("\n\n1-Temperatura mínima de todos os dias\n2-Temperatura máxima de todos os dias\n3-Maior variação de temperatura\n4-Sair do programa");
		scanf("%i", &opcao);
		
		switch(opcao){
			case 1:{
				printf("Temperatura mínima de todos os dias: ");
				for(x=0; x<10; x++){
				    printf("%f\n", temps[x][0]);
				break;
			}
			
			case 2:{
				printf("Temperatura máxima de todos os dias: ");
				for(x=0; x<10; x++){
				    printf("%f\n", temps[x][1]);	
				break;
			}
			
			case 3:{
				printf("A maior variação de temperatura de todos os dias: %f\n", maiorVar);
				break;
			}
			
			case 4:{
				printf("Fim!");
				break;
			}
			
			default:{
				printf("Opção Inválida !!! Verifique !!!\n");
				break;
			}
    	}	    
	}
    
return 0;
}

