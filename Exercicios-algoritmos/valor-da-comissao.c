/******************************************************************************

Desenvolva um programa em C do problema a seguir: 
Utilizando comandos de seleção aninhados, identifique e calcule a comissão de um 
vendedor baseado no valor de venda informado:
- 0 a 100, comissão de 1%
- 101 a 200, comissão de 2%
- 201 a 300, comissão de 3 %
- 301 a 400, comissão de 4%
- Acima de 400, comissão de 5%

*******************************************************************************/
#include <stdio.h>

int main()
{
    float venda, comissao;
    
	printf("Informe o valor da venda:");
	scanf("%f", &venda);
	
	if(venda>=0 && venda<=100){
	    comissao = venda * 0.01;
	    printf("A comissão será de 1%% \n");
		printf("O valor será R$ %.2f", comissao);
	} 
	else {
		if(venda>=101 && venda<=200){
			comissao = venda * 0.02;
	        printf("A comissão será de 2%% \n");
		    printf("O valor será R$ %.2f", comissao);
		}
		else{
			if(venda>=201 && venda<=300){
				comissao = venda * 0.03;
	            printf("A comissão será de 3%% \n");
	            printf("O valor será R$ %.2f", comissao);
			}
			else {
				if(venda>=301 && venda<=400){
					comissao = venda * 0.04;
	                printf("A comissão será de 4%% \n");
		            printf("O valor será R$ %.2f", comissao);
				} else {
					comissao = venda * 0.05;
	                printf("A comissão será de 5%% \n");
		            printf("O valor será R$ %.2f", comissao);
				}
			}	
			
		}
		
	}
	
	
	return 0;
}


