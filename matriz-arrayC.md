# Matrizes e Arrays Multidimensionais 
*Matrizes funcionam como vetores, em que existe a possibilidade de acessar vários dados a partir do índice. Porém, diferentemente dos vetores, que são unidimencionais, as matrizes possuem várias dimensões, pelo menos duas, sendo bidimencionais*

* Sintaxe de Declaração : **tipo nome_variavel[linhas][colunas]**

* Estrutura da Matriz :
  
int matriz[2][3] = { {1,3,5} , {5,1,1} };
Column 0|Column 1|Column 2|Matrizes
:---:|:---:|:---:|---:
1|3|5|**Row 0**
5|1|1|**Row 1**
<br>

# Código para teste 
*Insira esse código no seu IDE (Ambiente de Desenvolvimento Integrado preferido e teste o código para observar na prática como funciona a manipulação de matrizes*

```
#include <stdio.h>

int main()
{
    int matriz[2][3];
    for(int n = 0; n < 3; n++) //loop inicial : referente ao controle do número de linhas da matriz
    {   
        //após a incrementação, o loop for é novamente executado com a variável i sendo declada como valor = 0
        for(int i = 0; i < 3; i++) //segundo loop : refernte ao controle do número de colunas
        {
            printf("Janela de inserção : ");
            scanf("%d", &matriz[n][i]);
            printf("Resultado da matriz : matriz[%d][%d] = %d\n", n, i, matriz[n][i]);
            //após o loop for ser satisfeito, a variável com valor de n "saí" desse lop
        }
        //ocorre a incrementação da variável n : n++
    }
}
```
