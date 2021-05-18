/******************************************************************************

 Faça um algoritmo que dado valor inteiro informado, calcule e exiba a 
 tabuada do número de 1 a 10.


*******************************************************************************/
#include <stdio.h>

int main()
{
    int x, tab=0;
    
    printf("Digite a tabuada que gostaria de calcular: ");
    scanf("%i", &tab);
		
	for(x=1; x<=10; x++){
		    printf("%i x %i = %i\n", x, tab, x * tab);
	}
	
    return 0;
}
