/* 4°. Escreva um programa em C que leia dois vetores de 5 números inteiros e cada e imprima os números que aparecem no
primeiro vetor mas não aparecem no segundo. Você pode supor que dentro de um mesmo vetor não há números repetidos. */

#include <stdio.h>

const int tam = 5;

void main()
{
    int vet1[tam];
    int vet2[tam];
    int k, x;
    int cont = 0;

    printf("\n| VETOR 01 |\n");
    for (k = 0; k < tam; k++)
    {
        printf("Insira um numero: ");
        scanf("%d", &vet1[k]);
    }
    printf("\n| VETOR 02 |\n");
    for (x = 0; x < tam; x++)
    {
        printf("Insira um numero: ");
        scanf("%d", &vet2[x]);
    }

    printf("\nOs numeros que nao sao repetidos no segundo vetor sao:");

    for (k = 0; k < tam; k++)
    {
        for (x = 0; x < tam; x++)
        {
            if (vet1[k] != vet2[x])
            {
                cont++;
            }
        }
        if (cont == tam)
        {
            printf("%3d", vet1[k]);
        }
        cont = 0;
    }
}