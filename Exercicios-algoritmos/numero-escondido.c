/******************************************************************************

Crie um algoritmo onde será informado um valor inteiro inicial, e um laço o usuário 
deverá informar outro número inteiro, o programa deverá responder se o número atual 
é menor ou maior que o número inicial informado, o laço somente será interrompido 
quando o número atual for igual ao número anterior informado. Exiba quantas 
tentativas foram necessárias para que o número fosse descoberto.


*******************************************************************************/
#include <stdio.h>

int main()
{
   int inicial=7, atual, cont;
   
   do{
       printf("Digite um número inteiro: ");
       scanf("%i", &atual);
       
       if(inicial!=atual){
           if(atual<inicial){
               printf("O número informado é menor que o número escondido!\n");
               
            }else{
                  printf("O número informado é maior que o número escondido!\n");
                }
        }
        
        cont++;
    }while(atual!=inicial);
    
    printf("Você acertou!\nNúmero de tentativas: %i", cont);

    return 0;
}

