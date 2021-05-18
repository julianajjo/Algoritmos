/******************************************************************************

 
Crie um  algoritmo que informe dois valores reais, valor em reais do litro da 
gasolina e valor em reais do litro do álcool,  calcule os 70% do valor da gasolina 
para definir na tela qual combustível e o mais vantajoso, sabendo que o valor 
do álcool para ser mais vantajoso deve ser menor que 70% do valor da gasolina.
 

*******************************************************************************/
#include <stdio.h>

int main()
{
    //declaração de variáveis
    float gasolina, alcool, gasolinaPorc;
    
    //entrada
    printf("Informe o valor da gasolina:");
	scanf("%f", &gasolina);
	printf("Informe o valor do álcool:");
	scanf("%f", &alcool);
	
	//processamento
	gasolinaPorc = gasolina*0.7;
    
    //seleção
    if(alcool<gasolinaPorc)
    {
        printf("O álcool é o combustível mais vantajoso.");
    }
    else
    {
        printf("A gasolina é o combustivel mais vantajoso.");
    }
    

    return 0;
}


