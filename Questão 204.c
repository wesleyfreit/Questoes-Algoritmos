/* 204.	Escreva um programa que leia o valor de cinco temperaturas em Celsius e, para cada valor lido, calcule o seu
valor correspondente em Fahrenheit e em Kelvin. Os cálculos das conversões devem ser realizados através de subprogramas. */

#include <stdio.h>

const int vl = 5;
const int fah = 32;
const int kel = 273;

float fh(float c)
{
    return c * 1.8 + fah;
}
float kv(float c)
{
    return c + kel;
}
void main()
{
    float c;
    int k;

    for (k = 1; k <= vl; k++)
    {
        printf("\nInsira a temperatura em graus Celsius num. %d: ", k);
        scanf("%f", &c);

        printf("\n | A temperatura celsius %.2f em Fahrenheit eh = %.2f", c, fh(c));
        printf("\n | A temperatura celsius %.2f em Kelvin eh = %.2f\n", c, kv(c));
    }
}
