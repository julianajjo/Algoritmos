/******************************************************************************

Dado o algoritmo abaixo escrito em C : 
int i, a, b; for(i=0; i<20; i++) 
{    scanf("%d",&a);    
scanf("%d",&b);    
r = a + b;    
printf("%d\n", r); }
Reescreva com o laço enquanto faça (while)


*******************************************************************************/
#include <stdio.h>

int main()
{
   int i, a, b, r;
   
   i = 0;
   
   while(i<20){
       scanf("%d",&a);    
       scanf("%d",&b);    
       if(i>=0){
       r = a + b;    
       printf("%d\n", r); 
       }
       i = i + 1;
   } 
   
    return 0;
}

