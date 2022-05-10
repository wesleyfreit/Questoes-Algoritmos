/* 119.	Escreva um programa que leia um número inteiro N e imprima todos os termos da série de Fibonacci que são menores ou iguais a N. */

#include <stdio.h>

void main()
{
    int n;

    printf("Insira um numero inteiro: ");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("Insira um numero valido.");
    }
    else
    {
        int pen = 0;
        int ult = 1;
        int prox = 0;

        printf("\nOs termos da fibonanci menores que N: \n");
        while (ult <= n)
        {
            prox = pen + ult;
            pen = ult;
            ult = prox;
            printf(" %d ", pen);
        }
    }
}
