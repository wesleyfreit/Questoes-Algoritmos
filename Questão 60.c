/* 60.	Escreva um programa que leia o número de pessoas que vão participar de um churrasco e calcule quantos quilos de carne devem ser comprados. 
Para isso, considere que cada pessoa consome 250 g de carne.   */

#include <stdio.h>

const float gPperson = 250;

void main()
{
    int nPerson;

    printf("Insira a quantidade de pessoas que vao participar do churrasco: ");
    scanf("%d", &nPerson);

    float quantCarne = (nPerson * gPperson) / 1000;

    printf("\nDevem ser comprados %.2fkg de carne.", quantCarne);
}
