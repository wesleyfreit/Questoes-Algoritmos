/* 125.	Escreva um programa que leia um número inteiro positivo N e imprima os N primeiros números perfeitos. */

#include <stdio.h>

void main()
{
    int n;
    printf("Insira um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("\nNumero invalido, tente novamente.");
    }
    else
    {
        int cont = 0;
        int divisor = 1;
        int conta = 0;
        int x = n;
        int contador = 1;
        n = 1;

        printf("\nOs %d numeros perfeitos sao: \n", x);

        while (contador <= x)
        {

            while (divisor != n)
            {
                conta = n / divisor;
                if (n % divisor == 0)
                {
                    cont = divisor + cont;
                }
                divisor++;
            }
            if (cont == n)
            {
                printf(" %d ", n);
                contador++;
                divisor = 1;
                cont = 0;
                n++;
            }
            else
            {
                divisor = 1;
                cont = 0;
                n++;
            }
        }
    }
}