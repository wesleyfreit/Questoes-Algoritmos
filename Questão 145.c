/* 145.	Escreva um programa que leia um número inteiro N e, a seguir leia vários números inteiros. O processo de leitura
deve ser encerrado quando a soma dos números digitados pelo usuário (excluindo-se o valor de N) for superior ao valor de N. */

#include <stdio.h>

void main()
{
    int n;
    printf("Insira um numero inteiro: ");
    scanf("%d", &n);

    int m = 0;

    printf("\nCONTADOR DE NUMEROS ATE SER SUPERIOR A N:\n");
    while (m <= n)
    {
        int x;
        printf("Insira um numero inteiro: ");
        scanf("%d", &x);

        m = m + x;
    }
    printf("\nContador final eh = %d", m);
}
