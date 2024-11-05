# Structs (*typedef*)
*Tratam-se de estrutura de dados, como uma coleção de variáveis, que permitem agrupar dados de diferentes tipagens, denominados dados compostos dentro de uma mesma variável* 

* Sintaxe de Definição : 
```
struct nome_tipo
{
  tipo nome_variável;
  tipo nome_variável;
}
```
<br>

* Comando *typedef* : Maneira de otimizar a declaração de uma variável struct, renomeando o identificador
```
typedef struct nome_tipo novo_nometipo;  //nome_tipo é o mesmo nome atribuído na declaração da struct
```
<br>

* Declaração Struct :
```
struct nome_variável nome_variável;  //declaração sem utilizar o typedef

novo_nometipo nome_variável;  //declaração utilizando o typedef 
```
<br> 

* Acessando os membros de uma struct
```
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
```
<br>

* Combinando Vetores e Structs :

```
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
    dados_pessoais n[3];  //serão criados três espaços no vetor contendo a struct, ou seja, os campos da struct estão armazenados nesses três espaços
    // atribuindo valores as membros da estrutura
    for(int i = 0; i < 3; i++)
    {
        printf("Idade : ");
        scanf("%d", &n[i].idade);
        printf("Peso : ");
        scanf("%d", &n[i].peso);
        printf("Nome : ");
        scanf("%s", n[i].nome);
        
    }
    for(int a = 0; a < 3; a++)
    {
    //impressão de cada membro da estrutura
    printf("Nome : %s\n", n[a].nome);
    printf("Idade : %d\n", n[a].idade);
    printf("Peso : %d\n", n[a].peso);
    }
}
```

  
