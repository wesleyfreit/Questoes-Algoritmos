/* 90.	Escreva um programa que leia um número inteiro entre 1 e 12 correspondente a um mês do ano e verifique o trimestre a que este mês pertence.   */

#include <stdio.h>

void main()
{
    int n;
    printf("Insira o numero do mes de 1 a 12: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
    case 2:
    case 3:
        printf("\nPrimeiro Trimestre.");
        break;
    case 4:
    case 5:
    case 6:
        printf("\nSegundo Trimestre.");
        break;
    case 7:
    case 8:
    case 9:
        printf("\nTerceiro Trimestre.");
        break;
    case 10:
    case 11:
    case 12:
        printf("\nQuarto Trimestre.");
        break;
    default:
        printf("\nInsira um numero correto.");
        break;
    }

}