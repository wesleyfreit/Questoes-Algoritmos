/* Escreva um programa que leia 5 números inteiros e informe qual foi o menor e o maior número informado pelo usuário. */

#include <stdio.h>

const int Qnt = 5;

void main()
{
    int n, k;
    printf("Insira um numero inteiro: ");
    scanf("%d", &n);

    int maior = n;
    int menor = n;
    for (k = 2; k <= Qnt; k++)
    {
        printf("\nInsira outro numero inteiro: ");
        scanf("%d", &n);
        if (n < menor)
        {
            menor = n;
        }
        else if (n >= maior)
        {
            maior = n;
            
        }
    }
    printf("\nO maior numero e %d.\n", maior);
    printf("O menor numero e %d.", menor);
    return 0;
}