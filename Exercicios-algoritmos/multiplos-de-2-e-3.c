/******************************************************************************

Faça um laço “faça até” com 10 interações, verifique quantas vezes números 
múltiplos de 2 e de 3 são informados


*******************************************************************************/

#include <stdio.h>

int main()
{
  int num, x, multDois, multTres;
  
  for(x=0;x<10;x++){
    printf("Digite um número inteiro:");
    scanf("%i", &num);
    
    if(num%2==0 && num%3==0){
        multDois++;
        multTres++;
    } else if (num%2==0){
        multDois++;
    } else if (num%3==0){
        multTres++;
    }
    
  }
  
  printf("Temos %i múltiplos de dois nessa sequência\nTemos %i múltiplos de três nessa sequência", multDois, multTres);

    return 0;
}

