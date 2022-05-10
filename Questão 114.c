/* 114.	Escreva um programa que leia dois números inteiros M e N e calcule o valor de MN. A potenciação deve ser calculada através de um comando de repetição, sem a 
utilização de qualquer função oferecida pela linguagem de programação. */

#include <stdio.h>

void main()
{
    int n, m, k;
    printf("Insira dois numeros inteiros positivos: ");
    scanf("%d%d", &n, &m);

    if (n < 0)
    {
        printf("\nNumero invalido, tente novamente.");
    }
    else
    {
        int x = n;
        for (k = 1; k <= x; k++)
        {
            m = m * n;
        }
        printf("\nM = %d", m);
    }
}
