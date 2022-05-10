/* 208.	Escreva um programa que leia o valor do seno de um ângulo e calcule o valor absoluto do seu cosseno. O cálculo
deve ser realizado através de um subprograma. */

#include <stdio.h>
#include <math.h>

float cosseno(int seno)
{
    float raizC = sqrt(1 - pow(seno, 2));
    return raizC;
}
void main()
{
    int seno;

    printf("\nInsira o valor do seno: ");
    scanf("%d", &seno);

    float coss = cosseno(seno);

    if (coss == 0 || coss == 1)
    {
        printf("\n | O cosseno eh = %.0f\n\n", coss);
    }
    else
    {
        printf("\n | Valor nao existe.\n\n");
    }

    system("pause");
}
