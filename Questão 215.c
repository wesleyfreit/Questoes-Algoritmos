/* 215.	O carro de Jo�o consegue percorrer em m�dia 14 km consumindo 1 litro de combust�vel. Escreva um programa que leia o
valor da dist�ncia que Jo�o vai percorrer durante uma viagem e o pre�o atual de um litro de combust�vel e calcule quanto ele
dever� gastar com combust�vel durante a viagem. O c�lculo deve ser realizado atrav�s de um subprograma.  */
#include <stdio.h>
#include <math.h>
#include <locale.h>

const float kmp = 14;

float gasto(float distancia, float comb)
{
    return (comb / kmp) * distancia;
}

void main()
{
    setlocale(LC_ALL, "Portuguese");

    float distancia, comb;
    printf("Insira a distancia que Jo�o vai percorrer na viagem > ");
    scanf("%f", &distancia);
    printf("Insira o pre�o do combust�vel > ");
    scanf("%f", &comb);

    printf("\nJo�o vai gastar R$%.2f em combust�vel\n\n", gasto(distancia, comb));

    system("pause");
}
