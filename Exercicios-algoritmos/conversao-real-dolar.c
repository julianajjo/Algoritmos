/******************************************************************************

Faça um programa em C que receba um valor em dólar e o converta em reais.
Sendo o valor em reais supostamente fixo em R$5,50.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //declaração de variáveis
    float dolar;
    float reais;
    
    //entrada de dados
    printf("Informe o valor em dólares:");
    scanf("%f", &dolar);
    
    //processamento
    reais = dolar * 5.5;
    
    //saída
    printf("O valor em reais é %f", reais);
    

    return 0;
}


