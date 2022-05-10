/* 147.	Escreva um programa que imprima todos os palíndromos existentes no
intervalo [1000, 9999]. Um número é palíndromo quando o seu valor lido da
esquerda para a direita é idêntico ao valor lido da direita para a esquerda.
Exemplos: 1001, 2002, 1221, 8888.   */

#include <stdio.h>

void main()
{
    int k;
    for (k = 1000; k <= 9999; k++)
    {
        int div1 = k / 1000;
        int rest1 = k % 1000;
        int div2 = rest1 / 100;
        int rest2 = rest1 % 100;
        int div3 = rest2 / 10;
        int div4 = rest2 % 10;

        if (div1 == div4 && div2 == div3)
        {
            printf("\n%d %d %d %d  ", div1, div2, div3, div4);
        }
    }
}