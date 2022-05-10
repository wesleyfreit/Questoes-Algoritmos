/* 62.	Escreva um programa que leia dois números inteiros M e N e verifique se N é múltiplo de M. */

#include <stdio.h>

void main()
{
    int m, n, k;
    printf("Insira dois numeros inteiros M e N: ");
    scanf("%d%d", &m, &n);
    if (m < n)
    {
        printf("\nM deve ser sempre maior que N.");
    }
    else
    {
        int mult = 0;
        int valor = 0;

        for (k = 1; k <= n; k++)
        {
            mult = n * k;
            if (mult == m)
            {
                printf("\nN e multiplo de M pois %d x %d = %d", n, k, mult);
                valor = mult;
            }
        }
        if( valor != m)
        {
            printf("\nN nao e multiplo de M.");
        }

    }
}
