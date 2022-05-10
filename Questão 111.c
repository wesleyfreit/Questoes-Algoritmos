/* 111.	Escreva um programa que leia o termo inicial e a razão de uma PA e um número inteiro positivo N e 
imprima os N primeiros termos da progressão. */

#include <stdio.h>

void main()
{
    int n, raz, k, termo;
    printf("Insira o termo inicial da progressao: ");
    scanf("%d", &termo);

    printf("Insira a razao: ");
    scanf("%d", &raz);

    printf("Insira um numero inteiro: ");
    scanf("%d", &n);


    int var = termo;

    if (n < 0)
    {
        int x = n;
        n = n * (-1);
        for (k = 0; k <= n; k++)
        {
            var = var - raz;
        }
        for (k = 0; k <= n; k++)
        {
            var = var + raz;
            printf(" %d ", var);
        }
    }
    else
    {
        for (k = 0; k <= n; k++)
        {
            printf(" %d ", var);
            var = var + raz;
        }
    }
}
