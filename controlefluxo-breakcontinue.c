#include <stdio.h>

int main()
{
    int i;
    printf("Impressão dos valores com o comando break no loop\n");
    for(i = 1; i <= 10; i++)
    {
        printf("%d ", i);
        if( i == 5)
        {
            break;
        }
    }
    
    int a;
    printf("\nImpressão dos valores com o comando continue no loop\n");
    for(a = 1; a <= 10; a++)
    {
        if(a == 5)
        {
            continue;
        }
        printf("%d ", a);
    }
}