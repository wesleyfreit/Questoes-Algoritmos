/* 61.	Escreva um programa que leia um número inteiro e determine o seu valor absoluto. O valor absoluto deve ser calculado sem o 
uso de qualquer função oferecida pela linguagem.     */

#include <stdio.h>

void main()
{
    int n;
    printf("Insira um numero inteiro: ");
    scanf("%d", &n);

    if (n >= 0)
    {
        printf("\nAbsoluto: %d", n);
    }
    else
    {
        printf("\nAbsoluto: %d", -n);
    }
}
