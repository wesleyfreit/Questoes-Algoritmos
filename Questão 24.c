/* 24.	Escreva um programa que leia o termo inicial e a razão de uma progressão aritmética e imprima os 5 primeiros termos desta progressão.  */

#include <stdio.h>

void main()
{
    int n, k, razao;
    printf("Insira um termo incial: ");
    scanf("%d", &n);
    printf("Insira a razao: ");
    scanf("%d", &razao);

    printf("\nOs 5 primeiros termos desta progressao serao:\n%d ", n);
    
    int cont = n;

    for (k = 1; k <= 4; k++)
    {
        cont = razao + cont;
        printf(" %d ", cont);
    }
    return 0;
}