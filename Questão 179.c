/* 179.	Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e imprima todos
os elementos que estão acima e abaixo da diagonal principal.  */

#include <stdio.h>

const int vert = 5;
const int horz = 5;

void main()
{
    int matriz[vert][horz];
    int k, x;

    for (k = 0; k < vert; k++)
    {

        for (x = 0; x < horz; x++)
        {

            printf("Informe um numero inteiro: ");
            scanf("%d", &matriz[k][x]);
        }
    }
    printf("\nOs numeros acima e abaixo da diagonal principal da matriz informada sao:\n\n");
    for (k = 0; k < vert; k++)
    {
        for (x = 0; x < horz; x++)
        {
            if (k == x && k != vert / 2)
            {
                printf("%5d", matriz[k][k]);
            }
            else
            {
                printf("     ");
            }
        }

        printf("\n\n");
    }
}
