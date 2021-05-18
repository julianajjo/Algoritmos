/******************************************************************************

Faça um laço que calcule a média de todos os números informados, 
a condição de término do laço é quando for digitado ZERO.


*******************************************************************************/
#include <stdio.h>

int main()
{
    float media=0, num=1;
    int qtd=0, acum=0;
    
    while(num!=0){
        printf("Informe um número: ");
        scanf("%f", &num);
        media = media + num;
        
        if(num==0){
            qtd = qtd - 1;
            break;
        }else{
            qtd = qtd + 1;
        }    
    }
    media = media / qtd;
    printf("A média é %f\n", media);

    return 0;
}

