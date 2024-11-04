#include <stdio.h>

int main()
{
    char impressao1[5];
    scanf("%s", impressao1);
    printf("%s", impressao1);
    //entrada : He llo saída : He
    
    char impressao2[5];
    fgets(impressao2, sizeof(impressao2), stdin);
    printf("%s", impressao2);
    //entrada : He llo saída : He l 
}