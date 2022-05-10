/* 211.	Escreva um programa que leia o valor do raio de uma esfera e determine o seu volume.
O cálculo deve ser realizado através de um subprograma  */

#include <stdio.h>
#include <math.h>

const float pi = 3.14;

float volume(float raio)
{
    return pi * pow(raio, 3) * 4 / 3;
}
void main()
{
    float raio;
    printf("Insira o raio da esfera: ");
    scanf("%f", &raio);

    printf("\nO volume da esfera eh = %.2f m^3\n\n", volume(raio));

    system("pause");
}
