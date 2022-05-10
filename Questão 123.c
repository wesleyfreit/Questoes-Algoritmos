/* 123.	Escreva um programa que leia dois números inteiros M e N e calcule os N primeiros números primos 
maiores ou iguais a M. */

#include <stdio.h>

void main()
{
    int m, n;
    printf("Insira dois numeros inteiros M e N: ");
    scanf("%d%d", &m, &n);

    int cont = 1;
    int divisor = 1;
    int contador = 0;

    printf("\nOs %d primeiros numeros primos maiores ou iguais que %d sao: \n", n, m);

    while (cont <= n)
    {

        while (divisor <= m)
        {

            if (m % divisor == 0)
            {
                contador++;
            }
            divisor++;
        }
        if (contador == 2)
        {
            printf(" %d ", m);
            divisor = 1;
            contador = 0;
            m++;
            cont++;
        }
        else
        {
            divisor = 1;
            contador = 0;
            m++;
        }
    }
}