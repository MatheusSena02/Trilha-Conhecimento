#include <stdio.h>

void dados(char nome[], int *idade, int *peso) // é necessário utilizar o * para que os dados tratam-se de ponteiros e irão alterar as variáveis diretamente no main
{
    printf("Nome : ");
    scanf("%s", nome);
    printf("Idade : ");
    scanf("%d", idade);
    printf("Peso : ");
    scanf("%d", peso) //scanf declarado sem o & 
}

int main()
{
    char nome[20];
    int anos, kg;
    dados(nome, &anos, &kg); //o & será declarado na chamada da função, como se o scanf estivesse no parâmetro
    printf("Nome : %s\nIdade : %d\nPeso : %d\n", nome, anos, kg);
}
