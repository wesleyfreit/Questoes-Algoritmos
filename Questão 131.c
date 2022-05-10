/* 131.	Escreva um programa que leia 10 números reais distintos e calcule o segundo maior número lido. */

#include <stdio.h>

const int tam = 10;

void main()
{
    float n;
    int k;
    float valor = 0;
    float segundo = 0;
    int cont = 0;

    for (k = 1; k <= tam; k++)
    {
        printf("Insira um numero: ");
        scanf("%f", &n);

        if (n > valor)
        {
            cont++;

            if (cont == 2)
            {
                segundo = valor;
                cont = 1;
            }

            valor = n;
        }
        else if (segundo < valor && segundo < n)
        {
            segundo = n;
        }
    }
    printf("\nO segundo maior numero e %.2f", segundo);
}