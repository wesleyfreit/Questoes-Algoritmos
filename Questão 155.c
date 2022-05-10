/* 155.	Escreva um programa que leia dez números inteiros e, após finalizar a leitura, leia um número inteiro N (entre 1 e 10) e 
imprima qual foi o enésimo número digitado pelo usuário. */

#include <stdio.h>
#include <conio.h>

const int Qnt = 10;

void main()
{
    int vetor[Qnt];
    int k;

    for(k = 0; k < Qnt; k++)
    {
        system("cls");

        printf("Insira um numero: ");
        scanf("%d", &vetor[k]);

        system("cls");
    }
    int n;

    printf("\nInsira um numero inteiro: ");
    scanf("%d", &n);

    printf("\nO enesimo numero digitado e %d.", vetor[n - 1]);
    
    getch();
}