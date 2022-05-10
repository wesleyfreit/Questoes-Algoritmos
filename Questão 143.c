/* 143.	Escreva um programa que leia dez números inteiros e calcule a diferença entre os dois maiores números
digitados pelo usuário. */

#include <stdio.h>

void main()
{
    int n, k;
    int x = 0;
    int j = 0;
    for (k = 1; k <= 10; k++)
    {
        printf("Insira o Num. %d: ", k);
        scanf("%d", &n);

        if (x == 0)
        {
            x = n;
        }
        if (n > x)
        {
            j = x;
            x = n;
        }
        if (n > j && n < x)
        {
            j = n;
        }
    }
    printf("\nA diferenca entre os dois maiores numeros e: %d - %d = %d\n", x, j, x-j);
}
