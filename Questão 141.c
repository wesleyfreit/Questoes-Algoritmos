/* 141.	Escreva um programa que leia três números inteiros positivos e calcule o MMC dos números lidos. */

#include <stdio.h>

void main()
{
    int n1, n2, n3;
    int rest1, rest2, rest3;
    int fator = 2;
    int mmc = 1;

    printf("Insira tres numeros: ");
    scanf("%d%d%d", &n1, &n2, &n3);
    printf("\nMMC: ");
    do
    {
        rest1 = n1 % fator;
        rest2 = n2 % fator;
        rest3 = n3 % fator;

        if (rest1 == 0)
        {
            n1 = n1 / fator;
        }
        if (rest2 == 0)
        {
            n2 = n2 / fator;
        }
        if (rest3 == 0)
        {
            n3 = n3 / fator;
        }
        if (rest1 > 0 && rest2 > 0 && rest3 > 0)
        {
            fator++;
        }
        else
        {
            mmc = fator * mmc;
            printf("%d", fator);
            if (n1 > 1 || n2 > 1 || n3 > 1)
            {
                printf(" x ");
            }
        }
    } while (n1 > 1 || n2 > 1 || n3 > 1);

    printf(" = %d", mmc);
}