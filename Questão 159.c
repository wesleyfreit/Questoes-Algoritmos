/* 159.	Escreva um programa que leia um vetor de 10 números inteiros e dois números inteiros M e N entre 1 e 10 e inverta 
os elementos que ocupam as posições M e N do vetor. O programa deve também imprimir o estado do vetor antes e após a inversão.  */

#include <stdio.h>
#include <conio.h>

const int Qnt = 10;

void main()
{
    int vetor[Qnt];

    int k, m, n;

    for (k = 0; k < Qnt; k++)
    {
        system("cls");

        printf("Insira um numero: ");
        scanf("%d", &vetor[k]);

        system("cls");
    }

    printf("\nInsira um numero M: ");
    scanf("%d", &m);

    printf("\nInsira um numero N: ");
    scanf("%d", &n);

    printf("\nAntes da inversao:");
    printf(" ( %d - %d );", vetor[m - 1], vetor[n - 1]);

    printf("\n\nDepois da inversao:");
    printf(" ( %d - %d ).", vetor[n - 1], vetor[m - 1]);
    
    getch();
}