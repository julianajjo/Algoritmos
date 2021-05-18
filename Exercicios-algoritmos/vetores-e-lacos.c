/******************************************************************************
2-Crie dois vetores de 10 posições de números inteiros, colete os valores através
das iterações de um laço, e outro laço armazene no segundo vetor os valores em 
ordem inversa do índice.(1,00)

*******************************************************************************/

#include <stdio.h>

int main()
{
    int vetorA[10];
    int vetorB[10];
    int x;
    
    for(x=0; x<=9; x++){
        printf("Informe um número inteiro: ");
        scanf("%i", &vetorA[x]);
    }
    
    
    for(x=9; x>=0; x--){
       vetorB[x] = vetorA[x]; 
       printf("vetorB[%i]=%i \n", x, vetorB[x]);
    }

    return 0;
}

