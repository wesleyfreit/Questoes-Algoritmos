/* 95.	Escreva um programa que leia quatro números reais e verifique se eles formam, na ordem em que foram digitados, uma progressão 
aritmética, uma progressão geométrica, os dois tipos de progressão ou nenhum tipo de progressão. */

#include <stdio.h>

void main()
{
    int n1, n2, n3, n4;
    printf("Insira 4 numeros reais: ");
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

    int pa1 = n2 - n1;
    int pa2 = n3 - n2;
    int pa3 = n4 - n3;

    int div = n2 / n1;

    int pg1 = div * n1;
    int pg2 = div * n2;
    int pg3 = div * n3;

    int mult = n1 / n4;

    if(pa1 == pa2 && pa2 == pa3)
    {
        printf("\nE uma progressao aritmetica.");
    }
    else if(n1 < n4 && pg1 == n2 && pg2 == n3 && pg3 == n4)
    {       
        printf("\nE uma progressao geometrica.");
    }
    else if(n1 > n4 && mult == n2)
    {
        printf("\nE uma progressao geometrica."); 
    }
    else
    {
        printf("\nNao e nenhum tipo de progressao.");
    }
}