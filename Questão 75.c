/* 75.	Escreva um programa que leia os valores dos três ângulos internos de um triângulo e verifique se o mesmo é um triângulo retângulo.  */

#include <stdio.h>

void main()
{
     int a1, a2, a3;
     printf("Insira os tres angulos de um triangulo: ");
     scanf("%d%d%d", &a1, &a2, &a3);

     if (a1 == 90 || a2 == 90 || a3 == 90)
     {
          int soma = a1 + a2 + a3;
          if (soma > 180 || soma < 180)
          {
               printf("\nOs valores dos angulos internos nao pode ser maior ou menor que 180 graus.");
          }
          else
          {
               printf("\nO triangulo e retangulo.");
          }
     }
     else
     {
          printf("\nNao ha nenhum angulo de 90 graus, nao e retangulo.");
     }
}
