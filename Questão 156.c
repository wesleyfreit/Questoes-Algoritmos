/* 156.	Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a leitura, leia um número inteiro N e 
imprima todos os elementos do vetor que são maiores que N.  */

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
    int n;
    int contador = 0;

    printf("\nInsira um numero inteiro: ");
    scanf("%d", &n);

    for (k = 0; k < Qnt; k++)
    {
        if (vetor[k] > n)
        {
            contador++;
        }
    }

    if (contador > 0)
    {
        printf("\nOs numeros maiores que %d sao: \n\n", n);

        for (k = 0; k < Qnt; k++)
        {
            if (vetor[k] > n)
            {
                printf(" %d ", vetor[k]);
            }
        }
    }
    else if (contador == 0)
    {
        printf("\nNao ha nenhum numero maior que %d no vetor.", n);
    }

    getch();
}