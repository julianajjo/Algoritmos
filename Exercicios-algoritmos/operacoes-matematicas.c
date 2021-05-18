/******************************************************************************

Informe dois números reais e um número inteiro que represente a operação matemática 
a ser realizada (1-soma, 2-subtração, 3- multiplicação, 4-divisão) utilize o 
comando seleção aninhado e exiba o resultado da operação matemática escolhida.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float numero1,numero2,resultado;
	int operacao;
	
	printf("\nEscolha qual operação você deseja fazer: 1-Soma 2-Subtração 3-Multiplicação 4-Divisão\n");
	scanf("%i",&operacao);
	
	printf("Digite um número: ");
	scanf("%f",&numero1);
	
	printf("Digite mais um número: ");
	scanf("%f",&numero2);
	
	if(operacao == 1 || operacao == 2 || operacao == 3 || operacao == 4){
	    if (operacao == 1){
	        resultado = numero1 + numero2;
            printf("O resultado da soma é: %.0f", resultado);
		
	    }if (operacao == 2){
	        resultado = numero1 - numero2;
            printf("O resultado da subtração é: %.0f", resultado);
		
	    }if (operacao == 3){
	        resultado = numero1 * numero2;
            printf("O resultado da multiplicação é: %.2f", resultado);
		
	    }if (operacao == 4){
	        resultado = numero1 / numero2;
    	    if(numero2==0){
			    printf("Não é possível dividir um número por zero!");
		    }else{
			    resultado=numero1/numero2;
			    printf("A divisão é: %.2f", resultado);
		    }
	    }
	}
	else{
		printf("Digite uma opção válida!");
	}
    return 0;
}

