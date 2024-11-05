#include <stdio.h>

struct registro
{
    int idade;
    int peso;
    char nome[20];
};

typedef struct registro dados_pessoais;

int main()
{
    // criando variável com struct
    dados_pessoais n; 
    // atribuindo valores as membros da estrutura
    printf("Idade : ");
    scanf("%d", &n.idade);
    printf("Peso : ");
    scanf("%d", &n.peso);
    printf("Nome : ");
    scanf("%s", n.nome);
    //impressão de cada membro da estrutura
    printf("Nome : %s\n", n.nome);
    printf("Idade : %d\n", n.idade);
    printf("Peso : %d\n", n.peso);
}

