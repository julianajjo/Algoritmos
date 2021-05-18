/******************************************************************************

A empresa XPTO concedeu um bônus de 20% do valor do salário a todos os funcionários 
com tempo de trabalho na empresa igual ou superior a 5 anos e de 10% aos demais.
Faça um programa em C que receba o salário e o tempo de serviço de um funcionário, 
calcule e mostre o valor do bônus recebido por ele.


*******************************************************************************/
#include <stdio.h>

int main()
{
    float salario, bonus, salarioBonificado;
    int tempoDeServ;
    
    printf("Digite o salário do funcionário:");
    scanf("%f", &salario);
    
    printf("Digite o tempo de serviço do funcionário (em anos):");
    scanf("%i", &tempoDeServ);
    
    if(tempoDeServ >= 5){
        bonus = salario * 0.2;
        salarioBonificado = salario + bonus;
        printf("O bônus do funcionário é de 20%%: %.2f", bonus);
        "\n";
        printf("O salário ajustado com o bônus é: %.2f", salarioBonificado);
    } else {
        bonus = salario*0.1;
        salarioBonificado = salario + bonus;
        printf("O bônus do funcionário é de 10%%: %.2f", bonus);
        "\n";
        printf("O salário ajustado com o bônus é: %.2f", salarioBonificado);
        
    }
    
    return 0;
}

