/******************************************************************************

Faça um programa em C que verifique se o ano é bissexto ou não. 
Se ele não for bissexto, indique quanto tempo falta para o próximo bissexto.
Para ser bissexto, o ano deve ser:
- Divisível por 4. Sendo assim, a divisão é exata com o resto igual a zero;
- Não pode ser divisível por 100. Com isso, a divisão não é exata, ou seja, 
deixa resto diferente de zero;
- Pode ser que seja divisível por 400.


*******************************************************************************/
#include <stdio.h>

int main()
{
  int ano, resto;
   
    printf("Digite o ano que você deseja descobrir se é bissexto:");
    scanf("%i", &ano);

    if (ano % 400 == 0) {
		printf("O ano É bissexto!");		
	}
	else if ((ano % 4 == 0) && (ano % 100 != 0)){
		printf("O ano É bissexto!");		
	}
	else if(ano % 4 != 0){ 
	    
	    resto = ano % 4;
	    
	    if (resto ==3){
	        printf("Falta 1 ano para o próximo ano bissexto ");
	   	}
	    else if (resto == 2) {
	        printf("Faltam 2 anos para o próximo ano bissexto ");
	    }
	    else if (resto == 1) {
	        printf("Faltam 3 anos para o próximo ano bissexto ");
    	}
	}
 

    return 0;
}

