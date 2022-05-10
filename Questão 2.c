/* 2.	Escreva um programa que leia três números e 
seus respectivos pesos e calcule a sua média ponderada. */

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

    float mA = (m1 + m2 + m2 + m3 + m3 + m3) / 6;
    printf("\nO valor da  media aritmetica ponderada sera = %.2f", mA);
}