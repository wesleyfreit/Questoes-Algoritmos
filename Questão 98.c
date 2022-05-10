/* 98.	Escreva um programa que imprima todos os números inteiros entre 1 e 100 em ordem ascendente. */

#include <stdio.h>

const int ULTIMO = 100;
void main()
{
    int k;
    printf("Os numeros inteiros entre 1 e %d sao: \n", ULTIMO);
    for (k = 1; k <= ULTIMO; k++)
    {
        printf("%d ", k);
    }
}
