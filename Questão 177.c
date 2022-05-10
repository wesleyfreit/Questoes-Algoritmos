/* 177.	Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e calcule a sua matriz transposta. */

#include <stdio.h>

const int linhas = 5;
const int colunas = 5;

void main()
{
    int mat[linhas][colunas];
    int i, j;

    for (i = 0; i < linhas; i++)
    {

        for (j = 0; j < colunas; j++)
        {

            printf("Informe um numero inteiro: ");
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nA matriz informada foi:\n\n");
    for (i = 0; i < colunas; i++)
    {

        for (j = 0; j < linhas; j++)
        {

            if (mat[j][i] < 10)
            {
                printf("%4d", 0);
                printf("%d", mat[j][i]);
            }
            else if (mat[j][i] >= 10)
            {
                printf("%5d", mat[j][i]);
            }
        }
        printf("\n\n");
    }
}