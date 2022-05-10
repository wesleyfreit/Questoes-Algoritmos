/* 136.	Escreva um programa que leia um número inteiro positivo N e calcule o seu valor correspondente em binário. */

#include <stdio.h>

const int tam = 16;

void main()
{
    int n, k;
    printf("Insira um numero inteiro: ");
    scanf("%d", &n);

    int vet[tam];
    int cont = 0;

    while (n != 0)
    {
        cont++;
        vet[cont] = n % 2;
        n = n / 2;
    }
    printf("\nCorrespondente em binario: ");
    for (k = tam; k > 0; k--)
    {
        if (vet[k] == 0 || vet[k] == 1)
        {
            printf("%d", vet[k]);
        }
    }
}
