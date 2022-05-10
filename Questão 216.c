/* 216.	Escreva um programa que leia o valor de uma distância em metros e calcule o seu valor correspondente em quilômetros,
hectômetros, decâmetros, centímetros, decímetros e milímetros. O programa deve ter um subprograma para converter para cada
unidade de medida.   */
#include <stdio.h>
#include <math.h>
#include <locale.h>

float km(float m)
{
    return m / 1000;
}
float hm(float m)
{
    return m / 100;
}
float dm(float m)
{
    return m / 10;
}
float dc(float m)
{
    return m * 10;
}
float cm(float m)
{
    return m * 100;
}
float mm(float m)
{
    return m * 1000;
}

void main()
{
    setlocale(LC_ALL, "Portuguese");

    float m;
    printf("\nInsira o valor da distância em metros: ");
    scanf("%f", &m);

    printf("\n | A conversão de %.2f m é:\n", m);
    printf("\n   %.3f km", km(m));
    printf("\n   %.2f hm", hm(m));
    printf("\n   %.2f dm", dm(m));
    printf("\n   %.2f dc", dc(m));
    printf("\n   %.2f cm", cm(m));
    printf("\n   %.2f mm\n\n", mm(m));

    system("pause");
}
