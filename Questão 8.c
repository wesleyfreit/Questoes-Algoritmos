/* 8.	Escreva um programa que leia o valor de uma temperatura 
em Celsius e calcule o seu valor correspondente em Fahrenheit e em Kelvin. */

#include <stdio.h>

const float fah = 32;
const float kelv = 273;

void main()
{
    float c;
    printf("Insira a temperatura em Celsius: ");
    scanf("%f", &c);

    float f = c * 1.8 + fah;
    float k = c + kelv;
    printf("\n Fahrenheit = %.1fF", f);
    printf("\n Kelvin = %.1fK", k);

    return 0;
}