/* 5.	Escreva um programa que leia o valor do raio de uma circunferência
 e calcule a sua área e o seu comprimento. */

#include <stdio.h>

const float pi = 3.14;

void main()
{
    float raio;
    printf("Insira o raio da circunferencia: ");
    scanf("%f", &raio);

    float comp = 2 * pi * raio;
    printf("\nC = %.2fcm", comp);

    return 0;
}