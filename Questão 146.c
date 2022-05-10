/* 146.	Escreva um programa que leia dois números inteiros M e N e calcule os valores de M div N e M mod N.
Os valores devem ser calculados sem o uso dos operadores div e mod. */

#include <stdio.h>

void main()
{
    int n, m;
    printf("Insira um numero inteiro N: ");
    scanf("%d", &n);
    printf("Insira um numero inteiro M: ");
    scanf("%d", &m);

    int cont = 0;
    int mod = 0;

    while (m > 0)
    {
        if (m >= n)
        {
            m = m - n;
            cont++;
        }
        else
        {
            mod = m;
            break;
        }
    }

    printf("\nM DIV N = %d", cont);
    printf("\nM MOD N = %d", mod);
}
