/* 201.	Escreva um programa que leia o número inteiro positivo e calcule o seu dobro,
o seu triplo, o seu quadrado, o seu cubo e a sua raiz quadrada. Cada uma das informações
solicitadas deve ser calculada através de um subprograma.  */

#include <stdio.h>
#include <math.h>

float dobro(float n)
{
    return (float)(n * 2);
}
float triplo(float n)
{
    return (float)(n * 3);
}
float quadrado(float n)
{
    return (float)(pow(n, 2));
}
float cubo(float n)
{
    return (float)(pow(n, 3));
}
float raiz(float n)
{
    return (float)(sqrt(n));
}
void main()
{
    float n;

    printf("Insira um numero: ");
    scanf("%f", &n);

    float vDobro = dobro(n);
    float vTriplo = triplo(n);
    float vQuadrado = quadrado(n);
    float vCubo = cubo(n);
    float vRaiz = raiz(n);

    printf("\nDobro = %.0f", vDobro);
    printf("\nTriplo = %.0f", vTriplo);
    printf("\nQuadrado = %.0f", vQuadrado);
    printf("\nCubo = %.0f", vCubo);
    printf("\nRaiz = %.2f", vRaiz);

}
