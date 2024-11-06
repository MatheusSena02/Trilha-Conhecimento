# Functions
*São blocos de códigos que são executados no momento em que são chamados. As funções funcionam como "subprogramas", em que ao serem chamadas, as funções podem executar comandos específicos, evitando que seja necessário reescrever trechos inteiros de código em outro escopo do código*
<br>

* Sintaxe de definição :
```
#include <stdio.h>

tipo_dados nome_funcao(parâmetro)
{
  <bloco de comando> 
}

int main()
{
  return 0;
}
```
<br>

* Linha da Função :

tipo_dados|nome_funcao|parâmetro|Estrutura
---|---|---|---
Tipo de dado que a função retorna|Nome específico daquela função|Tipo de dados + Nome do Parâmetro|void myFunction (int x, int y)
<br>

* Chamada de Funções

```
#include <stdio.h>

nome_funcao();

int main()
{
  return 0;
}

tipo_dados nome_funcao(parâmetro)
{
  <bloco de comando> 
}
```
<br>

**Para função ser executada, é necessário chamar a função no começo do programa. Indicando o programa que existe uma função declarada no programa, aguardando para ser lida**
