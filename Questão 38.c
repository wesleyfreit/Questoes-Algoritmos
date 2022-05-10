/* 38.	Escreva um programa que leia um valor em segundos e converta para a forma X horas Y minutos e Z segundos. 
Por exemplo, o valor 3670 equivale a 1 hora 1 minutos e 10 segundos. */

#include <stdio.h>

void main()
{
    int seg;
    printf("Insira o valor em segudos: ");
    scanf("%d", &seg);

    if (seg > 0)
    {
        int h = seg / 3600;
        int restH = seg % 3600;
        int m = restH / 60;
        int s = restH % 60;

        printf("\nA hora ficara da seguinte forma: %dh:%dm:%ds", h, m, s);
    }
    else
    {
        printf("\nInsira um valor valido.");
    }
}