/* 77.	Escreva um programa que leia as coordenadas x e y de um ponto e verifique se este ponto pertence à reta y = 2x +1. */

#include <stdio.h>

void main()
{
    int x, y;
    printf("Insira x e y: ");
    scanf("%d%d", &x, &y);

    int xis = 2 * x + 1;

    if(y == xis){
        printf("\nOs pontos pertencem a reta y = 2x + 1.");
    }
    else{
        printf("\nOs pontos nao pertencem a reta y = 2x + 1.");
    }
}
