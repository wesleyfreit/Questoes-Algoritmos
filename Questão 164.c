/* 164.	Escreva um programa que leia dois vetores A e B de 5 números inteiros cada e calcule um terceiro vetor que
contenha todos os elementos que estão presentes em pelo menos um dos vetores lidos. O terceiro vetor não deve armazenar
valores repetidos. */

#include <stdio.h>

const int valor = 5;

void main()
{
    int vetA[valor];
    int vetB[valor];
    int vetC[valor * 2];
    int k, x;
    int cont = 0;
    int vl = 0;

    for (k = 0; k < valor; k++)
    {
        printf("Insira o numero %d do vetor A: ", k + 1);
        scanf("%d", &vetA[k]);
    }
    printf("\n");
    for (k = 0; k < valor; k++)
    {
        printf("Insira o numero %d do vetor B: ", k + 1);
        scanf("%d", &vetB[k]);
    }

    for (k = 0; k < valor; k++)
    {
        for (x = 0; x < valor; x++)
        {
            if (vetA[k] != vetB[x])
            {
                cont++;
            }
        }
        if (cont == valor)
        {
            vetC[vl] = vetA[k];
            vl++;
        }
        cont = 0;
    }
    printf("\n");
    for (k = 0; k < vl; k++)
    {
        printf(" %d ", vetC[k]);
    }
}