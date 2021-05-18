/******************************************************************************

Leia a velocidade máxima permitida em uma avenida e a velocidade com que o 
motorista estava dirigindo nela. Calcule e mostre a multa que uma pessoa vai 
receber, sabendo que são pagos: 
- R$ 50 reais se o motorista ultrapassar em até 10km/h a velocidade permitida; 
- R$ 100 reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade permitida; 
- R$ 200 reais, se estiver acima de 31km/h da velocidade permitida.


*******************************************************************************/
#include <stdio.h>

int main()
{
   int velocidade, velocidadeMax, velocidadeAcima;
   
    printf("Digite a velocidade máxima da avenida: ");
    scanf("%i", &velocidadeMax);
    
    printf("Digite a velocidade do veículo: ");
    scanf("%i", &velocidade);
   
   if (velocidade > velocidadeMax){
        
        velocidadeAcima = velocidade - velocidadeMax;
        
        if (velocidadeAcima <= 10){
            printf("Multa de R$ 50,00 por ultrapassar a velocidade máxima permitida!");
            
        }else if (velocidadeAcima > 10 && velocidadeAcima <=30){
            printf("Multa de R$ 100,00 por ultrapassar a velocidade máxima permitida!");
            
        }else if (velocidadeAcima > 30){
            printf("Multa de R$ 200,00 por ultrapassar a velocidade máxima permitida.");
        }
        
    }else {
        printf("O veículo está dentro da velocidade máxima permitida!");
    }

    return 0;
}

