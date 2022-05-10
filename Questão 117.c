/* 117.	Escreva um programa que leia 10 números inteiros e, para cada número lido, calcule o seu fatorial. */

#include <stdio.h>
#include <conio.h>

void main()
{
    int x, k;
    for (k = 1; k <= 10; k++)
    {
        system("cls");

        printf("Insira um numero inteiro: ");
        scanf("%d", &x);

        if (x < 1)
        {
            printf("\nNumero invalido, tente novamente.");
            break;
        }
        else
        {
            int var = 1;
            int y = x;
            int sub = x;
            while (var <= x - 1)
            {
                y = y * (sub - var);
                var++;
            }
            printf("\nO fatorial de %d e = %d", x, y);

            getch();
        }
    }
}
