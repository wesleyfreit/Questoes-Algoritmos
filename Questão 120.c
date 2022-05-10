/* 120.	Escreva um programa que leia um número inteiro positivo N e imprima a maior quantidade possível de números
inteiros positivos de forma que a soma de todos os números impressos seja menor ou igual a N. */

#include <stdio.h>

void main()
{
    int n;
    printf("Insira um numero inteiro: ");
    scanf("%d", &n);

    int m = 0;
    int x = 0;
    printf("\nA maior quantidade de numeros inteiros somados menores ou iguais a %d eh: \n ", n);
    while (m <= n)
    {
        x++;
        if (m + x <= n)
        {
            printf("%d", x);
        }
        if (m >= n || m + x > n)
        {
            printf(" = %d", m);
        }
        m = x + m;

        if (m + x < n)
        {
            printf(" + ");
        }
    }
}
