/* 215.	O carro de João consegue percorrer em média 14 km consumindo 1 litro de combustível. Escreva um programa que leia o
valor da distância que João vai percorrer durante uma viagem e o preço atual de um litro de combustível e calcule quanto ele
deverá gastar com combustível durante a viagem. O cálculo deve ser realizado através de um subprograma.  */
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
    printf("Insira a distancia que João vai percorrer na viagem > ");
    scanf("%f", &distancia);
    printf("Insira o preço do combustível > ");
    scanf("%f", &comb);

    printf("\nJoão vai gastar R$%.2f em combustível\n\n", gasto(distancia, comb));

    system("pause");
}
