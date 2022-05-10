/* 158.	Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a leitura, imprima todos os elementos do vetor que 
são maiores do que a média aritmética de todos os elementos do vetor.  */

#include <stdio.h>
#include <conio.h>

const int Qnt = 10;

void main()
{
    float vetor[Qnt];

    int k;
    float soma = 0;

    for (k = 0; k < Qnt; k++)
    {
        system("cls");

        printf("Insira um numero: ");
        scanf("%f", &vetor[k]);

        system("cls");

        soma = soma + vetor[k];
    }
    
    float media = soma / Qnt;

    printf("A media aritmetica = %.2f\n", media);
    printf("\nOs numeros maiores que a media aritmetica sao: \n\n");

    for (k = 0; k < Qnt; k++)
    {
        if (vetor[k] > media)
        {
            printf(" %.0f ", vetor[k]);
        }
    }
    getch();
}