/* 42.	Escreva um programa que leia o peso e a altura de uma pessoa e determine o seu índice de massa corporal. */

#include <stdio.h>
#include <math.h>

void main()
{
    float peso, altura;

    printf("Insira o peso: ");
    scanf("%f", &peso);
    printf("Insira a altura: ");
    scanf("%f", &altura);

    float imc = peso / pow(altura,2);

    printf("\nIMC = %.2f",imc);
}