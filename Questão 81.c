/* 81.    Escreva um programa que leia os valores das coordenadas x e y do centro de uma circunferência e o valor do seu raio e, 
a seguir, leia as coordenadas x e y de um ponto e verifique se este ponto está localizado dentro da circunferência.
distancia = sqrt (x1 − x2)² +(y1 − y2)²  */

#include <stdio.h>
#include <math.h>

const float pi = 3.14;

void main()
{
     float x1, y1, x2, y2, raio;
     printf("Insira as coordenadas x1 e y1: ");
     scanf("%f%f", &x1, &y1);

     printf("Informe o raio da circunferencia: ");
     scanf("%f", &raio);

     printf("\nInsira as coordenadas x2 e y2: ");
     scanf("%f%f", &x2, &y2);

     float distancia = sqrt((pow(x1, 2) - pow(x2, 2 )) + (pow(y1, 2) - pow(y2, 2)));

     float circunferencia = 2 * pi * raio;

     if (distancia <= circunferencia)
     {
          printf("\nO ponto esta localizado dentro da circunferencia.");
     }
     else
     {
          printf("\nO ponto esta fora da circunferencia.");
     }
}
