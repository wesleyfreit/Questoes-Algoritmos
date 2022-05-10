/* 109.	Escreva um programa que leia dois números inteiros M e N e um número inteiro X e imprima todos os divisores exatos de X existentes no intervalo [M, N]. */

#include <stdio.h>

void main()
{
    int n, m, x;
    printf("Insira dois numeros inteiros positivos: ");
    scanf("%d%d", &n, &m);
    printf("Insira um numero inteiro: ");
    scanf("%d", &x);

    if (x < 1)
    {
        printf("\nNumero invalido, tente novamente.");
    }
    else
    {
        int var = 0;
        printf("\nAs divisoes exatas entre o intervalo M e N ficarao assim: \n");
        while (n <= m)
        {
            if (n % x == 0)
            {
                var = n / x;
                printf("%d / %d = %d\n", n, x, var);
            }
            n++;
        }
    }
}
