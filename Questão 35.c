/* 35.	Escreva um programa que leia o valor de uma distância em metros e 
calcule o seu valor correspondente em quilômetros, hectômetros, decâmetros, centímetros, decímetros e milímetros. */

#include <stdio.h>

void main()
{
    float m;
    printf("Insira o valor da distancia em metros: ");
    scanf("%f", &m);

    float km = m / 100;
    float cm = m * 100;
    float dm = cm * 100;
    float mm = dm * 100;

    printf("\nOs Valores convertidos de %.2fm ficarao assim:\n",m);
    printf("\n%.2f Km \n%.2f cm \n%.2f dm \n%.2f mm",km,cm,dm,mm);
}