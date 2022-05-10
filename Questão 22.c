/* 22.	Escreva um programa que leia dois números inteiros a e b e determine
 o maior múltiplo de a que é menor ou igual a b. Por exemplo, o maior 
 múltiplo de 3 menor ou igual a 50 é 48.  */

#include <stdio.h>

void main()
{
    int a, b;
    printf("insira dois numeros para calcular o maior multiplo entre eles, sendo A o menor e B o maior: ");
    scanf("%d%d", &a, &b);

    int div = b / a;
    int mMut = a * div;

    printf("\nO maior multiplo entre %d e %d sera %d", a, b, mMut);
}