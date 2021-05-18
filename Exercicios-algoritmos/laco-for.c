/******************************************************************************

Dado o algoritmo abaixo escrito em C :
int x = 10; while(x>0) {   prinf("%d",x);   x--; }

Reescreva com o laço faça até (for)


*******************************************************************************/
#include <stdio.h>

int main()
{
    int x;
    
    for(x=10; x>0; x--){
        printf("%d\n",x);  
    }

    return 0;
}

