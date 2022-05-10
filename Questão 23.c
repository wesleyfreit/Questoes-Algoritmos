/* 23.	Escreva um programa que leia o valor do raio de uma esfera e determine o seu volume. */

#include <stdio.h>
#include <math.h>

const float pi = 3.14;

void main()
{
    float raio;
    printf("Insira o raio da esfera: ");
    scanf("%f", &raio);

    float vol = 4 * pi * pow(raio, 3) / 3;

    printf("O volume da esfera sera > %.1f cm^3", vol);

    return 0;
}