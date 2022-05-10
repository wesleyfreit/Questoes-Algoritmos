/* 229.	Escreva um programa que leia os valores dos tr�s lados de um tri�ngulo e o
classifique como equil�tero, is�sceles ou escaleno. Esta verifica��o deve ser realizada atrav�s de um subprograma. */

#include <stdio.h>
#include <locale.h>

float verificacao(float l1, float l2, float l3)
{
    if (l1 != l2 && l1 != l3 && l2 != l3)
    {
        printf("\nO tri�ngulo � escaleno.\n\n");
    }
    else if (l1 == l2 && l2 == l3)
    {
        printf("\nO triangulo � equil�tero.\n\n");
    }
    else
    {
        printf("\nO triangulo � is�sceles.\n\n");
    }
}

void main()
{
    setlocale(LC_ALL, "Portuguese");
    float l1, l2, l3;
    printf("Insira o primeiro lado do tri�ngulo: ");
    scanf("%f", &l1);
    printf("Insira o segundo lado do tri�ngulo: ");
    scanf("%f", &l2);
    printf("Insira o terceiro lado do tri�ngulo: ");
    scanf("%f", &l3);

    verificacao(l1, l2, l3);

    system("pause");
}