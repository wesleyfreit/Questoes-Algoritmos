/* 107.	Escreva um programa que leia dois números inteiros M e N e calcule a média aritmética dos números primos do intervalo [M, N]. */

#include <stdio.h>

void main()
{
    int n, m;
    printf("Insira dois numeros inteiros positivos: ");
    scanf("%d%d", &n, &m);

    if (n < 1)
    {
        printf("\nNumero invalido, tente novamente.");
    }
    else
    {

        int cont = 0;
        int divisor = 1;
        int conta = 0;
        int soma = 0;
        int diferenca = 0;
        printf("\nOs primos sao: \n");
        while (n <= m)
        {
            while (divisor <= n)
            {
                if (n % divisor == 0)
                {
                    cont++;
                }
                divisor++;
            }
            if (cont == 2)
            {
                printf(" %d ", n);
                soma = n + soma;
                n++;
                cont = 0;
                divisor = 1;
                diferenca++;
            }
            else
            {
                n++;
                cont = 0;
                divisor = 1;
            }
        }
        float somar = (float)soma;
        float dif = (float)diferenca;
        float media = somar / dif;
        printf("\nA media aritimetica dos intervalos primos entre m e n =| %d / %d = %.2f.", soma, diferenca, media);
    }
}
