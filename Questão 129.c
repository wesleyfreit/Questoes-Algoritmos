/* 129.	Escreva um programa que leia dois números inteiros M e N e imprima todos os pares (x, y) 
possíveis de forma que x e y pertençam ao intervalo [M, N] e y seja sempre maior ou igual a x. */

#include <stdio.h>

void main()
{
    int m, n;
    printf("Insira um numero M: ");
    scanf("%d", &m);
    printf("Insira um numero N: ");
    scanf("%d", &n);

    int x = m;
    int y = m;
    int cont = 1;

    printf("\nTodos os pares entre %d e %d sao: \n", m, n);

    while (x != n)
    {

        printf("\n Par %d - ( %d - %d )", cont, x, y);

        cont++;
        y++;

        if (y == n)
        {
            printf("\n Par %d - ( %d - %d )", cont, x, y);

            cont++;
            x++;
            y = x;
        }
        if(x == n)
        {
            printf("\n Par %d - ( %d - %d )", cont, x, y);
        }
    }
}