/* 104.	Escreva um programa que leia um número inteiro N e verifique se ele é um número perfeito. Um número é perfeito quando ele é 
igual à soma de todos os seus divisores exatos exceto ele mesmo. Por exemplo, o número 6 (1+2+3) é um número perfeito.  */

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
            printf("\nO numero e perfeito.");
        }
        else
        {
            printf("\nO numero nao e perfeito.");
        }
    }
}
