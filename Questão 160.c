/* 160.	Escreva um programa que leia um vetor de 10 números inteiros e inverta todos os elementos do vetor. 
O programa deve ser resolvido com a utilização de apenas um vetor.  */

#include <stdio.h>
#include <conio.h>

const int Qnt = 10;

void main()
{
    int vetor[Qnt];

    int k;

    for (k = 0; k < Qnt; k++)
    {
        system("cls");

        printf("Insira um numero: ");
        scanf("%d", &vetor[k]);

        system("cls");
    }

    printf("\nA inversao ficara assim: \n\n");

    int pos = Qnt - 1;

    for (k = 0; k < Qnt / 2; k++)
    {
        int aux = vetor[k];
        vetor[k] = vetor[pos];
        vetor[pos] = aux;

        pos--;
    }
    for (k = 0; k < Qnt; k++)
    {
        printf(" %d ", vetor[k]);
    }

    getch();
}