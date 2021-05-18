/******************************************************************************
Faça um algoritmo que simule o funcionamento de um caixa eletrônico, onde será 
apresentado uma lista de operações:
1-Saldo
2-Saque
3-Depósito
Ao iniciar o programa determine um valor início para a variável saldo, se o 
cliente escolher a opção 1 mostre o valor do saldo, caso escolha o valor 2 
leia o valor a ser sacado e verifique se existe saldo suficiente, se o saldo 
for maior ou igual , deduza da variável saldo o valor solicitado, caso não haja 
saldo suficiente mostre a mensagem “Saldo Insuficiente”, caso a opção 3 
seja escolhida adicione o valor informado de deposito ao saldo.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int op;
	float saldo, saque, deposito, saldoFinal;
	
	saldo = 5000;
	
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

    return 0;
}

