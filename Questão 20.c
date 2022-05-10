/* 20.	Em uma determinada cidade, cada m2 de um terreno está avaliado em R$ 300,00. 
Escreva um programa que leia o comprimento e a largura de um terreno localizado nesta 
cidade e calcule o seu valor de mercado. */

#include <stdio.h>

const float vAval = 300.00;

void main()
{
    float comp, larg;
    printf("Insira o comprimento do terreno: ");
    scanf("%f", &comp);
    printf("Insira a largura do terreno: ");
    scanf("%f", &larg);

    float m2 = comp * larg;
    float vTerr = m2 * vAval;

    printf("\nO valor de mercado do terreno esta avaliado em R$%.2f.", vTerr);

    return 0;
}