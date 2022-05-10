/* 100.	Escreva um programa que leia um número inteiro positivo N e imprima os N primeiros números pares positivos.  */

#include <stdio.h>

void main()
{
    int n, k;
    printf("Insira um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("\nInsira um numero positivo");
    }
    else
    {
        int x = n;
        n = 0;

        printf("\nA lista ficara assim: ");

        for (k = 1; k <= x; k++)
        {
            n = n + 2;
            printf(" %d ", n);
        }
    }
}
