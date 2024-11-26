#include <stdio.h>
#define TAMANHO 9

int main()
{
    int vetor[TAMANHO], x;
    for(int i = 0; i < TAMANHO; i++)
    {
        scanf("%d", &vetor[i]);    
    }
    for(int j = 0; j < TAMANHO; j++)
    {
        if(j+1 == TAMANHO)
        {
            printf("%d", vetor[j]);
            break;
        }else if(vetor[j] > vetor[j+1])
        {
            x = vetor[j];
            vetor[j] = vetor[j+1];
            vetor[j+1] = x;
        }
        printf("%d ", vetor[j]);
    }
}
