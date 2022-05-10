/* 106. Escreva um programa que leia dois números inteiros M e N e calcule a média aritmética dos números do intervalo [M, N]. */

#include <stdio.h>

void main()
{
    int n, m;
    printf("Insira dois numeros inteiros positivos: ");
    scanf("%d%d", &n, &m);

    int valor = n;
    int cont = n;

    while (cont != m)
    {
        cont++;
        n = n + cont;
    }
    float ne = (float)n;
    float var = (float)valor;
    float me = (float)m;
    float diferenca = (me - var);
    float media = ne / diferenca;

    printf("\nA media aritimetica dos intervalos m e n =| %.0f / %.0f = %.2f", ne, diferenca, media);
}
