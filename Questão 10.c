/* 10.	Escreva um programa que leia o valor dos 
dois catetos de um triângulo retângulo e calcule o valor da hipotenusa. */

#include <stdio.h>
#include <math.h>

void main()
{
    float cat1, cat2;
    printf("Informe o valor do cateto 1 do triangulo: ");
    scanf("%f", &cat1);
    printf("Informe o valor do cateto 2 do triangulo: ");
    scanf("%f", &cat2);

    float hipt = sqrt(pow(cat1, 2) + pow(cat2, 2));

    printf("Hipotenusa = %.2f", hipt);

    return 0;
}