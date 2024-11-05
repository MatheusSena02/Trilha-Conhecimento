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