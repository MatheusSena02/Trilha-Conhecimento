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
fgets(nome_string, sizeof(nome_string), stdin)
```
**fgerts** : Lê o conteúdo do arquivo até a próxima quebra de linha e o grava em um char array. Um \0 caractere de terminação nulo é anexado ao final do conteúdo. O indicador de posição é movido para o próximo caractere não lido no arquivo, ou seja, os espaços inseridos serão lidos no programa

**sizeof(noms_string)** : Retorna o tamanho total do array em bytes.

**stdin** : Dispositivo de entrada padrão(teclado)



