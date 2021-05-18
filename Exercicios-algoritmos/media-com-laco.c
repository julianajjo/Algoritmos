/******************************************************************************

Faça um algoritmo que implemente um laço que leia X números inteiros e 
identifique qual o menor o maior e a média, quando o número informado for zero, 
interrompa o laço e exiba os valores.



*******************************************************************************/
#include <stdio.h>

int main()
{
    float media=0;
    int num=1, qtd=0, acum=0, maior, menor;
    
    while(num!=0){
        printf("Informe um número inteiro: ");
        scanf("%i", &num);
        media = media + num;
        
        if(num==0){
            qtd = qtd-1;
            break;
        }else{
            qtd = qtd + 1;
        }    
        if(qtd==1){
            maior = num;
            menor = num;
        }else{    
            if(num>maior){
                maior = num;
            }else{
                if(num<menor){
                    menor = num;
                }
            }
        }
    }
    
    media = media / qtd;
    printf("A média é %f\nO menor número é %i\nO maior número é %i", media, menor, maior);


    return 0;
}


