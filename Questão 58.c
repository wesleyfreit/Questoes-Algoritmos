/* 58.	Escreva um programa que leia um número inteiro e verifique se ele é par ou ímpar.   */

#include <stdio.h>

void main() 
{
    int n;
    printf("Insira um numero: ");
    scanf("%d", &n);

    int div = n % 2;

    if(div == 0 )
    {
        printf("\nO numero e par.");
    }
    else
    {
        printf("\nO numero e impar.");
    }


}
