/* 37.	Escreva um programa que leia um número positivo entre 1 e 9999 e calcule o valor da unidade de milhar, da centena, da dezena e da unidade. */

#include <stdio.h>

void main()
{
    int n;
    printf("Insira um numero entre 1 a 9999: ");
    scanf("%d", &n);

    if (n < 1 || n > 9999)
    {
        printf("\nInsira um numero valido");
    }
    else
    {
        int milhar = n / 1000;
        int rest1 = n % 1000;
        int cent = rest1 / 100;
        int rest2 = rest1 % 100;
        int dez = rest2 / 10;
        int un = rest2 % 10;

        printf("\nOs valores ficarao assim:");
        printf("\nM = %d \nC = %d \nD = %d \nU = %d", milhar, cent, dez, un);
    }
}