/* 113.	Escreva um programa que leia dois números inteiros M e N e imprima todos os números primos existentes no intervalo [M, N]. */

#include <stdio.h>

void main()
{
    int n, m;
    printf("Insira dois numeros inteiros positivos: ");
    scanf("%d%d", &n, &m);

    if (n < 1)
    {
        printf("\nNumero invalido, tente novamente.");
    }
    else
    {

        int cont = 0;
        int divisor = 1;

        printf("\nOs primos entre %d e %d sao: \n", n, m);
        while (n <= m)
        {
            while (divisor <= n)
            {
                if (n % divisor == 0)
                {
                    cont++;
                }
                divisor++;
            }
            if (cont == 2)
            {
                printf(" %d ", n);
                n++;
                cont = 0;
                divisor = 1;
            }
            else
            {
                n++;
                cont = 0;
                divisor = 1;
            }
        }
    }
}
