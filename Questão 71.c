/* 71.	Escreva um programa que leia três números inteiros distintos e identifique o maior número lido. */

#include <stdio.h>

void main()
{
    int n1, n2, n3;
    printf("Insira tres numeros inteiros: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    if (n1 > n2 && n1 > n3)
    {
        printf("\n%d e o maior numero.", n1);
    }
    if (n2 > n1 && n2 > n3)
    {
        printf("\n%d e o maior numero.", n2);
    }
    if (n3 > n2 && n3 > n1)
    {
        printf("\n%d e o maior numero.", n3);
    }
    else if (n3 == n2 && n1 < n2)
    {
        printf("\n%d e o maior numero.", n3);
    }
    else if (n3 == n1 && n3 > n2)
    {
        printf("\n%d e o maior numero.", n1);
    }
    else if (n2 == n1)
    {
        printf("\n%d e o maior numero.", n2);
    }
}
