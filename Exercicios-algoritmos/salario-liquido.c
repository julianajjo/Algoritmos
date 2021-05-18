/******************************************************************************

Desenvolva um programa em C do problema a seguir: 
Utilizando comandos de seleção aninhados, faça o cálculo do salário líquido 
através de um salário bruto informado seguindo as devidas regras:
- Primeiro deduzir o INSS de 11% do salário bruto antes de verificar a faixa do IR
- Faixa de R$ 1,00 a R$ 1020,00 Isento de IR
- Faixa de R$ 1020,01 a R$ 2.500,00 7% de taxa de IR
- Faixa de R$ 2500,01 a R$ 3.800,00 15% de taxa de IR
- Faixa de R$ 3800,01 e acima,  27.5% de taxa de IR
- Salário Líquido = (Salário bruto – INSS) – IR
 


*******************************************************************************/
#include <stdio.h>

int main()
{
    float salLiquido, salBruto, salDeduzido, INSS, impRenda;
    
	printf("Informe o salário bruto do funcionário:");
	scanf("%f", &salBruto);
	
	salDeduzido = salBruto - (salBruto * 0.11);
	INSS = salBruto * 0.11;
	
	if(salDeduzido>=1.00 && salDeduzido<=1020.00){
	    printf("O salário bruto é R$ %.2f\n", salBruto);
	    printf("O valor do INSS é R$ %.2f\n", INSS);
		printf("Funcionário isento de IR");
	} 
	else {
		if(salDeduzido>=1020.01 && salDeduzido<=2500.00){
		    impRenda = salDeduzido * 0.07;
		    salLiquido = salDeduzido - impRenda;
		    printf("O salário bruto é R$ %.2f\n", salBruto);
			printf("O valor do INSS é R$ %.2f\n", INSS);
			printf("A taxa de imposto de renda será de 7%%, R$ %.2f\n", impRenda);
			printf("O salário líquido será R$ %.2f", salLiquido);
		}
		else{
			if(salDeduzido>2500.01 && salDeduzido<=3800.00){
				impRenda = salDeduzido * 0.15;
		        salLiquido = salDeduzido - impRenda;
		        printf("O salário bruto é R$ %.2f\n", salBruto);
		        printf("O valor do INSS é R$ %.2f\n", INSS);
		    	printf("A taxa de imposto de renda será de 15%%, R$ %.2f\n", impRenda);
			    printf("O salário líquido será R$ %.2f", salLiquido);
			}
			else {
    			    impRenda = salDeduzido * 0.275;
		            salLiquido = salDeduzido - impRenda;
		            printf("O salário bruto é R$ %.2f\n", salBruto);
		            printf("O valor do INSS é R$ %.2f\n", INSS);
		            printf("A taxa de imposto de renda será de 27.5%%, R$ %.2f\n", impRenda);
			        printf("O salário líquido será R$ %.2f", salLiquido); 

			}	
			
		}
		
	}
	
	
	return 0;
}


