/******************************************************************************

Faça um algoritmo que conte de 1 a 100 e a cada múltiplo de 3 e 5 simultaneamente 
emita uma mensagem:  “Múltiplo de 3 e 5”.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x, multi;
    
    for(x=1; x<=100; x++){
        if(x%3==0 && x%5==0){
            printf("Número %i é múltiplo de 3 e 5\n", x);
        }
    }

    return 0;
}

