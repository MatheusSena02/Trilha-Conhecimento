# Strings (%s)
*Strings na linguagem praticamente se configuram como vetores de **char**, tratam-se de dados armazenados em texto, em que o tamanho da string se refere ao tamanho máximo das palavras que podem ser armazenadas*

**char string[4] = Tem capacidade para comportar palavras com 4 letras**

*estrutura da string na memória*
0|1|2|3|4
---|---|---|---|---       
O|L|Á|!|\0


* Sintaxe Geral :
```
scanf("%s", nome_da_string)
```
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
*Estrutura para impressão* :
0|1|2|4|5
---|---|---|---|---
T|e|s|t|\0

**fgerts** : Lê o conteúdo do arquivo até a próxima quebra de linha e o grava em um char array. Um \0 caractere de terminação nulo é anexado ao final do conteúdo. O indicador de posição é movido para o próximo caractere não lido no arquivo, ou seja, os espaços inseridos serão lidos no programa

**sizeof(nome_string)** : Retorna o tamanho total do array em bytes.

**stdin** : Dispositivo de entrada padrão(teclado)



