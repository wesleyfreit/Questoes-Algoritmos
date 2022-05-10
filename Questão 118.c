/* 119.	Escreva um programa que leia um número inteiro N e imprima todos os termos da série de Fibonacci que são menores ou iguais a N.  */

#include <stdio.h>

void main()
{
    int n;
    printf("Insira um numero positivo: ");
    scanf("%d", &n);

    int primo = 0;
    int divisor = 1;
    int cont = 0;
    int x = 0;

    printf("\nOs N primos sao: \n");

    while (primo < n)
    {
        while(divisor <= x){
            if (x % divisor == 0)
            {
                cont++;
            }
            divisor++;
        }
        if (cont == 2)
        {
            printf(" %d ", x);
            x++;
            cont = 0;
            divisor = 1;
            primo++;
        }
        else
        {
            x++;
            cont = 0;
            divisor = 1;
        }
    }
}
