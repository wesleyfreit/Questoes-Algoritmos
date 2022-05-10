/* 17.	Escreva um programa que leia a área de uma casa e o valor cobrado por um arquiteto
 por cada metro quadrado de um projeto arquitetônico e calcule o custo final do projeto. */

#include <stdio.h>

void main()
{
    float area, vM2;
    printf("Insira a area em metros quadrados (M^2): ");
    scanf("%f", &area);
    printf("Insira o valor cobrado pelo arquiteto por cada M^2: ");
    scanf("%f", &vM2);

    float calc = area * vM2;

    printf("\nO custo final do projeto sera de: %.2f", calc);
}