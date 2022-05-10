/* 266.	Escreva um subprograma recursivo que receba como entrada um vetor de 10 números inteiros e um número inteiro N 
Quentre 1 e 10 e calcule a soma de todos os elementos do vetor a partir da posição N. */
#include <stdio.h>

const int tam = 10;

int soma(int vet[tam], int n)
{
    if (n == tam - 1)
    {
        return vet[tam - 1];
    }
    return vet[n] + soma(vet, n + 1);
}

void main()
{
    int vet[tam];
    int n, k;

    for (k = 0; k < tam; k++)
    {
        printf("Insira o numero %d do vetor: ", k);
        scanf("%d", &vet[k]);
    }

    printf("\nInsira um numero N entre 0 e 9: ");
    scanf("%d", &n);
    int resultado = soma(vet, n);
    printf("\nO valor da soma eh = %d", resultado);
}