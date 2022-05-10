/* 109.	Escreva um programa que leia dois números inteiros M e N e um número inteiro X e imprima todos os divisores exatos de X existentes no intervalo [M, N]. */

#include <stdio.h>

void main()
{
    int x;
    printf("Insira um numero inteiro: ");
    scanf("%d", &x);

    if (x < 1)
    {
        printf("\nNumero invalido, tente novamente.");
    }
    else
    {
        int var = 1;
        int y = x;
        int sub = x;
        while (var <= x - 1)
        {
            y = y * (sub - var);
            var++;
        }
        printf("\nO fatorial de %d e = %d", x, y);
    }
}
