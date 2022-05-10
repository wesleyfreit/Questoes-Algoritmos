/* 79.	Escreva um programa que leia os coeficientes a, b e c de uma equação do 2º grau e verifique a quantidade de raízes reais da equação.   */

#include <stdio.h>

void main()
{
     float pGaso, pAlc;
     printf("Insira o preco da gasolina: ");
     scanf("%f", &pGaso);
     printf("Insira o preco do alcool: ");
     scanf("%f", &pAlc);

     float mult = pGaso * 0.7;

     if (mult <= pAlc)
     {
          printf("\nE melhor abastecer gasolina.");
     }
     else
     {
          printf("\nE melhor abastecer alcool.");
     }
}
