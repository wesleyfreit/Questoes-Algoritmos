/* 105.	Escreva um programa que leia dois números inteiros M e N e calcule a soma de todos os números do intervalo [M, N].  */

#include <stdio.h>

void main()
{
    int n, m;
    printf("Insira dois numeros inteiros positivos: ");
    scanf("%d%d", &n, &m);

    int cont = n;

    while (cont != m)
    {
        cont++;
        n = n + cont;
    }

    printf("\nA soma dos intervalos entre n e m = %d", n);
}
