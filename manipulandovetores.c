#include <stdio.h>

int main()
{
    //primeira forma de declaração da array
    int a[5];
    a[0] = 5;
    a[1] = 10;
    a[2] = 52;
    a[3] = 21;
    a[4] = 12;
    media = (notas[0] + notas[1] + notas[2] + notas[3])/4;
    printf("Valor da média : %.1f", media);
    
    //segunda forma de declaração de array (clean code)
    int a[5] = {5,10,52,21,12};
    media = (notas[0] + notas[1] + notas[2] + notas[3])/4;
    printf("Valor da média : %.1f", media);
    
    //cálculo mais dinâmico e uso de vetores no loop 
    int valor[5] = {5,10,15,20,30}, contador, soma;
    float media;
    for(contador = 0; contador < 5; contador++)
    {
        soma += valor[contador;]
    }
    media = soma/5;
    printf("Valor da soma e da média : %d e %f", soma, media);
}
