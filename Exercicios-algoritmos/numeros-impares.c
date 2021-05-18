/******************************************************************************

Elabore um algoritmo que gere e escreva os números ímpares entre 100 e 200.


*******************************************************************************/

#include <stdio.h>

int main()
{
    int x;
    
    for(x=101;x<200;x+=2){
        printf("%i ", x);
    }

    return 0;
}

