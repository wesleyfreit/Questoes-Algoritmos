/* 202.	Escreva um programa que leia o valor do raio de uma circunferência e calcule a sua área e o seu comprimento.
O programa deve fornecer um subprograma para calcular a área e outro para calcular o comprimento.  */

#include <stdio.h>
#include <math.h>

const float pi = 3.14;

float comprimento(float raio)
{
    return 2 * raio * pi;
}
float area(float raio)
{
    return pow(raio, 2) * pi;
}
void main()
{
    float raio;
    printf("Insira o raio da circunferencia: ");
    scanf("%f", &raio);

    printf("\nA area da circunferencia eh = %.2f", area(raio));
    printf("\n\nO comprimento da circunferencia eh = %.2f", comprimento(raio));
}
