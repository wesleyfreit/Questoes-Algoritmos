/* 162.	Escreva um programa que leia um número inteiro entre 0 e 255 e calcule o seu valor correspondente em binário.  */

#include <stdio.h>

const int tam = 8;

void main()
{
    int n, k;
    int vet[tam];
    printf("Insira um numero inteiro entre 0 e 255: ");
    scanf("%d", &n);

    if (n < 0 && n > 255)
    {
        printf("Valor incorreto, tente novamente.");
    }
    else
    {
        int cont = 0;
        printf("\nO valor em binario e: ");
        while (n != 0)
        {
            cont++;
            vet[cont] = n % 2;
            n = n / 2;
        }

        for (k = tam; k > 0; k--)
        {
            if (vet[k] == 0 || vet[k] == 1)
            {
                printf("%d", vet[k]);
            }
        }
    }
}
