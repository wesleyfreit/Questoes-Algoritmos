/* 76.	Escreva um programa que leia as coordenadas x e y de um ponto e verifique a qual quadrante este ponto pertence. 
Você pode supor que o ponto digitado pelo usuário pertence a apenas um quadrante.   */

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
          printf("\nOs eixos pertecem aos 4 quadrantes.");
     }
     else if (y == 0 && x > 0)
     {
          printf("\nOs eixos pertencem a 1 quadrante, primeiro quadrante.");
     }
     else if(y == 0 && x < 0){
          printf("\nOs eixos pertencem a 1 quadrante, terceiro quadrante.");
     }
     else if(x == 0 && y > 0){
          printf("\nOs eixos pertencem a 1 quadrante, segundo quadrante.");
     }
     else if(x == 0 && y < 0){
          printf("\nOs eixos pertencem a 1 quadrante, quarto quadrante.");
     }
     else if(x > 0 && y > 0){
          printf("\nOs eixos pertencem a 2 quadrantes, os quadrantes 1 e 2.");
     }
     else if(x > 0 && y < 0){
          printf("\nOs eixos pertencem a 2 quadrantes, os quadrantes 1 e 4.");
     }
     else if(x < 0 && y > 0){
          printf("\nOs eixos pertencem a 2 quadrantes, os quadrantes 2 e 3.");
     }
     else if(x < 0 && y < 0){
          printf("\nOs eixos pertencem a 2 quadrantes, os quadrantes 3 e 4.");
     }
     
}
