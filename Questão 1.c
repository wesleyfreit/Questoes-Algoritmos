/* 1.	Escreva um programa que leia três números inteiros e calcule a sua média aritmética. */

#include <stdio.h>

void main()
{
    float m1,m2,m3;
    printf("Insira a primeira media: ");
    scanf("%f",&m1);
    printf("Insira a segunda media: ");
    scanf("%f",&m2);
    printf("Insira a terceira media: ");
    scanf("%f",&m3);

    float mA = (m1 + m2 + m3) / 3;
    printf("\nO valor da  media aritmetica sera = %.2f", mA);
}