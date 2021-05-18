/******************************************************************************

Leia o salário de um trabalhador e o valor da prestação de um empréstimo. 
Se a prestação for maior que 20% do salário imprima:  
Empréstimo não concedido, caso contrário imprima:  Empréstimo concedido.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //declaração de variáveis
    float salario, prestacao, emprestimoPorc;
    
    //entrada
    printf("Informe o valor do salário:");
    scanf("%f", &salario);
	printf("Informe o valor da prestação:");
	scanf("%f", &prestacao);

    
    //processamento
    emprestimoPorc = salario*0.2; 
    
    //seleção
     if(prestacao>emprestimoPorc)
  	 {
   	printf("Empréstimo não concedido.");
   	}
 	else
   	{
        printf("Empréstimo concedido.");
       }

    

    return 0;
}

