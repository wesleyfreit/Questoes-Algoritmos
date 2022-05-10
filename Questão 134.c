/* 134.	Escreva um programa que leia um número inteiro N e imprima a figura abaixo, onde N
é o número de elementos impressos na primeira linha. No exemplo abaixo, foi considerado que N=5.
*****
****
***
**
*
*/

#include <stdio.h>

void main()
{
    int n, k;
    printf("Insira um numero: ");
    scanf("%d", &n);
    int i = n;

    printf("\n");

    for (k = 1; k <= n; k++)
    {

        printf("*");
        if (k == n)
        {
            printf("\n");
            i--;
            k = n - i;
        }
    }

    printf("\n");
}
