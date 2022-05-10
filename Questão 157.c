/* 157.	Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a leitura, leia um número 
inteiro N e imprima todas as posições em que o número N aparece dentro do vetor.  */

#include <stdio.h>
#include <conio.h>

const int Qnt = 10;

void main()
{
    int vetor[Qnt];

    int k, n;

    for (k = 0; k < Qnt; k++)
    {
        system("cls");

        printf("Insira um numero: ");
        scanf("%d", &vetor[k]);

        system("cls");
    }

    printf("\nInsira um numero N: ");
    scanf("%d", &n);

    if(n > 0 && n <= Qnt){
        printf("\nAs %d posicoes sao: \n\n", n);

        for (k = 0; k < n; k++)
        {
            printf(" %d ", vetor[k]);
        }
    }
    else if(n == 0){
        printf("\nNao ha posicoes para imprimir.");
    }
    else if(n > Qnt){
        printf("\nInsira um numero entre o vetor de %d numeros.", Qnt);
    }
    getch();
}