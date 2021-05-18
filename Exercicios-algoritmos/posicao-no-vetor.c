/******************************************************************************

3-Preencher um vetor com números inteiros 20 posições; solicitar que o usuário 
informe um número. Pesquisar se esse número existe no vetor. Se existir,imprimir 
em qual posição do vetor e qual a ordem foi digitado. Se não existir, 
imprimir MSG que não existe. (1,0)

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[20];
    int numero, x, pesquisa;
    
    for (x=0; x<20; x++){
        printf("Digite um número inteiro [%i]: ", x);
        scanf("%i", &vetor[x]);
    }
    
    printf("\nDigite o valor que deseja pesquisar: ");
    scanf("%i", &numero);
    
    for (x=0; x<20; x++){
        if (vetor[x] == numero){
            printf("o número %i encontra-se na posição %i ", numero, x);
            pesquisa = 1;
            if(pesquisa!=1){
                printf("\n O número não existe!");
            }
        }
    }

    return 0;
}

