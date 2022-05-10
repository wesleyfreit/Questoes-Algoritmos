/* 80.	Escreva um programa que leia os coeficientes a, b e c de uma equação do 2º grau e calcule todas as suas raízes reais.  */

#include <stdio.h>
#include <math.h>

void main()
{
    int a, b, c;
    printf("Insira A: ");
    scanf("%d", &a);
    printf("Insira B: ");
    scanf("%d", &b);
    printf("Insira C: ");
    scanf("%d", &c);

    float eq = (pow(b, 2)) - 4 * a * c;
    float delta = sqrt(eq);

    if (delta > 0)
    {
        float x1 = (-b + sqrt(delta)) / 2 * a;
        float x2 = (-b - sqrt(delta)) / 2 * a;
        printf("\nx' = %.1f", x1);
        printf("\nx'' = %.1f", x2);
    }
    else if (delta == 0)
    {
        float x = (-b + delta) / 2 * a;
        printf("\nx = %.1f", x);
    }
    else
    {
        printf("\nA equacao nao tem raizes reais pois delta e negativo.");
    }
}
