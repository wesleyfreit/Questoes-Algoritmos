/* 180.	Escreva um programa que leia uma matriz quadrada de ordem 5 de números inteiros e um inteiro N e 
verifique quantas vezes o número N aparece dentro da matriz.   */

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

    int n;
    printf("\nInsira um numero N: ");
    scanf("%d", &n);

    int cont = 0;

    for (k = 0; k < vert; k++)
    {
        for (x = 0; x < horz; x++)
        {
            if (matriz[k][x] == n)
            {
                cont++;
            }
        }
    }
    printf("\n%d aparece %dx na matriz.", n, cont);
}
