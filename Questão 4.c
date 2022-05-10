/* 4.	Escreva um programa que leia o número inteiro positivo
 e calcule o seu dobro, o seu triplo, o seu quadrado, o seu 
 cubo e a sua raiz quadrada.  */

#include <stdio.h>
#include <math.h>

void main()
{
    int n;
    printf("Insira um numero inteiro: ");
    scanf("%d", &n);

    int dobro = n * 2;
    int triplo = n * 3;
    float quadrado = pow(n, 2);
    float cubo = pow(n, 3);
    float raiz = sqrt(n);

    printf("\nDobro = %d\nTriplo = %d\nQuadrado = %.0f\nCubo = %.0f\nRaiz = %.2f", dobro, triplo, quadrado, cubo, raiz);
    
    return 0;
}