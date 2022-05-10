/* 176.	Escreva um programa que leia uma matriz quadrada de ordem 4 de números inteiros e imprima a matriz lida. */

#include <stdio.h>

const int linhas = 4;
const int colunas = 4;

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
    for (i = 0; i < linhas; i++)
    {

        for (j = 0; j < colunas; j++)
        {
            if (mat[i][j] < 10)
            {
                printf("%4d", 0);
                printf("%d", mat[i][j]);
            }
            else if (mat[i][j] >= 10)
            {
                printf("%5d", mat[i][j]);
            }
        }
        printf("\n\n");
    }
}