/* 70.	Escreva um programa que leia os valores dos três lados de um triângulo e o classifique como equilátero, isósceles ou escaleno. */

#include <stdio.h>

void main()
{
    float l1,l2,l3;
    printf("Informe o valor dos tres lados do triangulo: ");
    scanf("%f%f%f", &l1, &l2, &l3);

    if(l1 == l2 && l2 == l3){
        printf("O triangulo e equilatero");
    }
    else if(l1 == l2 || l2 == l3 || l1 == l3) {
        printf("O triangulo e isosceles");
    }
    else {
        printf("O triangulo e escaleno");
    }
}
