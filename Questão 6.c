/* 6.	Escreva um programa que leia um número inteiro e informe
 o seu antecessor e o seu sucessor.*/

#include <stdio.h>

void main()
{
    int n;
    printf("Insira um numero: ");
    scanf("%d", &n);

    int ant = n - 1;
    int suc = n + 1;
    printf("\nAntecessor = %d\nSucessor = %d", ant, suc);

    return 0;
}