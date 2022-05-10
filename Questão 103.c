/* 103.	Escreva um programa que leia um número inteiro N e verifique se ele é um número primo.  */

#include <stdio.h>

void main()
{
    int n;
    printf("Insira um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("\nNumero invalido, tente novamente.");
    }
    else
    {
        int cont = 0;
        int divisor = 1;
        
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
            printf("\nO numero e primo.");
        }
        else
        {
            printf("\nO numero nao e primo.");
        }
    }
}
