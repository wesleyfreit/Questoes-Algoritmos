/* 69.	Escreva um programa que leia as coordenadas x e y de um ponto e verifique a quantidade de quadrantes a que este ponto pertence.   */

#include <stdio.h>

void main()
{
     float x, y;
     printf("Informe o eixo x > ");
     scanf(" %f", &x);

     printf("Informe o eixo y > ");
     scanf(" %f", &y);

     if (x == 0 && y == 0)
     {
          printf("Os eixos pertecem a 4 quadrantes");
     }
     else if (x == 0 || y == 0)
     {
          printf("Os eixos pertencem a 1 quadrante");
     }
     else
     {
          printf("Os eixos pertencem a 2 quadrantes");
     }
}
