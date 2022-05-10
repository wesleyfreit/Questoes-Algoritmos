/* 7.	Escreva um programa que leia o valor da 
base e da altura de um triângulo e calcule a  q a sua área. */

#include <stdio.h>

void main()
{
    float b, h;
    printf("Insira a base do triangulo: ");
    scanf("%f", &b);
    printf("Insira a altura do triangulo: ");
    scanf("%f", &h);

    float areaT = (b * h) / 2;
    printf("\nA = %.2f m^2", areaT);
    
    return 0;
}