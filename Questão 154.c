/* 154.	Escreva um programa que leia dez números inteiros e, após finalizar a leitura, imprima todos os números lidos na ordem inversa em que eles foram digitados.  */

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
    printf("\nA ordem de numeros informados e:\n\n");

    for(k = (Qnt - 1); k >= 0; k--)
    {
        printf(" %d ", vetor[k]);
    }
    getch();
}