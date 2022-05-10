/* 121.	Escreva um programa que leia o termo inicial e a razão de uma progressão aritmética e um número inteiro N 
e imprima todos os termos da progressão menores ou iguais a N (caso a razão seja positiva) ou todos os termos maiores 
ou iguais a N (caso a razão seja negativa). */

#include <stdio.h>

void main()
{
    int termoI, raz, n;
    printf("Insira o termo inicial da progressao: ");
    scanf("%d", &termoI);

    printf("Insira a razao da progressao: ");
    scanf("%d", &raz);

    printf("Insira um numero N: ");
    scanf("%d", &n);

    int vF = termoI;

    printf("\nA progressao ficara assim: \n %d ", termoI);

    if (n > termoI)
    {
        while (n > vF)
        {
            if (termoI > 0)
            {
                vF = vF + raz;
                if (n > vF)
                {
                    printf(" %d ", vF);
                }
            }
            else if (termoI < 0)
            {
                vF = vF - raz;
                if (n > vF)
                {
                    printf(" %d ", vF);
                }
            }
        }
    }
    else if (n < vF)
    {
        while (n < vF)
        {
            if (termoI < 0)
            {

                vF = vF + raz;
                if (n < vF)
                {
                    printf(" %d ", vF);
                }
            }
            else if (termoI > 0)
            {

                vF = vF - raz;
                if (n < vF)
                {
                    printf(" %d ", vF);
                }
            }
        }
    }
}