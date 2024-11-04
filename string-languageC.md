# Strings (%s)
*Strings na linguagem praticamente se configuram como vetores de **char**, tratam-se de dados armazenados em texto, em que o tamanho da string se refere ao tamanho máximo das palavras que podem ser armazenadas*

**char string[4] = Tem capacidade para comportar palavras com 4 letras**

*estrutura da string na memória*
0|1|2|3|4
---|---|---|---|---       
O|L|Á|!|\0
<br> 

* Sintaxe Geral :
```
scanf("%s", nome_da_string)
```
<br>

* Sintaxe Aprimorada :
```
#include <stdio.h>

int main()
{
    char impressao[5];
    fgets(impressao, sizeof(impressao), stdin);
    printf("%s", impressao);

Entrada : Teste
Saída : Test
}
```

**É necessário reservar um espaço para o caractere \0 no tamanho da array**

<br>

*Estrutura para impressão* :
0|1|2|4|5
---|---|---|---|---
T|e|s|t|\0
<br>

**fgets** : Lê o conteúdo do arquivo até a próxima quebra de linha e o grava em um char array. Um \0 caractere de terminação nulo é anexado ao final do conteúdo. O indicador de posição é movido para o próximo caractere não lido no arquivo, ou seja, a leitura continua mesmo que existam espaços

**sizeof(nome_string)** : Retorna o tamanho total do array em bytes.

**stdin** : Dispositivo de entrada padrão(teclado)

<br>

* Função **puts** : Realiza a impressão da string e somente de strings, não admitindo outro tipo de variável
  <br>
  
```
#include <stdio.h>

int main()
{
    char impressao[5];
    fgets(impressao, sizeof(impressao), stdin);
    puts(impressao);
}
```
<br>

* Função **fflush(stdin)** : Evita a quebra do código em caso de repetidas chamadas de entrada para string, evitando que uma seja executada e outra não, por conta do lixo de memória acumulado no buffer
  
```
#include <stdio.h>

int main()
{
    char impressao1[7];
    fgets(impressao1, sizeof(impressao1), stdin);
    fflush(stdin); //declaração logo após a função de entrada
    //o buffer do fluxo de dados foi limpo
    puts(impressao1);
    //permite que novos dados sejam inseridos

    char impressao2[7];
    fflush(stdin); //declaração logo após a função de entrada 
    fgets(impressao2, sizeof(impressao2), stdin);
    printf("%s", impressao2);
}

```

# string.h

* **strcpy(destino, origem)** = Utilizada para alterar o conteúdo de uma string ou realizar uma atribuição
* **strcat(destino, origem)** = Utilizada para realizar concatenações das strings, unindo as strings
* **strlen(string)** = Utilizado para saber o comprimento daquela string
* **strcmp(string1, string2)** = Realiza a comparação entre duas strings

*strcmp(string1, string2) == 0 : As duas strings são iguais, exatas*

*strcmp(string1, string2) < 0 : Caso o caractere da string1 tenha valor menor que o da string2*

*strcmp(string1, string2) < 0 : Caso o caractere da string2 tenha valor menor que o da string1*

* **locale.h** : Biblioteca que permite incluir acentos nas strings

*setlocale(LC_ALL, "Portuguese") : Função que deve ser chamada no **main** para invocar as funcionalidades da biblioteca, especificando a língua da biblioteca a ser utilizada* 

