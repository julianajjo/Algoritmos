/******************************************************************************

Reutilizando o algoritmo do caixa eletrônico, implemente um laço faça enquanto 
que verifique se o usuário deseja continuar, caso a variável coletada for igual 
1 reinicie o laço, mantendo o valor do saldo.


*******************************************************************************/

#include <stdio.h>

int main()
{
    int op;
	float saldo=5000, saque, deposito, saldoFinal;
	
	
	do{
	    printf("Escolha a operação que deseja realizar: 1-Saldo 2-Saque 3-Depósito \n");
    	scanf("%i", &op);
    	
    	switch(op){
    		case 1:{
    			printf("O saldo é %f", saldo);
    			break;
    		}
    		case 2:{
    		    printf("Digite o valor que deseja realizar o saque: ");
    		    scanf("%f", &saque);
    		    if(saldo >= saque){
    		        saldoFinal = saldo - saque;
    		        printf("Você sacou R$ %f, seu saldo atualizado é R$ %f", saque, saldoFinal);
    		    } else {
    		        printf("Saldo Insuficiente!");
    		    }
    			break;
    		}
    		case 3:{
    			printf("Digite o valor do depósito: ");
    		    scanf("%f", &deposito);
    		    saldoFinal = saldo + deposito;
    		    printf("Você depositou R$ %f, seu saldo atualizado é R$ %f", deposito, saldoFinal);
    			break;
    		}
    		default:{
    			printf("Opção inválida! Digite uma opção válida!");
    			break;
    		}
    	}
    	
    	printf("Deseja continuar? 1-Sim 0-Não");
    	scanf("%i", &op);
	} while (op == 1);
    return 0;
}






