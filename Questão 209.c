/* 209.	Escreva um programa que leia os valores de dois ângulos internos de um triângulo e
calcule o valor do terceiro ângulo. O cálculo deve ser realizado através de um subprograma. */

#include <stdio.h>
#include <math.h>

const float alpha = 180;

float thirth(float a1, float a2)
{
    return alpha - (a1 + a2);
}
void main()
{
    float a1, a2;
    printf("Insira o primeiro angulo do triangulo: ");
    scanf("%f", &a1);
    printf("Insira o segundo angulo do triangulo: ");
    scanf("%f", &a2);

    printf("\nO valor do terceiro angulo eh = %.2f graus", thirth(a1, a2));
}
