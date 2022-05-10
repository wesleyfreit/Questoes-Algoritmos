/* 67.	Escreva um programa que leia o valor de um ano e verifique se ele é ou não bissexto. Um ano é bissexto se ele for 
divisível por quatrocentos ou se se ele for divisível por 4 mas não for divisível por 100. */

#include <stdio.h>

void main()
{
    int ano;
    printf("Insira o ano: ");
    scanf("%d", &ano);

    if (ano % 4 == 0)
    {
        printf("\nO ano e bissexto.");
    }
    else
    {
        printf("\nO ano nao e bissexto.");
    }
}
