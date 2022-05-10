/* 79.   Escreva um programa que leia os coeficientes a, b e c de uma equação do 2º grau e verifique a quantidade de raízes reais da equação.   */

#include <stdio.h>
#include <math.h>

void main()
{
     int a, b, c;
     printf("Insira A: ");
     scanf("%d", &a);
     printf("Insira B: ");
     scanf("%d", &b);
     printf("Insira C: ");
     scanf("%d", &c);

     float eq = (pow(b ,2)) - 4 * a * c;
     float delta = sqrt(eq);

     if(delta > 0){
          printf("\nA equacao tem duas raizes reais.");
     }
     else if(delta == 0){
          printf("\nA equacao tem apenas uma raiz real.");
     }
     else{
          printf("\nA equacao nao tem raizes reais pois delta e negativo.");
     }
}
