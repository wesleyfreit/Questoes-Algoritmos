/* 122.	Escreva um programa que leia um número inteiro N e verifique se ele pertence à série de Fibonacci. */

#include <stdio.h>

void main()
{
    int n;
    printf("Insira um numero inteiro: ");
    scanf("%d", &n);

    int pen = 0;
    int ult = 1;
    int prox = 0;

    while (n > prox)
    {
        prox = pen + ult;
        pen = ult;
        ult = prox;
        if (n == prox)
        {
            printf("\nPertece.");
            break;
        }
    }
    if (n != prox)
    {
        printf("\nNao Pertence.");
    }
}