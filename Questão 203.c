/* 203.	Escreva um programa que leia o valor da base e da altura de um triângulo e calcule a sua área, que deve ser
calculada através de um subprograma.  */

#include <stdio.h>

float area(float a, float b)
{
    return (b * a) / 2;
}
void main()
{
    float a, b;
    printf("Insira base do triangulo: ");
    scanf("%f", &b);
    printf("\nInsira a altura do triangulo: ");
    scanf("%f", &a);

    printf("\nA area do triangulo eh = %.2f", area(a, b));
}
