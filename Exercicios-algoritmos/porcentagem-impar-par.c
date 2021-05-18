/******************************************************************************

Faça um programa em C que recebe vetores, calcule a média, qual o maior e menor 
número informado.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    float num[20];
    float media=0, maior, menor;
    int x=0;
    
    for(x=0; x<20; x++){
        printf("Informe um número: ");
        scanf("%f", &num[x]);
        media = media + num[x];
    }
    
    for(x=0; x<20; x++){
       if(x==1){
            maior = num[x];
            menor = num[x];
        }else{    
            if(num[x]>maior){
                maior = num[x];
            }else{
                if(num[x]<menor){
                    menor = num[x];
                }
            }
        }
    }
    media = media / 20;
    printf("A média é %2.f\nO menor número é %2.f\nO maior número é %2.f", media, menor, maior);

    return 0;
}

