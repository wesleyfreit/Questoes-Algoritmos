/* 3.	Escreva um programa que leia o valor do lado de 
um quadrado e calcule a sua área e o seu perímetro.  */

#include <stdio.h>

void main()
{
    float base, alt;
    printf("Insira o lado do quadrado: ");
    scanf("%f", &base);
    printf("Insira o lado do quadrado: ");
    scanf("%f", &alt);

    float area = base * alt;
    float perimetro = base + base + alt + alt;
    printf("\nA area do quadrado sera = %.2f m^2", area);
    printf("\nO perimetro do quadrado sera = %.2f m", perimetro);
}