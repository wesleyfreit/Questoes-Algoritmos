/* 112.	Escreva um programa que leia um número inteiro N e imprima o enésimo termo da série de Fibonacci. (1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...).  */

#include <stdio.h>

void main()
{
    int n, k;
    
    printf("Insira um numero inteiro: ");
    scanf("%d", &n);

    if(n < 1)
    {
        printf("\nInsira um numero valido.");
    }
    else
    {
        int pen = 0;
        int ult = 1;
        int prox = 0;

        for (k = 1; k <= n; k++)
        {
            prox = pen + ult;
            pen = ult;
            ult = prox;
        }
        printf("\nO enesimo termo da serie de Fibonacci = %d", pen);
    }
}
