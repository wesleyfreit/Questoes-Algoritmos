/* 3°. Escreva um programa em C que leia uma matriz quadrada de ordem 5 de números inteiros e um número inteiro N e
verifique em quantas linhas da matriz o número N aparece. */

#include <stdio.h>

const int lc = 5;

void main()
{
    int matriz[lc][lc];
    int k, x;

    for (k = 0; k < lc; k++)
    {
        for (x = 0; x < lc; x++)
        {
            printf("Informe um numero inteiro: ");
            scanf("%d", &matriz[k][x]);
        }
    }

    int n;
    printf("\nInsira um numero N: ");
    scanf("%d", &n);

    int cont = 0;

    printf("\n A matriz informada foi: \n\n");

    for (k = 0; k < lc; k++)
    {
        for (x = 0; x < lc; x++)
        {
            if (matriz[k][x] == n)
            {
                cont++;
                break;
            }
        }
    }
    for (k = 0; k < lc; k++)
    {
        for (x = 0; x < lc; x++)
        {
            printf("%5d", matriz[k][x]);
        }
        printf("\n\n");
    }
    if (cont > 0)
    {
        printf("O Num. %d apareceu em %d linhas da matriz.", n, cont);
    }
    else
    {
        printf("O Num. %d nao apareceu em nenhuma linha da matriz.", n);
    }
}