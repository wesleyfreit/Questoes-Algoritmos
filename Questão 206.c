/* 206.	Escreva um programa que leia o valor dos dois catetos de um triângulo retângulo e calcule o valor da hipotenusa.
O cálculo deve ser realizado através de um subprograma.  */

#include <stdio.h>
#include <math.h>

float hipotenusa(float c1, float c2)
{
    return sqrt(pow(c1, 2) + pow(c2, 2));
}
void main()
{
    float c1, c2;

    printf("\nEscreva os dois catetos do triangulo: ");
    scanf("%f%f", &c1, &c2);

    printf("\n | A hipotenusa do triangulo eh = %.1f\n\n", hipotenusa(c1, c2));

    system("pause");
}
