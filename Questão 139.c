/* 139.	Escreva um programa que leia um número inteiro N e um número inteiro K e identifique o k-ésimo algarismo
(da direita para a esquerda) do número N. Caso o valor de k seja maior do que a quantidade de algarismos de N, a
resposta do programa deve ser 0. */

#include <stdio.h>

const int div = 10;

void main()
{
    int n, k;
    int cont = 0;
    printf("Insira um numero inteiro N: ");
    scanf("%d", &n);
    printf("Insira um numero inteiro K: ");
    scanf("%d", &k);

    int x = n;

    while (x != 0)
    {
        x = x / div;
        cont++;
    }
    if (k > cont)
    {
        printf("\nO k-esimo algarimso = %d", 0);
    }
    else
    {
        int rest = 0;
        while (k != 0)
        {
            rest = n % div;
            n = n / div;
            k--;
        }
        printf("\nO k-esimo algarismo = %d", rest);
    }
}