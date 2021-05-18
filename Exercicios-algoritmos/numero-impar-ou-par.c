/******************************************************************************

Faça um programa em C que receba um valor inteiro e retorne se o mesmo 
é um número ímpar ou par.

*******************************************************************************/

#include <stdio.h>

int main()
{
    //declaracao das variaveis
    int numero;
    
    //entrada de dados
    printf("Informe um número inteiro:");
    scanf("%i", &numero);
    
    //processamento
    if(numero%2==0)
    {
        printf("O número informado é par.");
    }
    else
    {
        printf("O número informado é ímpar.");
    }

    return 0;
}

