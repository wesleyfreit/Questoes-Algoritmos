/* 59.	Escreva um programa que leia dois números e determine se o segundo número é menor, igual ou maior que o primeiro.  */

#include <stdio.h>

void main() 
{
    int n, k;
    printf("Insira dois numeros: ");
    scanf("%d%d", &n, &k);

    if(k > n )
    {
        printf("\n%d e maior que %d.", k, n);
    }
    else if(k < n)
    {
        printf("\n%d e menor que %d", k, n);
    }
    else
    {
        printf("\n%d e igual a %d.", k, n);
    }


}
