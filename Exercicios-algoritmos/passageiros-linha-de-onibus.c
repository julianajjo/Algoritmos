/******************************************************************************

4-Faça um programa que controle e armazene em um vetor o número de passageiros 
de uma linha de ônibus hora a hora, ao final do dia exiba a média de passageiros,
menor e maior quantidade por hora  (1,5)

*******************************************************************************/
#include <stdio.h>

int main()
{
    int passageiros[24];
	int x, menor, maior;
	float media=0;
	
	for(x=0; x<24; x++){
		printf("Informe a quantidade de passageiros por hora: ");
		scanf("%i", &passageiros[x]);
	}
	for(x=0; x<20; x++){
		media = media + passageiros[x];
		if(x==0){
			menor = passageiros[0];
			maior = passageiros[0];	
		} else {
			if(passageiros[x] < menor){
				menor = passageiros[x];
			}	
			if(passageiros[x]>maior){
				maior = passageiros[x];
			}
		}
	}
	media = media / 24;
	printf("Menor quantidade de passageiros por hora = %i\n Maior quantidade de passageiros por hora = %i\n Média de passageiros por hora = %f", menor, maior, media);

    return 0;
}

