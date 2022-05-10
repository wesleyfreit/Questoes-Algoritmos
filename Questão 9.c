/* 9.	Escreva um programa que leia o valor de uma distância 
percorrida em km e o tempo gasto em horas e calcule a velocidade média em m/s. */

#include <stdio.h>

const float fM = 1000;
const float fS = 3600;


void main()
{
    float km,h;
    printf("Escreva a distancia percorrida em Km: ");
    scanf("%f", &km);
    printf("Escreva o tempo gasto em h: ");
    scanf("%f", &h);

    float convKm = km * fM;
    float convH = h * fS;

    float ms = convKm / convH;

    printf("\nA distacia percorrida e de %.1f m/s", ms);

    return 0;
}