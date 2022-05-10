/* 210.	Em uma determinada cidade, cada m2 de um terreno está avaliado em R$ 50,00. Escreva um programa que leia o
comprimento e a largura de um terreno localizado nesta cidade e calcule o seu valor de mercado. O cálculo deve ser
realizado através de um subprograma, que deve receber como entrada o comprimento e a largura do terreno. */

#include <stdio.h>
#include <math.h>

const float av = 50;

float vM2(float comp, float larg)
{
    return (comp * larg) * av;
}
void main()
{
    float comp, larg;
    printf("Insira o comprimento do terreno: ");
    scanf("%f", &comp);
    printf("Insira a largura do terreno: ");
    scanf("%f", &larg);

    printf("\nO valor do terreno eh = R$%.2f\n\n", vM2(comp, larg));

    system("pause");
}
