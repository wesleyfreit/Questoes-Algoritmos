/* 137.	Escreva um programa que leia um número inteiro positivo e calcule o número de algarismos deste número.  */

#include <stdio.h>

const int vl = 10;

void main()
{
    int n, k;
    printf("Insira um numero inteiro: ");
    scanf("%d", &n);

    int cont = 0;

    while(n != 0){
        n = n / vl;
        cont++;
    }
    printf("\nO numero tem %d algarismos.", cont);

}