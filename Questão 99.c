/* 99.	Escreva um programa que imprima todos os números inteiros entre 1 e 100 em ordem descendente. */

#include <stdio.h>

const int ULTIMO = 100;

void main()
{
    int k;
    printf("Os numeros inteiros entre 1 e %d em ordem descendente sao:\n");
    for (k = ULTIMO; k >= 0; k--)
    {
        printf("%d ", k);
    }
}
