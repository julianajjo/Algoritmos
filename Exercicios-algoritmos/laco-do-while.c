/******************************************************************************

Dado o algoritmo abaixo escrito em C : 
int i, a, b; for(i=0; i<20; i++) 
{    scanf("%d",&a);    
scanf("%d",&b);    
r = a + b;   
printf("%d\n", r); }

Reescreva com o laço faça enquanto (do while)

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, a, b, r;
    
    i = 0;
    
    do{
        scanf("%d",&a);    
        scanf("%d",&b);
        
        i = i +1;
    }while(i<20);
        r = a + b;    
       printf("%d\n", r); 
    
    return 0;
}

