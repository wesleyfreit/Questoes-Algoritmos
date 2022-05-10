/* 229.	Escreva um programa que leia os valores dos três lados de um triângulo e o
classifique como equilátero, isósceles ou escaleno. Esta verificação deve ser realizada através de um subprograma. */

#include <stdio.h>
#include <locale.h>

float verificacao(float l1, float l2, float l3)
{
    if (l1 != l2 && l1 != l3 && l2 != l3)
    {
        printf("\nO triângulo é escaleno.\n\n");
    }
    else if (l1 == l2 && l2 == l3)
    {
        printf("\nO triangulo é equilátero.\n\n");
    }
    else
    {
        printf("\nO triangulo é isósceles.\n\n");
    }
}

void main()
{
    setlocale(LC_ALL, "Portuguese");
    float l1, l2, l3;
    printf("Insira o primeiro lado do triângulo: ");
    scanf("%f", &l1);
    printf("Insira o segundo lado do triângulo: ");
    scanf("%f", &l2);
    printf("Insira o terceiro lado do triângulo: ");
    scanf("%f", &l3);

    verificacao(l1, l2, l3);

    system("pause");
}