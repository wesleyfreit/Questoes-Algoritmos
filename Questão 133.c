/* 133.	Escreva um programa que leia um número inteiro N e imprima a figura abaixo, onde N é o número de elementos impressos na primeira linha. No exemplo abaixo, foi considerado que N=5.
 *
 **
 ***
 ****
 *****
 */

#include <stdio.h>

void main()
{
    int n, k;
    int i = 1;
    printf("Insira um numero: ");
    scanf("%d", &n);

    printf("\n");

    for (k = n; k <= n; k++)
    {

        printf("*");
        if (k == n && i < n)
        {
            printf("\n");
            i++;
            k = n - i;
        }
    }
    printf("\n\n");
}
