/* 200.	Escreva um programa que leia o valor do lado de um quadrado e calcule a sua
área e o seu perímetro. O programa deve ter um subprograma para calcular a área
e outro para calcular o perímetro. */

#include <stdio.h>

float area(float lado)
{
    return pow(lado,2);
}
float perimetro(float lado)
{
    return (lado * 4);
}
void main()
{
    float lado;

    printf("Insira o lado do quadrado: ");
    scanf("%f", &lado);

    float Varea = area(lado);
    float Vperimetro = perimetro(lado);

    printf("\nA area do quadrado e %.2f m^2", Varea);
    printf("\nO perimetro do quadrado e %.2f m", Vperimetro);
}
