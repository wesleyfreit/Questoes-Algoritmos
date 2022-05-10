/* 205.	Escreva um programa que leia o valor de uma distância percorrida em km e o tempo gasto em horas e calcule a
velocidade média em m/s. A conversão deve ser realizada através de um subprograma.  */

#include <stdio.h>

const float fM = 1000;
const float fS = 3600;

float ms(float km, float h)
{

    km = km * fM;
    h = h * fS;

    return km / h;
}
void main()
{
    float km, h;

    printf("\nInsira a distancia em Km: ");
    scanf("%f", &km);
    printf("Insira o tempo em h: ");
    scanf("%f", &h);

    printf("\n | A distancia percorrida eh = %.1f m/s\n\n", ms(km, h));

    system("pause");
}
