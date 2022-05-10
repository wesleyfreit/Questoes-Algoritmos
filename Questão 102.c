/*  102. Escreva um programa que leia um número inteiro N e imprima todos os seus divisores exatos.  */

#include <stdio.h>

void main()
{
    int n, k;
    printf("Insira um numero: ");
    scanf("%d", &n);
    
    if (n <= 0)
    {
        printf("\nInsira um numero positivo");
    }
    else
    {
        printf("\nOs divisores exatos de %d sao: ", n);
        for (k = 1; k <= n; k++)
        {
            if (n % k == 0)
            {
                printf("%d", k);
                if(k != n){
                    printf(" - ");
                }
            }
        }
    }

    return 0;
}