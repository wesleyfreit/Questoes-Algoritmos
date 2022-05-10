/* 12.	Escreva um programa que leia um valor em polegadas
 e o converta para centímetros, considerando que uma polegada equivale a 2.54 cm. */

#include <stdio.h>

const float vPol = 2.54; //cm  - valor da polegada

void main()
{
    float pol;
    printf("Insira o valor em polegadas: ");
    scanf("%f", &pol);

    float cm = pol * vPol;

    printf("\nConversao = %.2fcm", cm);

    return 0;
}