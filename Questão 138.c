/* 138.	Escreva um programa que leia um número inteiro positivo e calcule a soma de todos os seus algarismos. */

#include <stdio.h>

const int vl = 10;

void main()
{
    int n, k;
    printf("Insira um numero inteiro: ");
    scanf("%d", &n);

    int rest = 0;
    int soma = 0;

    while (n != 0)
    {
        rest = n % vl;
        soma = soma + rest;
        n = n / vl;
    }
    printf("\nA soma dos algarismos de N = %d", soma);
}