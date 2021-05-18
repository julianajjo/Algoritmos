/******************************************************************************

1-Faça um programa que receba 30 números inteiros e verifique qual a maior sequência 
de números múltiplos de três (1,00)


*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero, x, resto3, sequencia=0, maiorSeq=0;
    
    for(x=0; x<8; x++){
        printf("Informe um número inteiro: ");
        scanf("%i", &numero);
        
        resto3 = numero % 3;
        
        if(resto3==0){
            sequencia++;
            if(sequencia > maiorSeq){
                maiorSeq = sequencia;
                printf("\n Maior sequencia atualizada:%i \n", maiorSeq);
            }
        }else{
            sequencia = 0;
        }
    }
    
    printf("A maior sequência é = %i", maiorSeq);

    return 0;
}
